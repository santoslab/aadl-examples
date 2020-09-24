// #Sireum

package hamr

import org.sireum._
import art._

// This file was auto-generated.  Do not edit

object SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_App extends App {

  val entryPoints: Bridge.EntryPoints = Arch.SW_Impl_Instance_MON_REQ_CASE_Monitor_Req.entryPoints
  val appPortId: Art.PortId = IPCPorts.SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_App
  val appPortIdOpt: Option[Art.PortId] = Some(appPortId)
  val observedPortId: Art.PortId = Arch.SW_Impl_Instance_MON_REQ_CASE_Monitor_Req.observed.id
  val observedPortIdOpt: Option[Art.PortId] = Some(observedPortId)
  val reference_1PortId: Art.PortId = Arch.SW_Impl_Instance_MON_REQ_CASE_Monitor_Req.reference_1.id
  val reference_1PortIdOpt: Option[Art.PortId] = Some(reference_1PortId)

  def initialiseArchitecture(seed: Z): Unit = {
    Platform.initialise(seed, appPortIdOpt)
    Platform.initialise(seed, observedPortIdOpt)
    Platform.initialise(seed, reference_1PortIdOpt)

    Art.run(Arch.ad)
  }

  def initialise(): Unit = {
    entryPoints.initialise()
  }

  def compute(): Unit = {
    Platform.receiveAsync(observedPortIdOpt) match {
      case Some((_, v: Base_Types.Bits_Payload)) => ArtNix.updateData(observedPortId, v)
      case Some((_, v)) => halt(s"Unexpected payload on port observed.  Expecting something of type Base_Types.Bits_Payload but received ${v}")
      case None() => // do nothing
    }
    Platform.receiveAsync(reference_1PortIdOpt) match {
      case Some((_, v: Base_Types.Bits_Payload)) => ArtNix.updateData(reference_1PortId, v)
      case Some((_, v)) => halt(s"Unexpected payload on port reference_1.  Expecting something of type Base_Types.Bits_Payload but received ${v}")
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

    println("SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_App starting ...")

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