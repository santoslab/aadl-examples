// #Sireum

package hamr

import org.sireum._
import art._

// This file was auto-generated.  Do not edit

object Main extends App {
  def main(args: ISZ[String]): Z = {

    val seed: Z = if (args.size == z"1") {
      val n = Z(args(0)).get
      if (n == z"0") 1 else n
    } else {
      1
    }

    Platform.initialise(seed, None())

    val empty = art.Empty()

    Platform.sendAsync(IPCPorts.SW_Impl_Instance_FC_UART_UARTDriver_App, IPCPorts.SW_Impl_Instance_FC_UART_UARTDriver_App, empty)
    Platform.sendAsync(IPCPorts.SW_Impl_Instance_RADIO_RadioDriver_Attestation_App, IPCPorts.SW_Impl_Instance_RADIO_RadioDriver_Attestation_App, empty)
    Platform.sendAsync(IPCPorts.SW_Impl_Instance_FlyZones_FlyZonesDatabase_App, IPCPorts.SW_Impl_Instance_FlyZones_FlyZonesDatabase_App, empty)
    Platform.sendAsync(IPCPorts.SW_Impl_Instance_UXAS_UxAS_App, IPCPorts.SW_Impl_Instance_UXAS_UxAS_App, empty)
    Platform.sendAsync(IPCPorts.SW_Impl_Instance_WPM_WaypointPlanManagerService_App, IPCPorts.SW_Impl_Instance_WPM_WaypointPlanManagerService_App, empty)
    Platform.sendAsync(IPCPorts.SW_Impl_Instance_AM_CASE_AttestationManager_App, IPCPorts.SW_Impl_Instance_AM_CASE_AttestationManager_App, empty)
    Platform.sendAsync(IPCPorts.SW_Impl_Instance_AM_Gate_CASE_AttestationGate_App, IPCPorts.SW_Impl_Instance_AM_Gate_CASE_AttestationGate_App, empty)
    Platform.sendAsync(IPCPorts.SW_Impl_Instance_FLT_AReq_CASE_Filter_AReq_App, IPCPorts.SW_Impl_Instance_FLT_AReq_CASE_Filter_AReq_App, empty)
    Platform.sendAsync(IPCPorts.SW_Impl_Instance_FLT_OR_CASE_Filter_OR_App, IPCPorts.SW_Impl_Instance_FLT_OR_CASE_Filter_OR_App, empty)
    Platform.sendAsync(IPCPorts.SW_Impl_Instance_FLT_LST_CASE_Filter_LST_App, IPCPorts.SW_Impl_Instance_FLT_LST_CASE_Filter_LST_App, empty)
    Platform.sendAsync(IPCPorts.SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_App, IPCPorts.SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_App, empty)
    Platform.sendAsync(IPCPorts.SW_Impl_Instance_FLT_ARes_CASE_Filter_ARes_App, IPCPorts.SW_Impl_Instance_FLT_ARes_CASE_Filter_ARes_App, empty)
    Platform.sendAsync(IPCPorts.SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo_App, IPCPorts.SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo_App, empty)

    Platform.finalise()
    return 0
  }
}
