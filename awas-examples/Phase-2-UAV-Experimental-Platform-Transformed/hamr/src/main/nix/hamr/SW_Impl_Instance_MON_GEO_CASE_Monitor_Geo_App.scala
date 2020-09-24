// #Sireum

package hamr

import org.sireum._
import art._

// This file was auto-generated.  Do not edit

object SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo_App extends App {

  val entryPoints: Bridge.EntryPoints = Arch.SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo.entryPoints
  val appPortId: Art.PortId = IPCPorts.SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo_App
  val appPortIdOpt: Option[Art.PortId] = Some(appPortId)
  val keep_in_zonesPortId: Art.PortId = Arch.SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo.keep_in_zones.id
  val keep_in_zonesPortIdOpt: Option[Art.PortId] = Some(keep_in_zonesPortId)
  val keep_out_zonesPortId: Art.PortId = Arch.SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo.keep_out_zones.id
  val keep_out_zonesPortIdOpt: Option[Art.PortId] = Some(keep_out_zonesPortId)
  val observedPortId: Art.PortId = Arch.SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo.observed.id
  val observedPortIdOpt: Option[Art.PortId] = Some(observedPortId)

  def initialiseArchitecture(seed: Z): Unit = {
    Platform.initialise(seed, appPortIdOpt)
    Platform.initialise(seed, keep_in_zonesPortIdOpt)
    Platform.initialise(seed, keep_out_zonesPortIdOpt)
    Platform.initialise(seed, observedPortIdOpt)

    Art.run(Arch.ad)
  }

  def initialise(): Unit = {
    entryPoints.initialise()
  }

  def compute(): Unit = {
    Platform.receiveAsync(keep_in_zonesPortIdOpt) match {
      case Some((_, v: Base_Types.Bits_Payload)) => ArtNix.updateData(keep_in_zonesPortId, v)
      case Some((_, v)) => halt(s"Unexpected payload on port keep_in_zones.  Expecting something of type Base_Types.Bits_Payload but received ${v}")
      case None() => // do nothing
    }
    Platform.receiveAsync(keep_out_zonesPortIdOpt) match {
      case Some((_, v: Base_Types.Bits_Payload)) => ArtNix.updateData(keep_out_zonesPortId, v)
      case Some((_, v)) => halt(s"Unexpected payload on port keep_out_zones.  Expecting something of type Base_Types.Bits_Payload but received ${v}")
      case None() => // do nothing
    }
    Platform.receiveAsync(observedPortIdOpt) match {
      case Some((_, v: Base_Types.Bits_Payload)) => ArtNix.updateData(observedPortId, v)
      case Some((_, v)) => halt(s"Unexpected payload on port observed.  Expecting something of type Base_Types.Bits_Payload but received ${v}")
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

    println("SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo_App starting ...")

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