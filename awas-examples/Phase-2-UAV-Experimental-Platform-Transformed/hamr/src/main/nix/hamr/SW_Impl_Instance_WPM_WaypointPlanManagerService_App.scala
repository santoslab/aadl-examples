// #Sireum

package hamr

import org.sireum._
import art._

// This file was auto-generated.  Do not edit

object SW_Impl_Instance_WPM_WaypointPlanManagerService_App extends App {

  val entryPoints: Bridge.EntryPoints = Arch.SW_Impl_Instance_WPM_WaypointPlanManagerService.entryPoints
  val appPortId: Art.PortId = IPCPorts.SW_Impl_Instance_WPM_WaypointPlanManagerService_App
  val appPortIdOpt: Option[Art.PortId] = Some(appPortId)
  val AutomationResponsePortId: Art.PortId = Arch.SW_Impl_Instance_WPM_WaypointPlanManagerService.AutomationResponse.id
  val AutomationResponsePortIdOpt: Option[Art.PortId] = Some(AutomationResponsePortId)
  val AirVehicleStatePortId: Art.PortId = Arch.SW_Impl_Instance_WPM_WaypointPlanManagerService.AirVehicleState.id
  val AirVehicleStatePortIdOpt: Option[Art.PortId] = Some(AirVehicleStatePortId)
  val ReturnHomePortId: Art.PortId = Arch.SW_Impl_Instance_WPM_WaypointPlanManagerService.ReturnHome.id
  val ReturnHomePortIdOpt: Option[Art.PortId] = Some(ReturnHomePortId)

  def initialiseArchitecture(seed: Z): Unit = {
    Platform.initialise(seed, appPortIdOpt)
    Platform.initialise(seed, AutomationResponsePortIdOpt)
    Platform.initialise(seed, AirVehicleStatePortIdOpt)
    Platform.initialise(seed, ReturnHomePortIdOpt)

    Art.run(Arch.ad)
  }

  def initialise(): Unit = {
    entryPoints.initialise()
  }

  def compute(): Unit = {
    Platform.receiveAsync(AutomationResponsePortIdOpt) match {
      case Some((_, v: Base_Types.Bits_Payload)) => ArtNix.updateData(AutomationResponsePortId, v)
      case Some((_, v)) => halt(s"Unexpected payload on port AutomationResponse.  Expecting something of type Base_Types.Bits_Payload but received ${v}")
      case None() => // do nothing
    }
    Platform.receiveAsync(AirVehicleStatePortIdOpt) match {
      case Some((_, v: Base_Types.Bits_Payload)) => ArtNix.updateData(AirVehicleStatePortId, v)
      case Some((_, v)) => halt(s"Unexpected payload on port AirVehicleState.  Expecting something of type Base_Types.Bits_Payload but received ${v}")
      case None() => // do nothing
    }
    Platform.receiveAsync(ReturnHomePortIdOpt) match {
      case Some((_, v: art.Empty)) => ArtNix.updateData(ReturnHomePortId, v)
      case Some((_, v)) => halt(s"Unexpected payload on port ReturnHome.  Expecting something of type art.Empty but received ${v}")
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

    println("SW_Impl_Instance_WPM_WaypointPlanManagerService_App starting ...")

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