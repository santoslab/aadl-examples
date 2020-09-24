// #Sireum

package hamr

import org.sireum._
import art._

// This file was auto-generated.  Do not edit

object SW_Impl_Instance_AM_CASE_AttestationManager_App extends App {

  val entryPoints: Bridge.EntryPoints = Arch.SW_Impl_Instance_AM_CASE_AttestationManager.entryPoints
  val appPortId: Art.PortId = IPCPorts.SW_Impl_Instance_AM_CASE_AttestationManager_App
  val appPortIdOpt: Option[Art.PortId] = Some(appPortId)
  val attestation_responsePortId: Art.PortId = Arch.SW_Impl_Instance_AM_CASE_AttestationManager.attestation_response.id
  val attestation_responsePortIdOpt: Option[Art.PortId] = Some(attestation_responsePortId)

  def initialiseArchitecture(seed: Z): Unit = {
    Platform.initialise(seed, appPortIdOpt)
    Platform.initialise(seed, attestation_responsePortIdOpt)

    Art.run(Arch.ad)
  }

  def initialise(): Unit = {
    entryPoints.initialise()
  }

  def compute(): Unit = {
    Platform.receiveAsync(attestation_responsePortIdOpt) match {
      case Some((_, v: Base_Types.Bits_Payload)) => ArtNix.updateData(attestation_responsePortId, v)
      case Some((_, v)) => halt(s"Unexpected payload on port attestation_response.  Expecting something of type Base_Types.Bits_Payload but received ${v}")
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

    println("SW_Impl_Instance_AM_CASE_AttestationManager_App starting ...")

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