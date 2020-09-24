// #Sireum

package hamr

import org.sireum._
import art._

// This file was auto-generated.  Do not edit

object ArtNix {

  val maxPortIds: Art.PortId = IPCPorts.Main + 1
  val timeTriggered: TimeTriggered = TimeTriggered()
  val noData: Option[DataContent] = None()
  val data: MS[Art.PortId, Option[DataContent]] = MS.create(maxPortIds, noData)
  val connection: MS[Art.PortId, ISZ[(Art.PortId, Art.PortId)]] = {
    val r = MS.create[Art.PortId, ISZ[(Art.PortId, Art.PortId)]](maxPortIds, ISZ())

    r(Arch.SW_Impl_Instance_FC_UART_UARTDriver.AirVehicleState.id) = ISZ(
      (IPCPorts.SW_Impl_Instance_UXAS_UxAS_App, Arch.SW_Impl_Instance_UXAS_UxAS.AirVehicleState.id),
      (IPCPorts.SW_Impl_Instance_WPM_WaypointPlanManagerService_App, Arch.SW_Impl_Instance_WPM_WaypointPlanManagerService.AirVehicleState.id)
    )
    r(Arch.SW_Impl_Instance_RADIO_RadioDriver_Attestation.AutomationRequest.id) = ISZ(
      (IPCPorts.SW_Impl_Instance_AM_Gate_CASE_AttestationGate_App, Arch.SW_Impl_Instance_AM_Gate_CASE_AttestationGate.AutomationRequest_in.id)
    )
    r(Arch.SW_Impl_Instance_RADIO_RadioDriver_Attestation.OperatingRegion.id) = ISZ(
      (IPCPorts.SW_Impl_Instance_AM_Gate_CASE_AttestationGate_App, Arch.SW_Impl_Instance_AM_Gate_CASE_AttestationGate.OperatingRegion_in.id)
    )
    r(Arch.SW_Impl_Instance_RADIO_RadioDriver_Attestation.LineSearchTask.id) = ISZ(
      (IPCPorts.SW_Impl_Instance_AM_Gate_CASE_AttestationGate_App, Arch.SW_Impl_Instance_AM_Gate_CASE_AttestationGate.LineSearchTask_in.id)
    )
    r(Arch.SW_Impl_Instance_RADIO_RadioDriver_Attestation.am_response.id) = ISZ(
      (IPCPorts.SW_Impl_Instance_AM_CASE_AttestationManager_App, Arch.SW_Impl_Instance_AM_CASE_AttestationManager.attestation_response.id)
    )
    r(Arch.SW_Impl_Instance_FlyZones_FlyZonesDatabase.keep_in_zones.id) = ISZ(
      (IPCPorts.SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo_App, Arch.SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo.keep_in_zones.id)
    )
    r(Arch.SW_Impl_Instance_FlyZones_FlyZonesDatabase.keep_out_zones.id) = ISZ(
      (IPCPorts.SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo_App, Arch.SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo.keep_out_zones.id)
    )
    r(Arch.SW_Impl_Instance_UXAS_UxAS.AutomationResponse.id) = ISZ(
      (IPCPorts.SW_Impl_Instance_FLT_ARes_CASE_Filter_ARes_App, Arch.SW_Impl_Instance_FLT_ARes_CASE_Filter_ARes.filter_in.id),
      (IPCPorts.SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_App, Arch.SW_Impl_Instance_MON_REQ_CASE_Monitor_Req.observed.id)
    )
    r(Arch.SW_Impl_Instance_WPM_WaypointPlanManagerService.MissionCommand.id) = ISZ(
      (IPCPorts.SW_Impl_Instance_FC_UART_UARTDriver_App, Arch.SW_Impl_Instance_FC_UART_UARTDriver.MissionCommand.id)
    )
    r(Arch.SW_Impl_Instance_AM_CASE_AttestationManager.trusted_ids.id) = ISZ(
      (IPCPorts.SW_Impl_Instance_AM_Gate_CASE_AttestationGate_App, Arch.SW_Impl_Instance_AM_Gate_CASE_AttestationGate.trusted_ids.id)
    )
    r(Arch.SW_Impl_Instance_AM_CASE_AttestationManager.attestation_request.id) = ISZ(
      (IPCPorts.SW_Impl_Instance_RADIO_RadioDriver_Attestation_App, Arch.SW_Impl_Instance_RADIO_RadioDriver_Attestation.am_request.id)
    )
    r(Arch.SW_Impl_Instance_AM_Gate_CASE_AttestationGate.AutomationRequest_out.id) = ISZ(
      (IPCPorts.SW_Impl_Instance_FLT_AReq_CASE_Filter_AReq_App, Arch.SW_Impl_Instance_FLT_AReq_CASE_Filter_AReq.filter_in.id)
    )
    r(Arch.SW_Impl_Instance_AM_Gate_CASE_AttestationGate.OperatingRegion_out.id) = ISZ(
      (IPCPorts.SW_Impl_Instance_FLT_OR_CASE_Filter_OR_App, Arch.SW_Impl_Instance_FLT_OR_CASE_Filter_OR.filter_in.id)
    )
    r(Arch.SW_Impl_Instance_AM_Gate_CASE_AttestationGate.LineSearchTask_out.id) = ISZ(
      (IPCPorts.SW_Impl_Instance_FLT_LST_CASE_Filter_LST_App, Arch.SW_Impl_Instance_FLT_LST_CASE_Filter_LST.filter_in.id)
    )
    r(Arch.SW_Impl_Instance_FLT_AReq_CASE_Filter_AReq.filter_out.id) = ISZ(
      (IPCPorts.SW_Impl_Instance_UXAS_UxAS_App, Arch.SW_Impl_Instance_UXAS_UxAS.AutomationRequest.id),
      (IPCPorts.SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_App, Arch.SW_Impl_Instance_MON_REQ_CASE_Monitor_Req.reference_1.id)
    )
    r(Arch.SW_Impl_Instance_FLT_OR_CASE_Filter_OR.filter_out.id) = ISZ(
      (IPCPorts.SW_Impl_Instance_UXAS_UxAS_App, Arch.SW_Impl_Instance_UXAS_UxAS.OperatingRegion.id)
    )
    r(Arch.SW_Impl_Instance_FLT_LST_CASE_Filter_LST.filter_out.id) = ISZ(
      (IPCPorts.SW_Impl_Instance_UXAS_UxAS_App, Arch.SW_Impl_Instance_UXAS_UxAS.LineSearchTask.id)
    )
    r(Arch.SW_Impl_Instance_FLT_ARes_CASE_Filter_ARes.filter_out.id) = ISZ(
      (IPCPorts.SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo_App, Arch.SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo.observed.id)
    )
    r(Arch.SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo.output.id) = ISZ(
      (IPCPorts.SW_Impl_Instance_WPM_WaypointPlanManagerService_App, Arch.SW_Impl_Instance_WPM_WaypointPlanManagerService.AutomationResponse.id)
    )
    r(Arch.SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo.alert.id) = ISZ(
      (IPCPorts.SW_Impl_Instance_WPM_WaypointPlanManagerService_App, Arch.SW_Impl_Instance_WPM_WaypointPlanManagerService.ReturnHome.id)
    )

    r
  }
  val eventInPorts: MS[Z, Art.PortId] = MSZ(
    Arch.SW_Impl_Instance_FC_UART_UARTDriver.recv_data.id,
    Arch.SW_Impl_Instance_FC_UART_UARTDriver.MissionCommand.id,
    Arch.SW_Impl_Instance_RADIO_RadioDriver_Attestation.recv_data.id,
    Arch.SW_Impl_Instance_RADIO_RadioDriver_Attestation.am_request.id,
    Arch.SW_Impl_Instance_UXAS_UxAS.AutomationRequest.id,
    Arch.SW_Impl_Instance_UXAS_UxAS.AirVehicleState.id,
    Arch.SW_Impl_Instance_UXAS_UxAS.OperatingRegion.id,
    Arch.SW_Impl_Instance_UXAS_UxAS.LineSearchTask.id,
    Arch.SW_Impl_Instance_WPM_WaypointPlanManagerService.AutomationResponse.id,
    Arch.SW_Impl_Instance_WPM_WaypointPlanManagerService.AirVehicleState.id,
    Arch.SW_Impl_Instance_WPM_WaypointPlanManagerService.ReturnHome.id,
    Arch.SW_Impl_Instance_AM_CASE_AttestationManager.attestation_response.id,
    Arch.SW_Impl_Instance_AM_Gate_CASE_AttestationGate.AutomationRequest_in.id,
    Arch.SW_Impl_Instance_AM_Gate_CASE_AttestationGate.OperatingRegion_in.id,
    Arch.SW_Impl_Instance_AM_Gate_CASE_AttestationGate.LineSearchTask_in.id,
    Arch.SW_Impl_Instance_FLT_AReq_CASE_Filter_AReq.filter_in.id,
    Arch.SW_Impl_Instance_FLT_OR_CASE_Filter_OR.filter_in.id,
    Arch.SW_Impl_Instance_FLT_LST_CASE_Filter_LST.filter_in.id,
    Arch.SW_Impl_Instance_MON_REQ_CASE_Monitor_Req.observed.id,
    Arch.SW_Impl_Instance_MON_REQ_CASE_Monitor_Req.reference_1.id,
    Arch.SW_Impl_Instance_FLT_ARes_CASE_Filter_ARes.filter_in.id,
    Arch.SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo.observed.id
  )
  var frozen: MS[Art.PortId, Option[DataContent]] = MS.create(maxPortIds, noData)
  var outgoing: MS[Art.PortId, Option[DataContent]] = MS.create(maxPortIds, noData)
  var isTimeDispatch: B = F

  def updateData(port: Art.PortId, d: DataContent): Unit = {
    data(port) = Some(d)
  }

  def timeDispatch(): Unit = {
    isTimeDispatch = T
  }

  def eventDispatch(): Unit = {
    isTimeDispatch = F
  }

  def dispatchStatus(bridgeId: Art.BridgeId): DispatchStatus = {
    if (isTimeDispatch) {
      return timeTriggered
    } else {
      var r = ISZ[Art.PortId]()
      for (i <- eventInPorts if data(i).nonEmpty) {
        r = r :+ i
      }
      return EventTriggered(r)
    }
  }

  def receiveInput(eventPortIds: ISZ[Art.PortId], dataPortIds: ISZ[Art.PortId]): Unit = {
    frozen = data
    for (i <- eventPortIds) {
      data(i) = noData
    }
  }

  def putValue(portId: Art.PortId, data: DataContent): Unit = {
    outgoing(portId) = Some(data)
  }

  def getValue(portId: Art.PortId): Option[DataContent] = {
    return frozen(portId)
  }

  def sendOutput(eventPortIds: ISZ[Art.PortId], dataPortIds: ISZ[Art.PortId]): Unit = {
    for (p <- dataPortIds) {
      outgoing(p) match {
        case Some(d) =>
          outgoing(p) = noData
          for(e <- connection(p)){
            Platform.sendAsync(e._1, e._2, d)
          }
        case _ =>
      }
    }

    for (p <- eventPortIds) {
      outgoing(p) match {
        case Some(d) =>
          outgoing(p) = noData
          for(e <- connection(p)){
            Platform.sendAsync(e._1, e._2, d)
          }
        case _ =>
      }
    }
  }

  def logInfo(title: String, msg: String): Unit = {
    print(title)
    print(": ")
    println(msg)
  }

  def logError(title: String, msg: String): Unit = {
    eprint(title)
    eprint(": ")
    eprintln(msg)
  }

  def logDebug(title: String, msg: String): Unit = {
    print(title)
    print(": ")
    println(msg)
  }

  def run(): Unit = {
  }

  def time(): Art.Time = {
    return Process.time()
  }
}
