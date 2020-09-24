#include <all.h>

B hamr_IPCPorts_initialized_ = F;

Z _hamr_IPCPorts_SW_Impl_Instance_FC_UART_UARTDriver_App;
Z _hamr_IPCPorts_SW_Impl_Instance_RADIO_RadioDriver_Attestation_App;
Z _hamr_IPCPorts_SW_Impl_Instance_FlyZones_FlyZonesDatabase_App;
Z _hamr_IPCPorts_SW_Impl_Instance_UXAS_UxAS_App;
Z _hamr_IPCPorts_SW_Impl_Instance_WPM_WaypointPlanManagerService_App;
Z _hamr_IPCPorts_SW_Impl_Instance_AM_CASE_AttestationManager_App;
Z _hamr_IPCPorts_SW_Impl_Instance_AM_Gate_CASE_AttestationGate_App;
Z _hamr_IPCPorts_SW_Impl_Instance_FLT_AReq_CASE_Filter_AReq_App;
Z _hamr_IPCPorts_SW_Impl_Instance_FLT_OR_CASE_Filter_OR_App;
Z _hamr_IPCPorts_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_App;
Z _hamr_IPCPorts_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_App;
Z _hamr_IPCPorts_SW_Impl_Instance_FLT_ARes_CASE_Filter_ARes_App;
Z _hamr_IPCPorts_SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo_App;
Z _hamr_IPCPorts_Main;

void hamr_IPCPorts_init(STACK_FRAME_ONLY) {
  if (hamr_IPCPorts_initialized_) return;
  hamr_IPCPorts_initialized_ = T;
  DeclNewStackFrame(caller, "IPC.scala", "hamr.IPCPorts", "<init>", 0);
  _hamr_IPCPorts_SW_Impl_Instance_FC_UART_UARTDriver_App = Z_C(47);
  _hamr_IPCPorts_SW_Impl_Instance_RADIO_RadioDriver_Attestation_App = Z_C(48);
  _hamr_IPCPorts_SW_Impl_Instance_FlyZones_FlyZonesDatabase_App = Z_C(49);
  _hamr_IPCPorts_SW_Impl_Instance_UXAS_UxAS_App = Z_C(50);
  _hamr_IPCPorts_SW_Impl_Instance_WPM_WaypointPlanManagerService_App = Z_C(51);
  _hamr_IPCPorts_SW_Impl_Instance_AM_CASE_AttestationManager_App = Z_C(52);
  _hamr_IPCPorts_SW_Impl_Instance_AM_Gate_CASE_AttestationGate_App = Z_C(53);
  _hamr_IPCPorts_SW_Impl_Instance_FLT_AReq_CASE_Filter_AReq_App = Z_C(54);
  _hamr_IPCPorts_SW_Impl_Instance_FLT_OR_CASE_Filter_OR_App = Z_C(55);
  _hamr_IPCPorts_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_App = Z_C(56);
  _hamr_IPCPorts_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_App = Z_C(57);
  _hamr_IPCPorts_SW_Impl_Instance_FLT_ARes_CASE_Filter_ARes_App = Z_C(58);
  _hamr_IPCPorts_SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo_App = Z_C(59);
  _hamr_IPCPorts_Main = Z_C(60);
}

Z hamr_IPCPorts_SW_Impl_Instance_FC_UART_UARTDriver_App(STACK_FRAME_ONLY) {
  hamr_IPCPorts_init(CALLER_LAST);
  return _hamr_IPCPorts_SW_Impl_Instance_FC_UART_UARTDriver_App;
}

Z hamr_IPCPorts_SW_Impl_Instance_RADIO_RadioDriver_Attestation_App(STACK_FRAME_ONLY) {
  hamr_IPCPorts_init(CALLER_LAST);
  return _hamr_IPCPorts_SW_Impl_Instance_RADIO_RadioDriver_Attestation_App;
}

Z hamr_IPCPorts_SW_Impl_Instance_FlyZones_FlyZonesDatabase_App(STACK_FRAME_ONLY) {
  hamr_IPCPorts_init(CALLER_LAST);
  return _hamr_IPCPorts_SW_Impl_Instance_FlyZones_FlyZonesDatabase_App;
}

Z hamr_IPCPorts_SW_Impl_Instance_UXAS_UxAS_App(STACK_FRAME_ONLY) {
  hamr_IPCPorts_init(CALLER_LAST);
  return _hamr_IPCPorts_SW_Impl_Instance_UXAS_UxAS_App;
}

Z hamr_IPCPorts_SW_Impl_Instance_WPM_WaypointPlanManagerService_App(STACK_FRAME_ONLY) {
  hamr_IPCPorts_init(CALLER_LAST);
  return _hamr_IPCPorts_SW_Impl_Instance_WPM_WaypointPlanManagerService_App;
}

Z hamr_IPCPorts_SW_Impl_Instance_AM_CASE_AttestationManager_App(STACK_FRAME_ONLY) {
  hamr_IPCPorts_init(CALLER_LAST);
  return _hamr_IPCPorts_SW_Impl_Instance_AM_CASE_AttestationManager_App;
}

Z hamr_IPCPorts_SW_Impl_Instance_AM_Gate_CASE_AttestationGate_App(STACK_FRAME_ONLY) {
  hamr_IPCPorts_init(CALLER_LAST);
  return _hamr_IPCPorts_SW_Impl_Instance_AM_Gate_CASE_AttestationGate_App;
}

Z hamr_IPCPorts_SW_Impl_Instance_FLT_AReq_CASE_Filter_AReq_App(STACK_FRAME_ONLY) {
  hamr_IPCPorts_init(CALLER_LAST);
  return _hamr_IPCPorts_SW_Impl_Instance_FLT_AReq_CASE_Filter_AReq_App;
}

Z hamr_IPCPorts_SW_Impl_Instance_FLT_OR_CASE_Filter_OR_App(STACK_FRAME_ONLY) {
  hamr_IPCPorts_init(CALLER_LAST);
  return _hamr_IPCPorts_SW_Impl_Instance_FLT_OR_CASE_Filter_OR_App;
}

Z hamr_IPCPorts_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_App(STACK_FRAME_ONLY) {
  hamr_IPCPorts_init(CALLER_LAST);
  return _hamr_IPCPorts_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_App;
}

Z hamr_IPCPorts_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_App(STACK_FRAME_ONLY) {
  hamr_IPCPorts_init(CALLER_LAST);
  return _hamr_IPCPorts_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_App;
}

Z hamr_IPCPorts_SW_Impl_Instance_FLT_ARes_CASE_Filter_ARes_App(STACK_FRAME_ONLY) {
  hamr_IPCPorts_init(CALLER_LAST);
  return _hamr_IPCPorts_SW_Impl_Instance_FLT_ARes_CASE_Filter_ARes_App;
}

Z hamr_IPCPorts_SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo_App(STACK_FRAME_ONLY) {
  hamr_IPCPorts_init(CALLER_LAST);
  return _hamr_IPCPorts_SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo_App;
}

Z hamr_IPCPorts_Main(STACK_FRAME_ONLY) {
  hamr_IPCPorts_init(CALLER_LAST);
  return _hamr_IPCPorts_Main;
}