#include <all.h>

B hamr_Arch_initialized_ = F;

struct hamr_Drivers_UARTDriver_Impl_Bridge _hamr_Arch_SW_Impl_Instance_FC_UART_UARTDriver;
struct hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge _hamr_Arch_SW_Impl_Instance_RADIO_RadioDriver_Attestation;
struct hamr_SW_FlyZonesDatabase_thr_Impl_Bridge _hamr_Arch_SW_Impl_Instance_FlyZones_FlyZonesDatabase;
struct hamr_SW_UxAS_thr_Impl_Bridge _hamr_Arch_SW_Impl_Instance_UXAS_UxAS;
struct hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge _hamr_Arch_SW_Impl_Instance_WPM_WaypointPlanManagerService;
struct hamr_SW_CASE_AttestationManager_thr_Impl_Bridge _hamr_Arch_SW_Impl_Instance_AM_CASE_AttestationManager;
struct hamr_SW_CASE_AttestationGate_thr_Impl_Bridge _hamr_Arch_SW_Impl_Instance_AM_Gate_CASE_AttestationGate;
struct hamr_SW_CASE_Filter_AReq_thr_Impl_Bridge _hamr_Arch_SW_Impl_Instance_FLT_AReq_CASE_Filter_AReq;
struct hamr_SW_CASE_Filter_OR_thr_Impl_Bridge _hamr_Arch_SW_Impl_Instance_FLT_OR_CASE_Filter_OR;
struct hamr_SW_CASE_Filter_LST_thr_Impl_Bridge _hamr_Arch_SW_Impl_Instance_FLT_LST_CASE_Filter_LST;
struct hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge _hamr_Arch_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req;
struct hamr_SW_CASE_Filter_ARes_thr_Impl_Bridge _hamr_Arch_SW_Impl_Instance_FLT_ARes_CASE_Filter_ARes;
struct hamr_SW_CASE_Monitor_Geo_thr_Impl_Bridge _hamr_Arch_SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo;
struct art_ArchitectureDescription _hamr_Arch_ad;

void hamr_Arch_init(STACK_FRAME_ONLY) {
  if (hamr_Arch_initialized_) return;
  hamr_Arch_initialized_ = T;
  DeclNewStackFrame(caller, "Arch.scala", "hamr.Arch", "<init>", 0);
  {

    sfUpdateLoc(14);
    DeclNewart_Port_45E54D(_recv_data);
    art_Port_45E54D recv_data;
    DeclNewart_Port_45E54D(t_0);
    art_Port_45E54D_apply(SF &t_0, Z_C(0), (String) string("SW_Impl_Instance_FC_UART_UARTDriver_recv_data"), art_PortMode_Type_EventIn);
    recv_data = (art_Port_45E54D) (&t_0);

    sfUpdateLoc(15);
    DeclNewart_Port_45E54D(_MissionCommand);
    art_Port_45E54D MissionCommand;
    DeclNewart_Port_45E54D(t_1);
    art_Port_45E54D_apply(SF &t_1, Z_C(1), (String) string("SW_Impl_Instance_FC_UART_UARTDriver_MissionCommand"), art_PortMode_Type_EventIn);
    MissionCommand = (art_Port_45E54D) (&t_1);

    sfUpdateLoc(16);
    DeclNewart_Port_45E54D(_send_data);
    art_Port_45E54D send_data;
    DeclNewart_Port_45E54D(t_2);
    art_Port_45E54D_apply(SF &t_2, Z_C(2), (String) string("SW_Impl_Instance_FC_UART_UARTDriver_send_data"), art_PortMode_Type_EventOut);
    send_data = (art_Port_45E54D) (&t_2);

    sfUpdateLoc(17);
    DeclNewart_Port_45E54D(_AirVehicleState);
    art_Port_45E54D AirVehicleState;
    DeclNewart_Port_45E54D(t_3);
    art_Port_45E54D_apply(SF &t_3, Z_C(3), (String) string("SW_Impl_Instance_FC_UART_UARTDriver_AirVehicleState"), art_PortMode_Type_EventOut);
    AirVehicleState = (art_Port_45E54D) (&t_3);
    DeclNewart_DispatchPropertyProtocol_Periodic(t_5);
    art_DispatchPropertyProtocol_Periodic_apply(SF &t_5, Z_C(500));
    DeclNewNone_5C1355(t_6);
    None_5C1355_apply(SF &t_6);
    DeclNewhamr_Drivers_UARTDriver_Impl_Bridge(t_4);
    hamr_Drivers_UARTDriver_Impl_Bridge_apply(SF &t_4, Z_C(0), (String) string("SW_Impl_Instance_FC_UART_UARTDriver"), (art_DispatchPropertyProtocol) (&t_5), (Option_9AF35E) (&t_6), (art_Port_45E54D) recv_data, (art_Port_45E54D) MissionCommand, (art_Port_45E54D) send_data, (art_Port_45E54D) AirVehicleState);
    Type_assign(&_hamr_Arch_SW_Impl_Instance_FC_UART_UARTDriver, (&t_4), sizeof(struct hamr_Drivers_UARTDriver_Impl_Bridge));
  }
  {

    sfUpdateLoc(32);
    DeclNewart_Port_45E54D(_recv_data);
    art_Port_45E54D recv_data;
    DeclNewart_Port_45E54D(t_7);
    art_Port_45E54D_apply(SF &t_7, Z_C(4), (String) string("SW_Impl_Instance_RADIO_RadioDriver_Attestation_recv_data"), art_PortMode_Type_EventIn);
    recv_data = (art_Port_45E54D) (&t_7);

    sfUpdateLoc(33);
    DeclNewart_Port_45E54D(_send_data);
    art_Port_45E54D send_data;
    DeclNewart_Port_45E54D(t_8);
    art_Port_45E54D_apply(SF &t_8, Z_C(5), (String) string("SW_Impl_Instance_RADIO_RadioDriver_Attestation_send_data"), art_PortMode_Type_EventOut);
    send_data = (art_Port_45E54D) (&t_8);

    sfUpdateLoc(34);
    DeclNewart_Port_45E54D(_AutomationRequest);
    art_Port_45E54D AutomationRequest;
    DeclNewart_Port_45E54D(t_9);
    art_Port_45E54D_apply(SF &t_9, Z_C(6), (String) string("SW_Impl_Instance_RADIO_RadioDriver_Attestation_AutomationRequest"), art_PortMode_Type_EventOut);
    AutomationRequest = (art_Port_45E54D) (&t_9);

    sfUpdateLoc(35);
    DeclNewart_Port_45E54D(_OperatingRegion);
    art_Port_45E54D OperatingRegion;
    DeclNewart_Port_45E54D(t_10);
    art_Port_45E54D_apply(SF &t_10, Z_C(7), (String) string("SW_Impl_Instance_RADIO_RadioDriver_Attestation_OperatingRegion"), art_PortMode_Type_EventOut);
    OperatingRegion = (art_Port_45E54D) (&t_10);

    sfUpdateLoc(36);
    DeclNewart_Port_45E54D(_LineSearchTask);
    art_Port_45E54D LineSearchTask;
    DeclNewart_Port_45E54D(t_11);
    art_Port_45E54D_apply(SF &t_11, Z_C(8), (String) string("SW_Impl_Instance_RADIO_RadioDriver_Attestation_LineSearchTask"), art_PortMode_Type_EventOut);
    LineSearchTask = (art_Port_45E54D) (&t_11);

    sfUpdateLoc(37);
    DeclNewart_Port_45E54D(_am_request);
    art_Port_45E54D am_request;
    DeclNewart_Port_45E54D(t_12);
    art_Port_45E54D_apply(SF &t_12, Z_C(9), (String) string("SW_Impl_Instance_RADIO_RadioDriver_Attestation_am_request"), art_PortMode_Type_EventIn);
    am_request = (art_Port_45E54D) (&t_12);

    sfUpdateLoc(38);
    DeclNewart_Port_45E54D(_am_response);
    art_Port_45E54D am_response;
    DeclNewart_Port_45E54D(t_13);
    art_Port_45E54D_apply(SF &t_13, Z_C(10), (String) string("SW_Impl_Instance_RADIO_RadioDriver_Attestation_am_response"), art_PortMode_Type_EventOut);
    am_response = (art_Port_45E54D) (&t_13);
    DeclNewart_DispatchPropertyProtocol_Periodic(t_15);
    art_DispatchPropertyProtocol_Periodic_apply(SF &t_15, Z_C(500));
    DeclNewNone_5C1355(t_16);
    None_5C1355_apply(SF &t_16);
    DeclNewhamr_SW_RadioDriver_Attestation_thr_Impl_Bridge(t_14);
    hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_apply(SF &t_14, Z_C(1), (String) string("SW_Impl_Instance_RADIO_RadioDriver_Attestation"), (art_DispatchPropertyProtocol) (&t_15), (Option_9AF35E) (&t_16), (art_Port_45E54D) recv_data, (art_Port_45E54D) send_data, (art_Port_45E54D) AutomationRequest, (art_Port_45E54D) OperatingRegion, (art_Port_45E54D) LineSearchTask, (art_Port_45E54D) am_request, (art_Port_45E54D) am_response);
    Type_assign(&_hamr_Arch_SW_Impl_Instance_RADIO_RadioDriver_Attestation, (&t_14), sizeof(struct hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge));
  }
  {

    sfUpdateLoc(56);
    DeclNewart_Port_45E54D(_keep_in_zones);
    art_Port_45E54D keep_in_zones;
    DeclNewart_Port_45E54D(t_17);
    art_Port_45E54D_apply(SF &t_17, Z_C(11), (String) string("SW_Impl_Instance_FlyZones_FlyZonesDatabase_keep_in_zones"), art_PortMode_Type_DataOut);
    keep_in_zones = (art_Port_45E54D) (&t_17);

    sfUpdateLoc(57);
    DeclNewart_Port_45E54D(_keep_out_zones);
    art_Port_45E54D keep_out_zones;
    DeclNewart_Port_45E54D(t_18);
    art_Port_45E54D_apply(SF &t_18, Z_C(12), (String) string("SW_Impl_Instance_FlyZones_FlyZonesDatabase_keep_out_zones"), art_PortMode_Type_DataOut);
    keep_out_zones = (art_Port_45E54D) (&t_18);
    DeclNewart_DispatchPropertyProtocol_Periodic(t_20);
    art_DispatchPropertyProtocol_Periodic_apply(SF &t_20, Z_C(500));
    DeclNewNone_5C1355(t_21);
    None_5C1355_apply(SF &t_21);
    DeclNewhamr_SW_FlyZonesDatabase_thr_Impl_Bridge(t_19);
    hamr_SW_FlyZonesDatabase_thr_Impl_Bridge_apply(SF &t_19, Z_C(2), (String) string("SW_Impl_Instance_FlyZones_FlyZonesDatabase"), (art_DispatchPropertyProtocol) (&t_20), (Option_9AF35E) (&t_21), (art_Port_45E54D) keep_in_zones, (art_Port_45E54D) keep_out_zones);
    Type_assign(&_hamr_Arch_SW_Impl_Instance_FlyZones_FlyZonesDatabase, (&t_19), sizeof(struct hamr_SW_FlyZonesDatabase_thr_Impl_Bridge));
  }
  {

    sfUpdateLoc(70);
    DeclNewart_Port_45E54D(_AutomationRequest);
    art_Port_45E54D AutomationRequest;
    DeclNewart_Port_45E54D(t_22);
    art_Port_45E54D_apply(SF &t_22, Z_C(13), (String) string("SW_Impl_Instance_UXAS_UxAS_AutomationRequest"), art_PortMode_Type_EventIn);
    AutomationRequest = (art_Port_45E54D) (&t_22);

    sfUpdateLoc(71);
    DeclNewart_Port_45E54D(_AirVehicleState);
    art_Port_45E54D AirVehicleState;
    DeclNewart_Port_45E54D(t_23);
    art_Port_45E54D_apply(SF &t_23, Z_C(14), (String) string("SW_Impl_Instance_UXAS_UxAS_AirVehicleState"), art_PortMode_Type_EventIn);
    AirVehicleState = (art_Port_45E54D) (&t_23);

    sfUpdateLoc(72);
    DeclNewart_Port_45E54D(_OperatingRegion);
    art_Port_45E54D OperatingRegion;
    DeclNewart_Port_45E54D(t_24);
    art_Port_45E54D_apply(SF &t_24, Z_C(15), (String) string("SW_Impl_Instance_UXAS_UxAS_OperatingRegion"), art_PortMode_Type_EventIn);
    OperatingRegion = (art_Port_45E54D) (&t_24);

    sfUpdateLoc(73);
    DeclNewart_Port_45E54D(_LineSearchTask);
    art_Port_45E54D LineSearchTask;
    DeclNewart_Port_45E54D(t_25);
    art_Port_45E54D_apply(SF &t_25, Z_C(16), (String) string("SW_Impl_Instance_UXAS_UxAS_LineSearchTask"), art_PortMode_Type_EventIn);
    LineSearchTask = (art_Port_45E54D) (&t_25);

    sfUpdateLoc(74);
    DeclNewart_Port_45E54D(_AutomationResponse);
    art_Port_45E54D AutomationResponse;
    DeclNewart_Port_45E54D(t_26);
    art_Port_45E54D_apply(SF &t_26, Z_C(17), (String) string("SW_Impl_Instance_UXAS_UxAS_AutomationResponse"), art_PortMode_Type_EventOut);
    AutomationResponse = (art_Port_45E54D) (&t_26);
    DeclNewart_DispatchPropertyProtocol_Periodic(t_28);
    art_DispatchPropertyProtocol_Periodic_apply(SF &t_28, Z_C(500));
    DeclNewNone_5C1355(t_29);
    None_5C1355_apply(SF &t_29);
    DeclNewhamr_SW_UxAS_thr_Impl_Bridge(t_27);
    hamr_SW_UxAS_thr_Impl_Bridge_apply(SF &t_27, Z_C(3), (String) string("SW_Impl_Instance_UXAS_UxAS"), (art_DispatchPropertyProtocol) (&t_28), (Option_9AF35E) (&t_29), (art_Port_45E54D) AutomationRequest, (art_Port_45E54D) AirVehicleState, (art_Port_45E54D) OperatingRegion, (art_Port_45E54D) LineSearchTask, (art_Port_45E54D) AutomationResponse);
    Type_assign(&_hamr_Arch_SW_Impl_Instance_UXAS_UxAS, (&t_27), sizeof(struct hamr_SW_UxAS_thr_Impl_Bridge));
  }
  {

    sfUpdateLoc(90);
    DeclNewart_Port_45E54D(_AutomationResponse);
    art_Port_45E54D AutomationResponse;
    DeclNewart_Port_45E54D(t_30);
    art_Port_45E54D_apply(SF &t_30, Z_C(18), (String) string("SW_Impl_Instance_WPM_WaypointPlanManagerService_AutomationResponse"), art_PortMode_Type_EventIn);
    AutomationResponse = (art_Port_45E54D) (&t_30);

    sfUpdateLoc(91);
    DeclNewart_Port_45E54D(_AirVehicleState);
    art_Port_45E54D AirVehicleState;
    DeclNewart_Port_45E54D(t_31);
    art_Port_45E54D_apply(SF &t_31, Z_C(19), (String) string("SW_Impl_Instance_WPM_WaypointPlanManagerService_AirVehicleState"), art_PortMode_Type_EventIn);
    AirVehicleState = (art_Port_45E54D) (&t_31);

    sfUpdateLoc(92);
    DeclNewart_Port_45E54D(_MissionCommand);
    art_Port_45E54D MissionCommand;
    DeclNewart_Port_45E54D(t_32);
    art_Port_45E54D_apply(SF &t_32, Z_C(20), (String) string("SW_Impl_Instance_WPM_WaypointPlanManagerService_MissionCommand"), art_PortMode_Type_EventOut);
    MissionCommand = (art_Port_45E54D) (&t_32);

    sfUpdateLoc(93);
    DeclNewart_Port_9CBF18(_ReturnHome);
    art_Port_9CBF18 ReturnHome;
    DeclNewart_Port_9CBF18(t_33);
    art_Port_9CBF18_apply(SF &t_33, Z_C(21), (String) string("SW_Impl_Instance_WPM_WaypointPlanManagerService_ReturnHome"), art_PortMode_Type_EventIn);
    ReturnHome = (art_Port_9CBF18) (&t_33);
    DeclNewart_DispatchPropertyProtocol_Periodic(t_35);
    art_DispatchPropertyProtocol_Periodic_apply(SF &t_35, Z_C(500));
    DeclNewNone_5C1355(t_36);
    None_5C1355_apply(SF &t_36);
    DeclNewhamr_SW_WaypointPlanManagerService_thr_Impl_Bridge(t_34);
    hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge_apply(SF &t_34, Z_C(4), (String) string("SW_Impl_Instance_WPM_WaypointPlanManagerService"), (art_DispatchPropertyProtocol) (&t_35), (Option_9AF35E) (&t_36), (art_Port_45E54D) AutomationResponse, (art_Port_45E54D) AirVehicleState, (art_Port_45E54D) MissionCommand, (art_Port_9CBF18) ReturnHome);
    Type_assign(&_hamr_Arch_SW_Impl_Instance_WPM_WaypointPlanManagerService, (&t_34), sizeof(struct hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge));
  }
  {

    sfUpdateLoc(108);
    DeclNewart_Port_45E54D(_trusted_ids);
    art_Port_45E54D trusted_ids;
    DeclNewart_Port_45E54D(t_37);
    art_Port_45E54D_apply(SF &t_37, Z_C(22), (String) string("SW_Impl_Instance_AM_CASE_AttestationManager_trusted_ids"), art_PortMode_Type_DataOut);
    trusted_ids = (art_Port_45E54D) (&t_37);

    sfUpdateLoc(109);
    DeclNewart_Port_45E54D(_attestation_request);
    art_Port_45E54D attestation_request;
    DeclNewart_Port_45E54D(t_38);
    art_Port_45E54D_apply(SF &t_38, Z_C(23), (String) string("SW_Impl_Instance_AM_CASE_AttestationManager_attestation_request"), art_PortMode_Type_EventOut);
    attestation_request = (art_Port_45E54D) (&t_38);

    sfUpdateLoc(110);
    DeclNewart_Port_45E54D(_attestation_response);
    art_Port_45E54D attestation_response;
    DeclNewart_Port_45E54D(t_39);
    art_Port_45E54D_apply(SF &t_39, Z_C(24), (String) string("SW_Impl_Instance_AM_CASE_AttestationManager_attestation_response"), art_PortMode_Type_EventIn);
    attestation_response = (art_Port_45E54D) (&t_39);
    DeclNewart_DispatchPropertyProtocol_Periodic(t_41);
    art_DispatchPropertyProtocol_Periodic_apply(SF &t_41, Z_C(500));
    DeclNewNone_5C1355(t_42);
    None_5C1355_apply(SF &t_42);
    DeclNewhamr_SW_CASE_AttestationManager_thr_Impl_Bridge(t_40);
    hamr_SW_CASE_AttestationManager_thr_Impl_Bridge_apply(SF &t_40, Z_C(5), (String) string("SW_Impl_Instance_AM_CASE_AttestationManager"), (art_DispatchPropertyProtocol) (&t_41), (Option_9AF35E) (&t_42), (art_Port_45E54D) trusted_ids, (art_Port_45E54D) attestation_request, (art_Port_45E54D) attestation_response);
    Type_assign(&_hamr_Arch_SW_Impl_Instance_AM_CASE_AttestationManager, (&t_40), sizeof(struct hamr_SW_CASE_AttestationManager_thr_Impl_Bridge));
  }
  {

    sfUpdateLoc(124);
    DeclNewart_Port_45E54D(_trusted_ids);
    art_Port_45E54D trusted_ids;
    DeclNewart_Port_45E54D(t_43);
    art_Port_45E54D_apply(SF &t_43, Z_C(25), (String) string("SW_Impl_Instance_AM_Gate_CASE_AttestationGate_trusted_ids"), art_PortMode_Type_DataIn);
    trusted_ids = (art_Port_45E54D) (&t_43);

    sfUpdateLoc(125);
    DeclNewart_Port_45E54D(_AutomationRequest_in);
    art_Port_45E54D AutomationRequest_in;
    DeclNewart_Port_45E54D(t_44);
    art_Port_45E54D_apply(SF &t_44, Z_C(26), (String) string("SW_Impl_Instance_AM_Gate_CASE_AttestationGate_AutomationRequest_in"), art_PortMode_Type_EventIn);
    AutomationRequest_in = (art_Port_45E54D) (&t_44);

    sfUpdateLoc(126);
    DeclNewart_Port_45E54D(_AutomationRequest_out);
    art_Port_45E54D AutomationRequest_out;
    DeclNewart_Port_45E54D(t_45);
    art_Port_45E54D_apply(SF &t_45, Z_C(27), (String) string("SW_Impl_Instance_AM_Gate_CASE_AttestationGate_AutomationRequest_out"), art_PortMode_Type_EventOut);
    AutomationRequest_out = (art_Port_45E54D) (&t_45);

    sfUpdateLoc(127);
    DeclNewart_Port_45E54D(_OperatingRegion_in);
    art_Port_45E54D OperatingRegion_in;
    DeclNewart_Port_45E54D(t_46);
    art_Port_45E54D_apply(SF &t_46, Z_C(28), (String) string("SW_Impl_Instance_AM_Gate_CASE_AttestationGate_OperatingRegion_in"), art_PortMode_Type_EventIn);
    OperatingRegion_in = (art_Port_45E54D) (&t_46);

    sfUpdateLoc(128);
    DeclNewart_Port_45E54D(_OperatingRegion_out);
    art_Port_45E54D OperatingRegion_out;
    DeclNewart_Port_45E54D(t_47);
    art_Port_45E54D_apply(SF &t_47, Z_C(29), (String) string("SW_Impl_Instance_AM_Gate_CASE_AttestationGate_OperatingRegion_out"), art_PortMode_Type_EventOut);
    OperatingRegion_out = (art_Port_45E54D) (&t_47);

    sfUpdateLoc(129);
    DeclNewart_Port_45E54D(_LineSearchTask_in);
    art_Port_45E54D LineSearchTask_in;
    DeclNewart_Port_45E54D(t_48);
    art_Port_45E54D_apply(SF &t_48, Z_C(30), (String) string("SW_Impl_Instance_AM_Gate_CASE_AttestationGate_LineSearchTask_in"), art_PortMode_Type_EventIn);
    LineSearchTask_in = (art_Port_45E54D) (&t_48);

    sfUpdateLoc(130);
    DeclNewart_Port_45E54D(_LineSearchTask_out);
    art_Port_45E54D LineSearchTask_out;
    DeclNewart_Port_45E54D(t_49);
    art_Port_45E54D_apply(SF &t_49, Z_C(31), (String) string("SW_Impl_Instance_AM_Gate_CASE_AttestationGate_LineSearchTask_out"), art_PortMode_Type_EventOut);
    LineSearchTask_out = (art_Port_45E54D) (&t_49);
    DeclNewart_DispatchPropertyProtocol_Periodic(t_51);
    art_DispatchPropertyProtocol_Periodic_apply(SF &t_51, Z_C(500));
    DeclNewNone_5C1355(t_52);
    None_5C1355_apply(SF &t_52);
    DeclNewhamr_SW_CASE_AttestationGate_thr_Impl_Bridge(t_50);
    hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_apply(SF &t_50, Z_C(6), (String) string("SW_Impl_Instance_AM_Gate_CASE_AttestationGate"), (art_DispatchPropertyProtocol) (&t_51), (Option_9AF35E) (&t_52), (art_Port_45E54D) trusted_ids, (art_Port_45E54D) AutomationRequest_in, (art_Port_45E54D) AutomationRequest_out, (art_Port_45E54D) OperatingRegion_in, (art_Port_45E54D) OperatingRegion_out, (art_Port_45E54D) LineSearchTask_in, (art_Port_45E54D) LineSearchTask_out);
    Type_assign(&_hamr_Arch_SW_Impl_Instance_AM_Gate_CASE_AttestationGate, (&t_50), sizeof(struct hamr_SW_CASE_AttestationGate_thr_Impl_Bridge));
  }
  {

    sfUpdateLoc(148);
    DeclNewart_Port_45E54D(_filter_in);
    art_Port_45E54D filter_in;
    DeclNewart_Port_45E54D(t_53);
    art_Port_45E54D_apply(SF &t_53, Z_C(32), (String) string("SW_Impl_Instance_FLT_AReq_CASE_Filter_AReq_filter_in"), art_PortMode_Type_EventIn);
    filter_in = (art_Port_45E54D) (&t_53);

    sfUpdateLoc(149);
    DeclNewart_Port_45E54D(_filter_out);
    art_Port_45E54D filter_out;
    DeclNewart_Port_45E54D(t_54);
    art_Port_45E54D_apply(SF &t_54, Z_C(33), (String) string("SW_Impl_Instance_FLT_AReq_CASE_Filter_AReq_filter_out"), art_PortMode_Type_EventOut);
    filter_out = (art_Port_45E54D) (&t_54);
    DeclNewart_DispatchPropertyProtocol_Periodic(t_56);
    art_DispatchPropertyProtocol_Periodic_apply(SF &t_56, Z_C(500));
    DeclNewNone_5C1355(t_57);
    None_5C1355_apply(SF &t_57);
    DeclNewhamr_SW_CASE_Filter_AReq_thr_Impl_Bridge(t_55);
    hamr_SW_CASE_Filter_AReq_thr_Impl_Bridge_apply(SF &t_55, Z_C(7), (String) string("SW_Impl_Instance_FLT_AReq_CASE_Filter_AReq"), (art_DispatchPropertyProtocol) (&t_56), (Option_9AF35E) (&t_57), (art_Port_45E54D) filter_in, (art_Port_45E54D) filter_out);
    Type_assign(&_hamr_Arch_SW_Impl_Instance_FLT_AReq_CASE_Filter_AReq, (&t_55), sizeof(struct hamr_SW_CASE_Filter_AReq_thr_Impl_Bridge));
  }
  {

    sfUpdateLoc(162);
    DeclNewart_Port_45E54D(_filter_in);
    art_Port_45E54D filter_in;
    DeclNewart_Port_45E54D(t_58);
    art_Port_45E54D_apply(SF &t_58, Z_C(34), (String) string("SW_Impl_Instance_FLT_OR_CASE_Filter_OR_filter_in"), art_PortMode_Type_EventIn);
    filter_in = (art_Port_45E54D) (&t_58);

    sfUpdateLoc(163);
    DeclNewart_Port_45E54D(_filter_out);
    art_Port_45E54D filter_out;
    DeclNewart_Port_45E54D(t_59);
    art_Port_45E54D_apply(SF &t_59, Z_C(35), (String) string("SW_Impl_Instance_FLT_OR_CASE_Filter_OR_filter_out"), art_PortMode_Type_EventOut);
    filter_out = (art_Port_45E54D) (&t_59);
    DeclNewart_DispatchPropertyProtocol_Periodic(t_61);
    art_DispatchPropertyProtocol_Periodic_apply(SF &t_61, Z_C(500));
    DeclNewNone_5C1355(t_62);
    None_5C1355_apply(SF &t_62);
    DeclNewhamr_SW_CASE_Filter_OR_thr_Impl_Bridge(t_60);
    hamr_SW_CASE_Filter_OR_thr_Impl_Bridge_apply(SF &t_60, Z_C(8), (String) string("SW_Impl_Instance_FLT_OR_CASE_Filter_OR"), (art_DispatchPropertyProtocol) (&t_61), (Option_9AF35E) (&t_62), (art_Port_45E54D) filter_in, (art_Port_45E54D) filter_out);
    Type_assign(&_hamr_Arch_SW_Impl_Instance_FLT_OR_CASE_Filter_OR, (&t_60), sizeof(struct hamr_SW_CASE_Filter_OR_thr_Impl_Bridge));
  }
  {

    sfUpdateLoc(176);
    DeclNewart_Port_45E54D(_filter_in);
    art_Port_45E54D filter_in;
    DeclNewart_Port_45E54D(t_63);
    art_Port_45E54D_apply(SF &t_63, Z_C(36), (String) string("SW_Impl_Instance_FLT_LST_CASE_Filter_LST_filter_in"), art_PortMode_Type_EventIn);
    filter_in = (art_Port_45E54D) (&t_63);

    sfUpdateLoc(177);
    DeclNewart_Port_45E54D(_filter_out);
    art_Port_45E54D filter_out;
    DeclNewart_Port_45E54D(t_64);
    art_Port_45E54D_apply(SF &t_64, Z_C(37), (String) string("SW_Impl_Instance_FLT_LST_CASE_Filter_LST_filter_out"), art_PortMode_Type_EventOut);
    filter_out = (art_Port_45E54D) (&t_64);
    DeclNewart_DispatchPropertyProtocol_Periodic(t_66);
    art_DispatchPropertyProtocol_Periodic_apply(SF &t_66, Z_C(500));
    DeclNewNone_5C1355(t_67);
    None_5C1355_apply(SF &t_67);
    DeclNewhamr_SW_CASE_Filter_LST_thr_Impl_Bridge(t_65);
    hamr_SW_CASE_Filter_LST_thr_Impl_Bridge_apply(SF &t_65, Z_C(9), (String) string("SW_Impl_Instance_FLT_LST_CASE_Filter_LST"), (art_DispatchPropertyProtocol) (&t_66), (Option_9AF35E) (&t_67), (art_Port_45E54D) filter_in, (art_Port_45E54D) filter_out);
    Type_assign(&_hamr_Arch_SW_Impl_Instance_FLT_LST_CASE_Filter_LST, (&t_65), sizeof(struct hamr_SW_CASE_Filter_LST_thr_Impl_Bridge));
  }
  {

    sfUpdateLoc(190);
    DeclNewart_Port_45E54D(_observed);
    art_Port_45E54D observed;
    DeclNewart_Port_45E54D(t_68);
    art_Port_45E54D_apply(SF &t_68, Z_C(38), (String) string("SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_observed"), art_PortMode_Type_EventIn);
    observed = (art_Port_45E54D) (&t_68);

    sfUpdateLoc(191);
    DeclNewart_Port_45E54D(_reference_1);
    art_Port_45E54D reference_1;
    DeclNewart_Port_45E54D(t_69);
    art_Port_45E54D_apply(SF &t_69, Z_C(39), (String) string("SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_reference_1"), art_PortMode_Type_EventIn);
    reference_1 = (art_Port_45E54D) (&t_69);
    DeclNewart_DispatchPropertyProtocol_Periodic(t_71);
    art_DispatchPropertyProtocol_Periodic_apply(SF &t_71, Z_C(500));
    DeclNewNone_5C1355(t_72);
    None_5C1355_apply(SF &t_72);
    DeclNewhamr_SW_CASE_Monitor_Req_thr_Impl_Bridge(t_70);
    hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge_apply(SF &t_70, Z_C(10), (String) string("SW_Impl_Instance_MON_REQ_CASE_Monitor_Req"), (art_DispatchPropertyProtocol) (&t_71), (Option_9AF35E) (&t_72), (art_Port_45E54D) observed, (art_Port_45E54D) reference_1);
    Type_assign(&_hamr_Arch_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req, (&t_70), sizeof(struct hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge));
  }
  {

    sfUpdateLoc(204);
    DeclNewart_Port_45E54D(_filter_in);
    art_Port_45E54D filter_in;
    DeclNewart_Port_45E54D(t_73);
    art_Port_45E54D_apply(SF &t_73, Z_C(40), (String) string("SW_Impl_Instance_FLT_ARes_CASE_Filter_ARes_filter_in"), art_PortMode_Type_EventIn);
    filter_in = (art_Port_45E54D) (&t_73);

    sfUpdateLoc(205);
    DeclNewart_Port_45E54D(_filter_out);
    art_Port_45E54D filter_out;
    DeclNewart_Port_45E54D(t_74);
    art_Port_45E54D_apply(SF &t_74, Z_C(41), (String) string("SW_Impl_Instance_FLT_ARes_CASE_Filter_ARes_filter_out"), art_PortMode_Type_EventOut);
    filter_out = (art_Port_45E54D) (&t_74);
    DeclNewart_DispatchPropertyProtocol_Periodic(t_76);
    art_DispatchPropertyProtocol_Periodic_apply(SF &t_76, Z_C(500));
    DeclNewNone_5C1355(t_77);
    None_5C1355_apply(SF &t_77);
    DeclNewhamr_SW_CASE_Filter_ARes_thr_Impl_Bridge(t_75);
    hamr_SW_CASE_Filter_ARes_thr_Impl_Bridge_apply(SF &t_75, Z_C(11), (String) string("SW_Impl_Instance_FLT_ARes_CASE_Filter_ARes"), (art_DispatchPropertyProtocol) (&t_76), (Option_9AF35E) (&t_77), (art_Port_45E54D) filter_in, (art_Port_45E54D) filter_out);
    Type_assign(&_hamr_Arch_SW_Impl_Instance_FLT_ARes_CASE_Filter_ARes, (&t_75), sizeof(struct hamr_SW_CASE_Filter_ARes_thr_Impl_Bridge));
  }
  {

    sfUpdateLoc(218);
    DeclNewart_Port_45E54D(_keep_in_zones);
    art_Port_45E54D keep_in_zones;
    DeclNewart_Port_45E54D(t_78);
    art_Port_45E54D_apply(SF &t_78, Z_C(42), (String) string("SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo_keep_in_zones"), art_PortMode_Type_DataIn);
    keep_in_zones = (art_Port_45E54D) (&t_78);

    sfUpdateLoc(219);
    DeclNewart_Port_45E54D(_keep_out_zones);
    art_Port_45E54D keep_out_zones;
    DeclNewart_Port_45E54D(t_79);
    art_Port_45E54D_apply(SF &t_79, Z_C(43), (String) string("SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo_keep_out_zones"), art_PortMode_Type_DataIn);
    keep_out_zones = (art_Port_45E54D) (&t_79);

    sfUpdateLoc(220);
    DeclNewart_Port_45E54D(_observed);
    art_Port_45E54D observed;
    DeclNewart_Port_45E54D(t_80);
    art_Port_45E54D_apply(SF &t_80, Z_C(44), (String) string("SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo_observed"), art_PortMode_Type_EventIn);
    observed = (art_Port_45E54D) (&t_80);

    sfUpdateLoc(221);
    DeclNewart_Port_45E54D(_output);
    art_Port_45E54D output;
    DeclNewart_Port_45E54D(t_81);
    art_Port_45E54D_apply(SF &t_81, Z_C(45), (String) string("SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo_output"), art_PortMode_Type_EventOut);
    output = (art_Port_45E54D) (&t_81);

    sfUpdateLoc(222);
    DeclNewart_Port_9CBF18(_alert);
    art_Port_9CBF18 alert;
    DeclNewart_Port_9CBF18(t_82);
    art_Port_9CBF18_apply(SF &t_82, Z_C(46), (String) string("SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo_alert"), art_PortMode_Type_EventOut);
    alert = (art_Port_9CBF18) (&t_82);
    DeclNewart_DispatchPropertyProtocol_Periodic(t_84);
    art_DispatchPropertyProtocol_Periodic_apply(SF &t_84, Z_C(500));
    DeclNewNone_5C1355(t_85);
    None_5C1355_apply(SF &t_85);
    DeclNewhamr_SW_CASE_Monitor_Geo_thr_Impl_Bridge(t_83);
    hamr_SW_CASE_Monitor_Geo_thr_Impl_Bridge_apply(SF &t_83, Z_C(12), (String) string("SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo"), (art_DispatchPropertyProtocol) (&t_84), (Option_9AF35E) (&t_85), (art_Port_45E54D) keep_in_zones, (art_Port_45E54D) keep_out_zones, (art_Port_45E54D) observed, (art_Port_45E54D) output, (art_Port_9CBF18) alert);
    Type_assign(&_hamr_Arch_SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo, (&t_83), sizeof(struct hamr_SW_CASE_Monitor_Geo_thr_Impl_Bridge));
  }
  {
    STATIC_ASSERT(13 <= MaxMS_852149, "Insufficient maximum for MS[Z, art.Bridge] elements.");
    DeclNewMS_852149(t_87);
    t_87.size = (int8_t) 13;
    MS_852149_up(&t_87, 0, (art_Bridge) hamr_Arch_SW_Impl_Instance_FC_UART_UARTDriver(SF_LAST));
    MS_852149_up(&t_87, 1, (art_Bridge) hamr_Arch_SW_Impl_Instance_RADIO_RadioDriver_Attestation(SF_LAST));
    MS_852149_up(&t_87, 2, (art_Bridge) hamr_Arch_SW_Impl_Instance_FlyZones_FlyZonesDatabase(SF_LAST));
    MS_852149_up(&t_87, 3, (art_Bridge) hamr_Arch_SW_Impl_Instance_UXAS_UxAS(SF_LAST));
    MS_852149_up(&t_87, 4, (art_Bridge) hamr_Arch_SW_Impl_Instance_WPM_WaypointPlanManagerService(SF_LAST));
    MS_852149_up(&t_87, 5, (art_Bridge) hamr_Arch_SW_Impl_Instance_AM_CASE_AttestationManager(SF_LAST));
    MS_852149_up(&t_87, 6, (art_Bridge) hamr_Arch_SW_Impl_Instance_AM_Gate_CASE_AttestationGate(SF_LAST));
    MS_852149_up(&t_87, 7, (art_Bridge) hamr_Arch_SW_Impl_Instance_FLT_AReq_CASE_Filter_AReq(SF_LAST));
    MS_852149_up(&t_87, 8, (art_Bridge) hamr_Arch_SW_Impl_Instance_FLT_OR_CASE_Filter_OR(SF_LAST));
    MS_852149_up(&t_87, 9, (art_Bridge) hamr_Arch_SW_Impl_Instance_FLT_LST_CASE_Filter_LST(SF_LAST));
    MS_852149_up(&t_87, 10, (art_Bridge) hamr_Arch_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req(SF_LAST));
    MS_852149_up(&t_87, 11, (art_Bridge) hamr_Arch_SW_Impl_Instance_FLT_ARes_CASE_Filter_ARes(SF_LAST));
    MS_852149_up(&t_87, 12, (art_Bridge) hamr_Arch_SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo(SF_LAST));
    STATIC_ASSERT(23 <= MaxIS_08117A, "Insufficient maximum for IS[Z, art.UConnection] elements.");
    DeclNewIS_08117A(t_88);
    t_88.size = (int8_t) 23;
    DeclNewart_Connection(t_89);
    art_Connection_apply(SF &t_89, (art_UPort) hamr_Drivers_UARTDriver_Impl_Bridge_AirVehicleState_(hamr_Arch_SW_Impl_Instance_FC_UART_UARTDriver(SF_LAST)), (art_UPort) hamr_SW_UxAS_thr_Impl_Bridge_AirVehicleState_(hamr_Arch_SW_Impl_Instance_UXAS_UxAS(SF_LAST)));
    IS_08117A_up(&t_88, 0, (art_UConnection) (&t_89));
    DeclNewart_Connection(t_90);
    art_Connection_apply(SF &t_90, (art_UPort) hamr_Drivers_UARTDriver_Impl_Bridge_AirVehicleState_(hamr_Arch_SW_Impl_Instance_FC_UART_UARTDriver(SF_LAST)), (art_UPort) hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge_AirVehicleState_(hamr_Arch_SW_Impl_Instance_WPM_WaypointPlanManagerService(SF_LAST)));
    IS_08117A_up(&t_88, 1, (art_UConnection) (&t_90));
    DeclNewart_Connection(t_91);
    art_Connection_apply(SF &t_91, (art_UPort) hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_AutomationRequest_(hamr_Arch_SW_Impl_Instance_RADIO_RadioDriver_Attestation(SF_LAST)), (art_UPort) hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_AutomationRequest_in_(hamr_Arch_SW_Impl_Instance_AM_Gate_CASE_AttestationGate(SF_LAST)));
    IS_08117A_up(&t_88, 2, (art_UConnection) (&t_91));
    DeclNewart_Connection(t_92);
    art_Connection_apply(SF &t_92, (art_UPort) hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_OperatingRegion_(hamr_Arch_SW_Impl_Instance_RADIO_RadioDriver_Attestation(SF_LAST)), (art_UPort) hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_OperatingRegion_in_(hamr_Arch_SW_Impl_Instance_AM_Gate_CASE_AttestationGate(SF_LAST)));
    IS_08117A_up(&t_88, 3, (art_UConnection) (&t_92));
    DeclNewart_Connection(t_93);
    art_Connection_apply(SF &t_93, (art_UPort) hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_LineSearchTask_(hamr_Arch_SW_Impl_Instance_RADIO_RadioDriver_Attestation(SF_LAST)), (art_UPort) hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_LineSearchTask_in_(hamr_Arch_SW_Impl_Instance_AM_Gate_CASE_AttestationGate(SF_LAST)));
    IS_08117A_up(&t_88, 4, (art_UConnection) (&t_93));
    DeclNewart_Connection(t_94);
    art_Connection_apply(SF &t_94, (art_UPort) hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_am_response_(hamr_Arch_SW_Impl_Instance_RADIO_RadioDriver_Attestation(SF_LAST)), (art_UPort) hamr_SW_CASE_AttestationManager_thr_Impl_Bridge_attestation_response_(hamr_Arch_SW_Impl_Instance_AM_CASE_AttestationManager(SF_LAST)));
    IS_08117A_up(&t_88, 5, (art_UConnection) (&t_94));
    DeclNewart_Connection(t_95);
    art_Connection_apply(SF &t_95, (art_UPort) hamr_SW_FlyZonesDatabase_thr_Impl_Bridge_keep_in_zones_(hamr_Arch_SW_Impl_Instance_FlyZones_FlyZonesDatabase(SF_LAST)), (art_UPort) hamr_SW_CASE_Monitor_Geo_thr_Impl_Bridge_keep_in_zones_(hamr_Arch_SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo(SF_LAST)));
    IS_08117A_up(&t_88, 6, (art_UConnection) (&t_95));
    DeclNewart_Connection(t_96);
    art_Connection_apply(SF &t_96, (art_UPort) hamr_SW_FlyZonesDatabase_thr_Impl_Bridge_keep_out_zones_(hamr_Arch_SW_Impl_Instance_FlyZones_FlyZonesDatabase(SF_LAST)), (art_UPort) hamr_SW_CASE_Monitor_Geo_thr_Impl_Bridge_keep_out_zones_(hamr_Arch_SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo(SF_LAST)));
    IS_08117A_up(&t_88, 7, (art_UConnection) (&t_96));
    DeclNewart_Connection(t_97);
    art_Connection_apply(SF &t_97, (art_UPort) hamr_SW_UxAS_thr_Impl_Bridge_AutomationResponse_(hamr_Arch_SW_Impl_Instance_UXAS_UxAS(SF_LAST)), (art_UPort) hamr_SW_CASE_Filter_ARes_thr_Impl_Bridge_filter_in_(hamr_Arch_SW_Impl_Instance_FLT_ARes_CASE_Filter_ARes(SF_LAST)));
    IS_08117A_up(&t_88, 8, (art_UConnection) (&t_97));
    DeclNewart_Connection(t_98);
    art_Connection_apply(SF &t_98, (art_UPort) hamr_SW_UxAS_thr_Impl_Bridge_AutomationResponse_(hamr_Arch_SW_Impl_Instance_UXAS_UxAS(SF_LAST)), (art_UPort) hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge_observed_(hamr_Arch_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req(SF_LAST)));
    IS_08117A_up(&t_88, 9, (art_UConnection) (&t_98));
    DeclNewart_Connection(t_99);
    art_Connection_apply(SF &t_99, (art_UPort) hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge_MissionCommand_(hamr_Arch_SW_Impl_Instance_WPM_WaypointPlanManagerService(SF_LAST)), (art_UPort) hamr_Drivers_UARTDriver_Impl_Bridge_MissionCommand_(hamr_Arch_SW_Impl_Instance_FC_UART_UARTDriver(SF_LAST)));
    IS_08117A_up(&t_88, 10, (art_UConnection) (&t_99));
    DeclNewart_Connection(t_100);
    art_Connection_apply(SF &t_100, (art_UPort) hamr_SW_CASE_AttestationManager_thr_Impl_Bridge_trusted_ids_(hamr_Arch_SW_Impl_Instance_AM_CASE_AttestationManager(SF_LAST)), (art_UPort) hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_trusted_ids_(hamr_Arch_SW_Impl_Instance_AM_Gate_CASE_AttestationGate(SF_LAST)));
    IS_08117A_up(&t_88, 11, (art_UConnection) (&t_100));
    DeclNewart_Connection(t_101);
    art_Connection_apply(SF &t_101, (art_UPort) hamr_SW_CASE_AttestationManager_thr_Impl_Bridge_attestation_request_(hamr_Arch_SW_Impl_Instance_AM_CASE_AttestationManager(SF_LAST)), (art_UPort) hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_am_request_(hamr_Arch_SW_Impl_Instance_RADIO_RadioDriver_Attestation(SF_LAST)));
    IS_08117A_up(&t_88, 12, (art_UConnection) (&t_101));
    DeclNewart_Connection(t_102);
    art_Connection_apply(SF &t_102, (art_UPort) hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_AutomationRequest_out_(hamr_Arch_SW_Impl_Instance_AM_Gate_CASE_AttestationGate(SF_LAST)), (art_UPort) hamr_SW_CASE_Filter_AReq_thr_Impl_Bridge_filter_in_(hamr_Arch_SW_Impl_Instance_FLT_AReq_CASE_Filter_AReq(SF_LAST)));
    IS_08117A_up(&t_88, 13, (art_UConnection) (&t_102));
    DeclNewart_Connection(t_103);
    art_Connection_apply(SF &t_103, (art_UPort) hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_OperatingRegion_out_(hamr_Arch_SW_Impl_Instance_AM_Gate_CASE_AttestationGate(SF_LAST)), (art_UPort) hamr_SW_CASE_Filter_OR_thr_Impl_Bridge_filter_in_(hamr_Arch_SW_Impl_Instance_FLT_OR_CASE_Filter_OR(SF_LAST)));
    IS_08117A_up(&t_88, 14, (art_UConnection) (&t_103));
    DeclNewart_Connection(t_104);
    art_Connection_apply(SF &t_104, (art_UPort) hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_LineSearchTask_out_(hamr_Arch_SW_Impl_Instance_AM_Gate_CASE_AttestationGate(SF_LAST)), (art_UPort) hamr_SW_CASE_Filter_LST_thr_Impl_Bridge_filter_in_(hamr_Arch_SW_Impl_Instance_FLT_LST_CASE_Filter_LST(SF_LAST)));
    IS_08117A_up(&t_88, 15, (art_UConnection) (&t_104));
    DeclNewart_Connection(t_105);
    art_Connection_apply(SF &t_105, (art_UPort) hamr_SW_CASE_Filter_AReq_thr_Impl_Bridge_filter_out_(hamr_Arch_SW_Impl_Instance_FLT_AReq_CASE_Filter_AReq(SF_LAST)), (art_UPort) hamr_SW_UxAS_thr_Impl_Bridge_AutomationRequest_(hamr_Arch_SW_Impl_Instance_UXAS_UxAS(SF_LAST)));
    IS_08117A_up(&t_88, 16, (art_UConnection) (&t_105));
    DeclNewart_Connection(t_106);
    art_Connection_apply(SF &t_106, (art_UPort) hamr_SW_CASE_Filter_AReq_thr_Impl_Bridge_filter_out_(hamr_Arch_SW_Impl_Instance_FLT_AReq_CASE_Filter_AReq(SF_LAST)), (art_UPort) hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge_reference_1_(hamr_Arch_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req(SF_LAST)));
    IS_08117A_up(&t_88, 17, (art_UConnection) (&t_106));
    DeclNewart_Connection(t_107);
    art_Connection_apply(SF &t_107, (art_UPort) hamr_SW_CASE_Filter_OR_thr_Impl_Bridge_filter_out_(hamr_Arch_SW_Impl_Instance_FLT_OR_CASE_Filter_OR(SF_LAST)), (art_UPort) hamr_SW_UxAS_thr_Impl_Bridge_OperatingRegion_(hamr_Arch_SW_Impl_Instance_UXAS_UxAS(SF_LAST)));
    IS_08117A_up(&t_88, 18, (art_UConnection) (&t_107));
    DeclNewart_Connection(t_108);
    art_Connection_apply(SF &t_108, (art_UPort) hamr_SW_CASE_Filter_LST_thr_Impl_Bridge_filter_out_(hamr_Arch_SW_Impl_Instance_FLT_LST_CASE_Filter_LST(SF_LAST)), (art_UPort) hamr_SW_UxAS_thr_Impl_Bridge_LineSearchTask_(hamr_Arch_SW_Impl_Instance_UXAS_UxAS(SF_LAST)));
    IS_08117A_up(&t_88, 19, (art_UConnection) (&t_108));
    DeclNewart_Connection(t_109);
    art_Connection_apply(SF &t_109, (art_UPort) hamr_SW_CASE_Filter_ARes_thr_Impl_Bridge_filter_out_(hamr_Arch_SW_Impl_Instance_FLT_ARes_CASE_Filter_ARes(SF_LAST)), (art_UPort) hamr_SW_CASE_Monitor_Geo_thr_Impl_Bridge_observed_(hamr_Arch_SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo(SF_LAST)));
    IS_08117A_up(&t_88, 20, (art_UConnection) (&t_109));
    DeclNewart_Connection(t_110);
    art_Connection_apply(SF &t_110, (art_UPort) hamr_SW_CASE_Monitor_Geo_thr_Impl_Bridge_output_(hamr_Arch_SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo(SF_LAST)), (art_UPort) hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge_AutomationResponse_(hamr_Arch_SW_Impl_Instance_WPM_WaypointPlanManagerService(SF_LAST)));
    IS_08117A_up(&t_88, 21, (art_UConnection) (&t_110));
    DeclNewart_Connection(t_111);
    art_Connection_apply(SF &t_111, (art_UPort) hamr_SW_CASE_Monitor_Geo_thr_Impl_Bridge_alert_(hamr_Arch_SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo(SF_LAST)), (art_UPort) hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge_ReturnHome_(hamr_Arch_SW_Impl_Instance_WPM_WaypointPlanManagerService(SF_LAST)));
    IS_08117A_up(&t_88, 22, (art_UConnection) (&t_111));
    DeclNewart_ArchitectureDescription(t_86);
    art_ArchitectureDescription_apply(SF &t_86, (MS_852149) (&t_87), (IS_08117A) (&t_88));
    Type_assign(&_hamr_Arch_ad, (&t_86), sizeof(struct art_ArchitectureDescription));
  }
}

hamr_Drivers_UARTDriver_Impl_Bridge hamr_Arch_SW_Impl_Instance_FC_UART_UARTDriver(STACK_FRAME_ONLY) {
  hamr_Arch_init(CALLER_LAST);
  return (hamr_Drivers_UARTDriver_Impl_Bridge) &_hamr_Arch_SW_Impl_Instance_FC_UART_UARTDriver;
}

hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge hamr_Arch_SW_Impl_Instance_RADIO_RadioDriver_Attestation(STACK_FRAME_ONLY) {
  hamr_Arch_init(CALLER_LAST);
  return (hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge) &_hamr_Arch_SW_Impl_Instance_RADIO_RadioDriver_Attestation;
}

hamr_SW_FlyZonesDatabase_thr_Impl_Bridge hamr_Arch_SW_Impl_Instance_FlyZones_FlyZonesDatabase(STACK_FRAME_ONLY) {
  hamr_Arch_init(CALLER_LAST);
  return (hamr_SW_FlyZonesDatabase_thr_Impl_Bridge) &_hamr_Arch_SW_Impl_Instance_FlyZones_FlyZonesDatabase;
}

hamr_SW_UxAS_thr_Impl_Bridge hamr_Arch_SW_Impl_Instance_UXAS_UxAS(STACK_FRAME_ONLY) {
  hamr_Arch_init(CALLER_LAST);
  return (hamr_SW_UxAS_thr_Impl_Bridge) &_hamr_Arch_SW_Impl_Instance_UXAS_UxAS;
}

hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge hamr_Arch_SW_Impl_Instance_WPM_WaypointPlanManagerService(STACK_FRAME_ONLY) {
  hamr_Arch_init(CALLER_LAST);
  return (hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge) &_hamr_Arch_SW_Impl_Instance_WPM_WaypointPlanManagerService;
}

hamr_SW_CASE_AttestationManager_thr_Impl_Bridge hamr_Arch_SW_Impl_Instance_AM_CASE_AttestationManager(STACK_FRAME_ONLY) {
  hamr_Arch_init(CALLER_LAST);
  return (hamr_SW_CASE_AttestationManager_thr_Impl_Bridge) &_hamr_Arch_SW_Impl_Instance_AM_CASE_AttestationManager;
}

hamr_SW_CASE_AttestationGate_thr_Impl_Bridge hamr_Arch_SW_Impl_Instance_AM_Gate_CASE_AttestationGate(STACK_FRAME_ONLY) {
  hamr_Arch_init(CALLER_LAST);
  return (hamr_SW_CASE_AttestationGate_thr_Impl_Bridge) &_hamr_Arch_SW_Impl_Instance_AM_Gate_CASE_AttestationGate;
}

hamr_SW_CASE_Filter_AReq_thr_Impl_Bridge hamr_Arch_SW_Impl_Instance_FLT_AReq_CASE_Filter_AReq(STACK_FRAME_ONLY) {
  hamr_Arch_init(CALLER_LAST);
  return (hamr_SW_CASE_Filter_AReq_thr_Impl_Bridge) &_hamr_Arch_SW_Impl_Instance_FLT_AReq_CASE_Filter_AReq;
}

hamr_SW_CASE_Filter_OR_thr_Impl_Bridge hamr_Arch_SW_Impl_Instance_FLT_OR_CASE_Filter_OR(STACK_FRAME_ONLY) {
  hamr_Arch_init(CALLER_LAST);
  return (hamr_SW_CASE_Filter_OR_thr_Impl_Bridge) &_hamr_Arch_SW_Impl_Instance_FLT_OR_CASE_Filter_OR;
}

hamr_SW_CASE_Filter_LST_thr_Impl_Bridge hamr_Arch_SW_Impl_Instance_FLT_LST_CASE_Filter_LST(STACK_FRAME_ONLY) {
  hamr_Arch_init(CALLER_LAST);
  return (hamr_SW_CASE_Filter_LST_thr_Impl_Bridge) &_hamr_Arch_SW_Impl_Instance_FLT_LST_CASE_Filter_LST;
}

hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge hamr_Arch_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req(STACK_FRAME_ONLY) {
  hamr_Arch_init(CALLER_LAST);
  return (hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge) &_hamr_Arch_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req;
}

hamr_SW_CASE_Filter_ARes_thr_Impl_Bridge hamr_Arch_SW_Impl_Instance_FLT_ARes_CASE_Filter_ARes(STACK_FRAME_ONLY) {
  hamr_Arch_init(CALLER_LAST);
  return (hamr_SW_CASE_Filter_ARes_thr_Impl_Bridge) &_hamr_Arch_SW_Impl_Instance_FLT_ARes_CASE_Filter_ARes;
}

hamr_SW_CASE_Monitor_Geo_thr_Impl_Bridge hamr_Arch_SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo(STACK_FRAME_ONLY) {
  hamr_Arch_init(CALLER_LAST);
  return (hamr_SW_CASE_Monitor_Geo_thr_Impl_Bridge) &_hamr_Arch_SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo;
}

art_ArchitectureDescription hamr_Arch_ad(STACK_FRAME_ONLY) {
  hamr_Arch_init(CALLER_LAST);
  return (art_ArchitectureDescription) &_hamr_Arch_ad;
}