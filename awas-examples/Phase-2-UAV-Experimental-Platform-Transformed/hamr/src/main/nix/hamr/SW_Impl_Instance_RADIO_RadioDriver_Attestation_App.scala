// #Sireum

package hamr

import org.sireum._
import art._

// This file was auto-generated.  Do not edit

object SW_Impl_Instance_RADIO_RadioDriver_Attestation_App extends App {

  val entryPoints: Bridge.EntryPoints = Arch.SW_Impl_Instance_RADIO_RadioDriver_Attestation.entryPoints
  val appPortId: Art.PortId = IPCPorts.SW_Impl_Instance_RADIO_RadioDriver_Attestation_App
  val appPortIdOpt: Option[Art.PortId] = Some(appPortId)
  val recv_dataPortId: Art.PortId = Arch.SW_Impl_Instance_RADIO_RadioDriver_Attestation.recv_data.id
  val recv_dataPortIdOpt: Option[Art.PortId] = Some(recv_dataPortId)
  val am_requestPortId: Art.PortId = Arch.SW_Impl_Instance_RADIO_RadioDriver_Attestation.am_request.id
  val am_requestPortIdOpt: Option[Art.PortId] = Some(am_requestPortId)

  def initialiseArchitecture(seed: Z): Unit = {
    Platform.initialise(seed, appPortIdOpt)
    Platform.initialise(seed, recv_dataPortIdOpt)
    Platform.initialise(seed, am_requestPortIdOpt)

    Art.run(Arch.ad)
  }

  def initialise(): Unit = {
    entryPoints.initialise()
  }

  def compute(): Unit = {
    Platform.receiveAsync(recv_dataPortIdOpt) match {
      case Some((_, v: Base_Types.Bits_Payload)) => ArtNix.updateData(recv_dataPortId, v)
      case Some((_, v)) => halt(s"Unexpected payload on port recv_data.  Expecting something of type Base_Types.Bits_Payload but received ${v}")
      case None() => // do nothing
    }
    Platform.receiveAsync(am_requestPortIdOpt) match {
      case Some((_, v: Base_Types.Bits_Payload)) => ArtNix.updateData(am_requestPortId, v)
      case Some((_, v)) => halt(s"Unexpected payload on port am_request.  Expecting something of type Base_Types.Bits_Payload but received ${v}")
      case None() => // do nothing
    }
    entryPoints.compute()
    Process.sleep(500)
  }

  def finalise(): Unit = {
    entryPoints.finalise()
  }

  def main(args: ISZ[String]): Z = {

    val seed: Z = if (args.size == z"1") {
      val n = Z(args(0)).get
      if (n == z"0") 1 else n
    } else {
      1
    }

    initialiseArchitecture(seed)

    Platform.receive(appPortIdOpt) // pause after setting up component

    initialise()

    Platform.receive(appPortIdOpt) // pause after component init

    println("SW_Impl_Instance_RADIO_RadioDriver_Attestation_App starting ...")

    ArtNix.timeDispatch()

    var terminated = F
    while (!terminated) {
      val termOpt = Platform.receiveAsync(appPortIdOpt)
      if (termOpt.isEmpty) {
        compute()
      } else {
        terminated = T
      }
    }
    exit()

    return 0
  }

  def exit(): Unit = {
    finalise()
    Platform.finalise()
  }

  override def atExit(): Unit = {
    exit()
  }
}