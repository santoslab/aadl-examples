// #Sireum

package hamr

import org.sireum._
import art._

// This file was auto-generated.  Do not edit

object SW_Impl_Instance_UXAS_UxAS_App extends App {

  val entryPoints: Bridge.EntryPoints = Arch.SW_Impl_Instance_UXAS_UxAS.entryPoints
  val appPortId: Art.PortId = IPCPorts.SW_Impl_Instance_UXAS_UxAS_App
  val appPortIdOpt: Option[Art.PortId] = Some(appPortId)
  val AutomationRequestPortId: Art.PortId = Arch.SW_Impl_Instance_UXAS_UxAS.AutomationRequest.id
  val AutomationRequestPortIdOpt: Option[Art.PortId] = Some(AutomationRequestPortId)
  val AirVehicleStatePortId: Art.PortId = Arch.SW_Impl_Instance_UXAS_UxAS.AirVehicleState.id
  val AirVehicleStatePortIdOpt: Option[Art.PortId] = Some(AirVehicleStatePortId)
  val OperatingRegionPortId: Art.PortId = Arch.SW_Impl_Instance_UXAS_UxAS.OperatingRegion.id
  val OperatingRegionPortIdOpt: Option[Art.PortId] = Some(OperatingRegionPortId)
  val LineSearchTaskPortId: Art.PortId = Arch.SW_Impl_Instance_UXAS_UxAS.LineSearchTask.id
  val LineSearchTaskPortIdOpt: Option[Art.PortId] = Some(LineSearchTaskPortId)

  def initialiseArchitecture(seed: Z): Unit = {
    Platform.initialise(seed, appPortIdOpt)
    Platform.initialise(seed, AutomationRequestPortIdOpt)
    Platform.initialise(seed, AirVehicleStatePortIdOpt)
    Platform.initialise(seed, OperatingRegionPortIdOpt)
    Platform.initialise(seed, LineSearchTaskPortIdOpt)

    Art.run(Arch.ad)
  }

  def initialise(): Unit = {
    entryPoints.initialise()
  }

  def compute(): Unit = {
    Platform.receiveAsync(AutomationRequestPortIdOpt) match {
      case Some((_, v: Base_Types.Bits_Payload)) => ArtNix.updateData(AutomationRequestPortId, v)
      case Some((_, v)) => halt(s"Unexpected payload on port AutomationRequest.  Expecting something of type Base_Types.Bits_Payload but received ${v}")
      case None() => // do nothing
    }
    Platform.receiveAsync(AirVehicleStatePortIdOpt) match {
      case Some((_, v: Base_Types.Bits_Payload)) => ArtNix.updateData(AirVehicleStatePortId, v)
      case Some((_, v)) => halt(s"Unexpected payload on port AirVehicleState.  Expecting something of type Base_Types.Bits_Payload but received ${v}")
      case None() => // do nothing
    }
    Platform.receiveAsync(OperatingRegionPortIdOpt) match {
      case Some((_, v: Base_Types.Bits_Payload)) => ArtNix.updateData(OperatingRegionPortId, v)
      case Some((_, v)) => halt(s"Unexpected payload on port OperatingRegion.  Expecting something of type Base_Types.Bits_Payload but received ${v}")
      case None() => // do nothing
    }
    Platform.receiveAsync(LineSearchTaskPortIdOpt) match {
      case Some((_, v: Base_Types.Bits_Payload)) => ArtNix.updateData(LineSearchTaskPortId, v)
      case Some((_, v)) => halt(s"Unexpected payload on port LineSearchTask.  Expecting something of type Base_Types.Bits_Payload but received ${v}")
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

    println("SW_Impl_Instance_UXAS_UxAS_App starting ...")

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