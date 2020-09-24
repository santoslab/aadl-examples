#include <all.h>

B hamr_ArtNix_initialized_ = F;

Z _hamr_ArtNix_maxPortIds;
union Option_8E9F45 _hamr_ArtNix_noData;
struct MS_2590FE _hamr_ArtNix_data;
struct MS_B5E3E6 _hamr_ArtNix_connection;
struct MS_2590FE _hamr_ArtNix_frozen;
struct MS_2590FE _hamr_ArtNix_outgoing;
B _hamr_ArtNix_isTimeDispatch;

void hamr_ArtNix_init(STACK_FRAME_ONLY) {
  if (hamr_ArtNix_initialized_) return;
  hamr_ArtNix_initialized_ = T;
  DeclNewStackFrame(caller, "ArtNix.scala", "hamr.ArtNix", "<init>", 0);
  _hamr_ArtNix_maxPortIds = Z__add(hamr_IPCPorts_Main(SF_LAST), Z_C(1));
  DeclNewNone_964667(t_0);
  None_964667_apply(SF &t_0);
  Type_assign(&_hamr_ArtNix_noData, (&t_0), sizeof(struct None_964667));
  DeclNewMS_2590FE(t_1);
  MS_2590FE_create(SF (MS_2590FE) &t_1, hamr_ArtNix_maxPortIds(SF_LAST), (Option_8E9F45) hamr_ArtNix_noData(SF_LAST));
  Type_assign(&_hamr_ArtNix_data, ((MS_2590FE) &t_1), sizeof(struct MS_2590FE));
  {

    sfUpdateLoc(17);
    DeclNewMS_B5E3E6(_r);
    MS_B5E3E6 r;
    STATIC_ASSERT(0 <= MaxIS_AA0F82, "Insufficient maximum for IS[Z, (Z, Z)] elements.");
    DeclNewIS_AA0F82(t_2);
    t_2.size = (int8_t) 0;
    DeclNewMS_B5E3E6(t_3);
    MS_B5E3E6_create(SF (MS_B5E3E6) &t_3, hamr_ArtNix_maxPortIds(SF_LAST), (IS_AA0F82) (&t_2));
    r = (MS_B5E3E6) &_r;
    Type_assign(r, ((MS_B5E3E6) &t_3), sizeof(struct MS_B5E3E6));

    sfUpdateLoc(19);
    STATIC_ASSERT(2 <= MaxIS_AA0F82, "Insufficient maximum for IS[Z, (Z, Z)] elements.");
    DeclNewIS_AA0F82(t_4);
    t_4.size = (int8_t) 2;
    DeclNewTuple2_EC3B57(t_5);
    Tuple2_EC3B57_apply(SF &t_5, hamr_IPCPorts_SW_Impl_Instance_UXAS_UxAS_App(SF_LAST), art_Port_45E54D_id_(hamr_SW_UxAS_thr_Impl_Bridge_AirVehicleState_(hamr_Arch_SW_Impl_Instance_UXAS_UxAS(SF_LAST))));
    IS_AA0F82_up(&t_4, 0, (Tuple2_EC3B57) (&t_5));
    DeclNewTuple2_EC3B57(t_6);
    Tuple2_EC3B57_apply(SF &t_6, hamr_IPCPorts_SW_Impl_Instance_WPM_WaypointPlanManagerService_App(SF_LAST), art_Port_45E54D_id_(hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge_AirVehicleState_(hamr_Arch_SW_Impl_Instance_WPM_WaypointPlanManagerService(SF_LAST))));
    IS_AA0F82_up(&t_4, 1, (Tuple2_EC3B57) (&t_6));
    MS_B5E3E6_up(r, art_Port_45E54D_id_(hamr_Drivers_UARTDriver_Impl_Bridge_AirVehicleState_(hamr_Arch_SW_Impl_Instance_FC_UART_UARTDriver(SF_LAST))), (IS_AA0F82) (&t_4));

    sfUpdateLoc(23);
    STATIC_ASSERT(1 <= MaxIS_AA0F82, "Insufficient maximum for IS[Z, (Z, Z)] elements.");
    DeclNewIS_AA0F82(t_7);
    t_7.size = (int8_t) 1;
    DeclNewTuple2_EC3B57(t_8);
    Tuple2_EC3B57_apply(SF &t_8, hamr_IPCPorts_SW_Impl_Instance_AM_Gate_CASE_AttestationGate_App(SF_LAST), art_Port_45E54D_id_(hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_AutomationRequest_in_(hamr_Arch_SW_Impl_Instance_AM_Gate_CASE_AttestationGate(SF_LAST))));
    IS_AA0F82_up(&t_7, 0, (Tuple2_EC3B57) (&t_8));
    MS_B5E3E6_up(r, art_Port_45E54D_id_(hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_AutomationRequest_(hamr_Arch_SW_Impl_Instance_RADIO_RadioDriver_Attestation(SF_LAST))), (IS_AA0F82) (&t_7));

    sfUpdateLoc(26);
    STATIC_ASSERT(1 <= MaxIS_AA0F82, "Insufficient maximum for IS[Z, (Z, Z)] elements.");
    DeclNewIS_AA0F82(t_9);
    t_9.size = (int8_t) 1;
    DeclNewTuple2_EC3B57(t_10);
    Tuple2_EC3B57_apply(SF &t_10, hamr_IPCPorts_SW_Impl_Instance_AM_Gate_CASE_AttestationGate_App(SF_LAST), art_Port_45E54D_id_(hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_OperatingRegion_in_(hamr_Arch_SW_Impl_Instance_AM_Gate_CASE_AttestationGate(SF_LAST))));
    IS_AA0F82_up(&t_9, 0, (Tuple2_EC3B57) (&t_10));
    MS_B5E3E6_up(r, art_Port_45E54D_id_(hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_OperatingRegion_(hamr_Arch_SW_Impl_Instance_RADIO_RadioDriver_Attestation(SF_LAST))), (IS_AA0F82) (&t_9));

    sfUpdateLoc(29);
    STATIC_ASSERT(1 <= MaxIS_AA0F82, "Insufficient maximum for IS[Z, (Z, Z)] elements.");
    DeclNewIS_AA0F82(t_11);
    t_11.size = (int8_t) 1;
    DeclNewTuple2_EC3B57(t_12);
    Tuple2_EC3B57_apply(SF &t_12, hamr_IPCPorts_SW_Impl_Instance_AM_Gate_CASE_AttestationGate_App(SF_LAST), art_Port_45E54D_id_(hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_LineSearchTask_in_(hamr_Arch_SW_Impl_Instance_AM_Gate_CASE_AttestationGate(SF_LAST))));
    IS_AA0F82_up(&t_11, 0, (Tuple2_EC3B57) (&t_12));
    MS_B5E3E6_up(r, art_Port_45E54D_id_(hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_LineSearchTask_(hamr_Arch_SW_Impl_Instance_RADIO_RadioDriver_Attestation(SF_LAST))), (IS_AA0F82) (&t_11));

    sfUpdateLoc(32);
    STATIC_ASSERT(1 <= MaxIS_AA0F82, "Insufficient maximum for IS[Z, (Z, Z)] elements.");
    DeclNewIS_AA0F82(t_13);
    t_13.size = (int8_t) 1;
    DeclNewTuple2_EC3B57(t_14);
    Tuple2_EC3B57_apply(SF &t_14, hamr_IPCPorts_SW_Impl_Instance_AM_CASE_AttestationManager_App(SF_LAST), art_Port_45E54D_id_(hamr_SW_CASE_AttestationManager_thr_Impl_Bridge_attestation_response_(hamr_Arch_SW_Impl_Instance_AM_CASE_AttestationManager(SF_LAST))));
    IS_AA0F82_up(&t_13, 0, (Tuple2_EC3B57) (&t_14));
    MS_B5E3E6_up(r, art_Port_45E54D_id_(hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_am_response_(hamr_Arch_SW_Impl_Instance_RADIO_RadioDriver_Attestation(SF_LAST))), (IS_AA0F82) (&t_13));

    sfUpdateLoc(35);
    STATIC_ASSERT(1 <= MaxIS_AA0F82, "Insufficient maximum for IS[Z, (Z, Z)] elements.");
    DeclNewIS_AA0F82(t_15);
    t_15.size = (int8_t) 1;
    DeclNewTuple2_EC3B57(t_16);
    Tuple2_EC3B57_apply(SF &t_16, hamr_IPCPorts_SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo_App(SF_LAST), art_Port_45E54D_id_(hamr_SW_CASE_Monitor_Geo_thr_Impl_Bridge_keep_in_zones_(hamr_Arch_SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo(SF_LAST))));
    IS_AA0F82_up(&t_15, 0, (Tuple2_EC3B57) (&t_16));
    MS_B5E3E6_up(r, art_Port_45E54D_id_(hamr_SW_FlyZonesDatabase_thr_Impl_Bridge_keep_in_zones_(hamr_Arch_SW_Impl_Instance_FlyZones_FlyZonesDatabase(SF_LAST))), (IS_AA0F82) (&t_15));

    sfUpdateLoc(38);
    STATIC_ASSERT(1 <= MaxIS_AA0F82, "Insufficient maximum for IS[Z, (Z, Z)] elements.");
    DeclNewIS_AA0F82(t_17);
    t_17.size = (int8_t) 1;
    DeclNewTuple2_EC3B57(t_18);
    Tuple2_EC3B57_apply(SF &t_18, hamr_IPCPorts_SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo_App(SF_LAST), art_Port_45E54D_id_(hamr_SW_CASE_Monitor_Geo_thr_Impl_Bridge_keep_out_zones_(hamr_Arch_SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo(SF_LAST))));
    IS_AA0F82_up(&t_17, 0, (Tuple2_EC3B57) (&t_18));
    MS_B5E3E6_up(r, art_Port_45E54D_id_(hamr_SW_FlyZonesDatabase_thr_Impl_Bridge_keep_out_zones_(hamr_Arch_SW_Impl_Instance_FlyZones_FlyZonesDatabase(SF_LAST))), (IS_AA0F82) (&t_17));

    sfUpdateLoc(41);
    STATIC_ASSERT(2 <= MaxIS_AA0F82, "Insufficient maximum for IS[Z, (Z, Z)] elements.");
    DeclNewIS_AA0F82(t_19);
    t_19.size = (int8_t) 2;
    DeclNewTuple2_EC3B57(t_20);
    Tuple2_EC3B57_apply(SF &t_20, hamr_IPCPorts_SW_Impl_Instance_FLT_ARes_CASE_Filter_ARes_App(SF_LAST), art_Port_45E54D_id_(hamr_SW_CASE_Filter_ARes_thr_Impl_Bridge_filter_in_(hamr_Arch_SW_Impl_Instance_FLT_ARes_CASE_Filter_ARes(SF_LAST))));
    IS_AA0F82_up(&t_19, 0, (Tuple2_EC3B57) (&t_20));
    DeclNewTuple2_EC3B57(t_21);
    Tuple2_EC3B57_apply(SF &t_21, hamr_IPCPorts_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_App(SF_LAST), art_Port_45E54D_id_(hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge_observed_(hamr_Arch_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req(SF_LAST))));
    IS_AA0F82_up(&t_19, 1, (Tuple2_EC3B57) (&t_21));
    MS_B5E3E6_up(r, art_Port_45E54D_id_(hamr_SW_UxAS_thr_Impl_Bridge_AutomationResponse_(hamr_Arch_SW_Impl_Instance_UXAS_UxAS(SF_LAST))), (IS_AA0F82) (&t_19));

    sfUpdateLoc(45);
    STATIC_ASSERT(1 <= MaxIS_AA0F82, "Insufficient maximum for IS[Z, (Z, Z)] elements.");
    DeclNewIS_AA0F82(t_22);
    t_22.size = (int8_t) 1;
    DeclNewTuple2_EC3B57(t_23);
    Tuple2_EC3B57_apply(SF &t_23, hamr_IPCPorts_SW_Impl_Instance_FC_UART_UARTDriver_App(SF_LAST), art_Port_45E54D_id_(hamr_Drivers_UARTDriver_Impl_Bridge_MissionCommand_(hamr_Arch_SW_Impl_Instance_FC_UART_UARTDriver(SF_LAST))));
    IS_AA0F82_up(&t_22, 0, (Tuple2_EC3B57) (&t_23));
    MS_B5E3E6_up(r, art_Port_45E54D_id_(hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge_MissionCommand_(hamr_Arch_SW_Impl_Instance_WPM_WaypointPlanManagerService(SF_LAST))), (IS_AA0F82) (&t_22));

    sfUpdateLoc(48);
    STATIC_ASSERT(1 <= MaxIS_AA0F82, "Insufficient maximum for IS[Z, (Z, Z)] elements.");
    DeclNewIS_AA0F82(t_24);
    t_24.size = (int8_t) 1;
    DeclNewTuple2_EC3B57(t_25);
    Tuple2_EC3B57_apply(SF &t_25, hamr_IPCPorts_SW_Impl_Instance_AM_Gate_CASE_AttestationGate_App(SF_LAST), art_Port_45E54D_id_(hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_trusted_ids_(hamr_Arch_SW_Impl_Instance_AM_Gate_CASE_AttestationGate(SF_LAST))));
    IS_AA0F82_up(&t_24, 0, (Tuple2_EC3B57) (&t_25));
    MS_B5E3E6_up(r, art_Port_45E54D_id_(hamr_SW_CASE_AttestationManager_thr_Impl_Bridge_trusted_ids_(hamr_Arch_SW_Impl_Instance_AM_CASE_AttestationManager(SF_LAST))), (IS_AA0F82) (&t_24));

    sfUpdateLoc(51);
    STATIC_ASSERT(1 <= MaxIS_AA0F82, "Insufficient maximum for IS[Z, (Z, Z)] elements.");
    DeclNewIS_AA0F82(t_26);
    t_26.size = (int8_t) 1;
    DeclNewTuple2_EC3B57(t_27);
    Tuple2_EC3B57_apply(SF &t_27, hamr_IPCPorts_SW_Impl_Instance_RADIO_RadioDriver_Attestation_App(SF_LAST), art_Port_45E54D_id_(hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_am_request_(hamr_Arch_SW_Impl_Instance_RADIO_RadioDriver_Attestation(SF_LAST))));
    IS_AA0F82_up(&t_26, 0, (Tuple2_EC3B57) (&t_27));
    MS_B5E3E6_up(r, art_Port_45E54D_id_(hamr_SW_CASE_AttestationManager_thr_Impl_Bridge_attestation_request_(hamr_Arch_SW_Impl_Instance_AM_CASE_AttestationManager(SF_LAST))), (IS_AA0F82) (&t_26));

    sfUpdateLoc(54);
    STATIC_ASSERT(1 <= MaxIS_AA0F82, "Insufficient maximum for IS[Z, (Z, Z)] elements.");
    DeclNewIS_AA0F82(t_28);
    t_28.size = (int8_t) 1;
    DeclNewTuple2_EC3B57(t_29);
    Tuple2_EC3B57_apply(SF &t_29, hamr_IPCPorts_SW_Impl_Instance_FLT_AReq_CASE_Filter_AReq_App(SF_LAST), art_Port_45E54D_id_(hamr_SW_CASE_Filter_AReq_thr_Impl_Bridge_filter_in_(hamr_Arch_SW_Impl_Instance_FLT_AReq_CASE_Filter_AReq(SF_LAST))));
    IS_AA0F82_up(&t_28, 0, (Tuple2_EC3B57) (&t_29));
    MS_B5E3E6_up(r, art_Port_45E54D_id_(hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_AutomationRequest_out_(hamr_Arch_SW_Impl_Instance_AM_Gate_CASE_AttestationGate(SF_LAST))), (IS_AA0F82) (&t_28));

    sfUpdateLoc(57);
    STATIC_ASSERT(1 <= MaxIS_AA0F82, "Insufficient maximum for IS[Z, (Z, Z)] elements.");
    DeclNewIS_AA0F82(t_30);
    t_30.size = (int8_t) 1;
    DeclNewTuple2_EC3B57(t_31);
    Tuple2_EC3B57_apply(SF &t_31, hamr_IPCPorts_SW_Impl_Instance_FLT_OR_CASE_Filter_OR_App(SF_LAST), art_Port_45E54D_id_(hamr_SW_CASE_Filter_OR_thr_Impl_Bridge_filter_in_(hamr_Arch_SW_Impl_Instance_FLT_OR_CASE_Filter_OR(SF_LAST))));
    IS_AA0F82_up(&t_30, 0, (Tuple2_EC3B57) (&t_31));
    MS_B5E3E6_up(r, art_Port_45E54D_id_(hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_OperatingRegion_out_(hamr_Arch_SW_Impl_Instance_AM_Gate_CASE_AttestationGate(SF_LAST))), (IS_AA0F82) (&t_30));

    sfUpdateLoc(60);
    STATIC_ASSERT(1 <= MaxIS_AA0F82, "Insufficient maximum for IS[Z, (Z, Z)] elements.");
    DeclNewIS_AA0F82(t_32);
    t_32.size = (int8_t) 1;
    DeclNewTuple2_EC3B57(t_33);
    Tuple2_EC3B57_apply(SF &t_33, hamr_IPCPorts_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_App(SF_LAST), art_Port_45E54D_id_(hamr_SW_CASE_Filter_LST_thr_Impl_Bridge_filter_in_(hamr_Arch_SW_Impl_Instance_FLT_LST_CASE_Filter_LST(SF_LAST))));
    IS_AA0F82_up(&t_32, 0, (Tuple2_EC3B57) (&t_33));
    MS_B5E3E6_up(r, art_Port_45E54D_id_(hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_LineSearchTask_out_(hamr_Arch_SW_Impl_Instance_AM_Gate_CASE_AttestationGate(SF_LAST))), (IS_AA0F82) (&t_32));

    sfUpdateLoc(63);
    STATIC_ASSERT(2 <= MaxIS_AA0F82, "Insufficient maximum for IS[Z, (Z, Z)] elements.");
    DeclNewIS_AA0F82(t_34);
    t_34.size = (int8_t) 2;
    DeclNewTuple2_EC3B57(t_35);
    Tuple2_EC3B57_apply(SF &t_35, hamr_IPCPorts_SW_Impl_Instance_UXAS_UxAS_App(SF_LAST), art_Port_45E54D_id_(hamr_SW_UxAS_thr_Impl_Bridge_AutomationRequest_(hamr_Arch_SW_Impl_Instance_UXAS_UxAS(SF_LAST))));
    IS_AA0F82_up(&t_34, 0, (Tuple2_EC3B57) (&t_35));
    DeclNewTuple2_EC3B57(t_36);
    Tuple2_EC3B57_apply(SF &t_36, hamr_IPCPorts_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_App(SF_LAST), art_Port_45E54D_id_(hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge_reference_1_(hamr_Arch_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req(SF_LAST))));
    IS_AA0F82_up(&t_34, 1, (Tuple2_EC3B57) (&t_36));
    MS_B5E3E6_up(r, art_Port_45E54D_id_(hamr_SW_CASE_Filter_AReq_thr_Impl_Bridge_filter_out_(hamr_Arch_SW_Impl_Instance_FLT_AReq_CASE_Filter_AReq(SF_LAST))), (IS_AA0F82) (&t_34));

    sfUpdateLoc(67);
    STATIC_ASSERT(1 <= MaxIS_AA0F82, "Insufficient maximum for IS[Z, (Z, Z)] elements.");
    DeclNewIS_AA0F82(t_37);
    t_37.size = (int8_t) 1;
    DeclNewTuple2_EC3B57(t_38);
    Tuple2_EC3B57_apply(SF &t_38, hamr_IPCPorts_SW_Impl_Instance_UXAS_UxAS_App(SF_LAST), art_Port_45E54D_id_(hamr_SW_UxAS_thr_Impl_Bridge_OperatingRegion_(hamr_Arch_SW_Impl_Instance_UXAS_UxAS(SF_LAST))));
    IS_AA0F82_up(&t_37, 0, (Tuple2_EC3B57) (&t_38));
    MS_B5E3E6_up(r, art_Port_45E54D_id_(hamr_SW_CASE_Filter_OR_thr_Impl_Bridge_filter_out_(hamr_Arch_SW_Impl_Instance_FLT_OR_CASE_Filter_OR(SF_LAST))), (IS_AA0F82) (&t_37));

    sfUpdateLoc(70);
    STATIC_ASSERT(1 <= MaxIS_AA0F82, "Insufficient maximum for IS[Z, (Z, Z)] elements.");
    DeclNewIS_AA0F82(t_39);
    t_39.size = (int8_t) 1;
    DeclNewTuple2_EC3B57(t_40);
    Tuple2_EC3B57_apply(SF &t_40, hamr_IPCPorts_SW_Impl_Instance_UXAS_UxAS_App(SF_LAST), art_Port_45E54D_id_(hamr_SW_UxAS_thr_Impl_Bridge_LineSearchTask_(hamr_Arch_SW_Impl_Instance_UXAS_UxAS(SF_LAST))));
    IS_AA0F82_up(&t_39, 0, (Tuple2_EC3B57) (&t_40));
    MS_B5E3E6_up(r, art_Port_45E54D_id_(hamr_SW_CASE_Filter_LST_thr_Impl_Bridge_filter_out_(hamr_Arch_SW_Impl_Instance_FLT_LST_CASE_Filter_LST(SF_LAST))), (IS_AA0F82) (&t_39));

    sfUpdateLoc(73);
    STATIC_ASSERT(1 <= MaxIS_AA0F82, "Insufficient maximum for IS[Z, (Z, Z)] elements.");
    DeclNewIS_AA0F82(t_41);
    t_41.size = (int8_t) 1;
    DeclNewTuple2_EC3B57(t_42);
    Tuple2_EC3B57_apply(SF &t_42, hamr_IPCPorts_SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo_App(SF_LAST), art_Port_45E54D_id_(hamr_SW_CASE_Monitor_Geo_thr_Impl_Bridge_observed_(hamr_Arch_SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo(SF_LAST))));
    IS_AA0F82_up(&t_41, 0, (Tuple2_EC3B57) (&t_42));
    MS_B5E3E6_up(r, art_Port_45E54D_id_(hamr_SW_CASE_Filter_ARes_thr_Impl_Bridge_filter_out_(hamr_Arch_SW_Impl_Instance_FLT_ARes_CASE_Filter_ARes(SF_LAST))), (IS_AA0F82) (&t_41));

    sfUpdateLoc(76);
    STATIC_ASSERT(1 <= MaxIS_AA0F82, "Insufficient maximum for IS[Z, (Z, Z)] elements.");
    DeclNewIS_AA0F82(t_43);
    t_43.size = (int8_t) 1;
    DeclNewTuple2_EC3B57(t_44);
    Tuple2_EC3B57_apply(SF &t_44, hamr_IPCPorts_SW_Impl_Instance_WPM_WaypointPlanManagerService_App(SF_LAST), art_Port_45E54D_id_(hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge_AutomationResponse_(hamr_Arch_SW_Impl_Instance_WPM_WaypointPlanManagerService(SF_LAST))));
    IS_AA0F82_up(&t_43, 0, (Tuple2_EC3B57) (&t_44));
    MS_B5E3E6_up(r, art_Port_45E54D_id_(hamr_SW_CASE_Monitor_Geo_thr_Impl_Bridge_output_(hamr_Arch_SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo(SF_LAST))), (IS_AA0F82) (&t_43));

    sfUpdateLoc(79);
    STATIC_ASSERT(1 <= MaxIS_AA0F82, "Insufficient maximum for IS[Z, (Z, Z)] elements.");
    DeclNewIS_AA0F82(t_45);
    t_45.size = (int8_t) 1;
    DeclNewTuple2_EC3B57(t_46);
    Tuple2_EC3B57_apply(SF &t_46, hamr_IPCPorts_SW_Impl_Instance_WPM_WaypointPlanManagerService_App(SF_LAST), art_Port_9CBF18_id_(hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge_ReturnHome_(hamr_Arch_SW_Impl_Instance_WPM_WaypointPlanManagerService(SF_LAST))));
    IS_AA0F82_up(&t_45, 0, (Tuple2_EC3B57) (&t_46));
    MS_B5E3E6_up(r, art_Port_9CBF18_id_(hamr_SW_CASE_Monitor_Geo_thr_Impl_Bridge_alert_(hamr_Arch_SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo(SF_LAST))), (IS_AA0F82) (&t_45));
    Type_assign(&_hamr_ArtNix_connection, r, sizeof(struct MS_B5E3E6));
  }
  DeclNewMS_2590FE(t_47);
  MS_2590FE_create(SF (MS_2590FE) &t_47, hamr_ArtNix_maxPortIds(SF_LAST), (Option_8E9F45) hamr_ArtNix_noData(SF_LAST));
  Type_assign(&_hamr_ArtNix_frozen, ((MS_2590FE) &t_47), sizeof(struct MS_2590FE));
  DeclNewMS_2590FE(t_48);
  MS_2590FE_create(SF (MS_2590FE) &t_48, hamr_ArtNix_maxPortIds(SF_LAST), (Option_8E9F45) hamr_ArtNix_noData(SF_LAST));
  Type_assign(&_hamr_ArtNix_outgoing, ((MS_2590FE) &t_48), sizeof(struct MS_2590FE));
  _hamr_ArtNix_isTimeDispatch = F;
}

Z hamr_ArtNix_maxPortIds(STACK_FRAME_ONLY) {
  hamr_ArtNix_init(CALLER_LAST);
  return _hamr_ArtNix_maxPortIds;
}

Option_8E9F45 hamr_ArtNix_noData(STACK_FRAME_ONLY) {
  hamr_ArtNix_init(CALLER_LAST);
  return (Option_8E9F45) &_hamr_ArtNix_noData;
}

MS_2590FE hamr_ArtNix_data(STACK_FRAME_ONLY) {
  hamr_ArtNix_init(CALLER_LAST);
  return (MS_2590FE) &_hamr_ArtNix_data;
}

MS_B5E3E6 hamr_ArtNix_connection(STACK_FRAME_ONLY) {
  hamr_ArtNix_init(CALLER_LAST);
  return (MS_B5E3E6) &_hamr_ArtNix_connection;
}

MS_2590FE hamr_ArtNix_frozen(STACK_FRAME_ONLY) {
  hamr_ArtNix_init(CALLER_LAST);
  return (MS_2590FE) &_hamr_ArtNix_frozen;
}

void hamr_ArtNix_frozen_a(STACK_FRAME MS_2590FE p_frozen) {
  hamr_ArtNix_init(CALLER_LAST);
  Type_assign(&_hamr_ArtNix_frozen, p_frozen, sizeof(struct MS_2590FE));
}

MS_2590FE hamr_ArtNix_outgoing(STACK_FRAME_ONLY) {
  hamr_ArtNix_init(CALLER_LAST);
  return (MS_2590FE) &_hamr_ArtNix_outgoing;
}

void hamr_ArtNix_outgoing_a(STACK_FRAME MS_2590FE p_outgoing) {
  hamr_ArtNix_init(CALLER_LAST);
  Type_assign(&_hamr_ArtNix_outgoing, p_outgoing, sizeof(struct MS_2590FE));
}

B hamr_ArtNix_isTimeDispatch(STACK_FRAME_ONLY) {
  hamr_ArtNix_init(CALLER_LAST);
  return _hamr_ArtNix_isTimeDispatch;
}

void hamr_ArtNix_isTimeDispatch_a(STACK_FRAME B p_isTimeDispatch) {
  hamr_ArtNix_init(CALLER_LAST);
  _hamr_ArtNix_isTimeDispatch = p_isTimeDispatch;
}

Unit hamr_ArtNix_timeDispatch(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "ArtNix.scala", "hamr.ArtNix", "timeDispatch", 0);

  sfUpdateLoc(118);
  hamr_ArtNix_isTimeDispatch_a(SF (B) T);
}

Unit hamr_ArtNix_updateData(STACK_FRAME Z port, art_DataContent d) {
  DeclNewStackFrame(caller, "ArtNix.scala", "hamr.ArtNix", "updateData", 0);

  sfUpdateLoc(114);
  DeclNewSome_D29615(t_0);
  Some_D29615_apply(SF &t_0, (art_DataContent) d);
  MS_2590FE_up(hamr_ArtNix_data(SF_LAST), port, (Option_8E9F45) (&t_0));
}

Unit hamr_ArtNix_run(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "ArtNix.scala", "hamr.ArtNix", "run", 0);
}

Unit hamr_ArtNix_logInfo(STACK_FRAME String title, String msg) {
  DeclNewStackFrame(caller, "ArtNix.scala", "hamr.ArtNix", "logInfo", 0);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(177);
  String_cprint(title, T);

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(178);
  String_cprint(string(": "), T);

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(179);
  String_cprint(msg, T);
  cprintln(T);
  cflush(T);

  #endif
}

static inline B hamr_ArtNix_sendOutput_extract_155_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, art_DataContent *_d_155_19) {
  if (!Some_D29615__is(SF t_0)) return F;
  *_d_155_19 = (art_DataContent) Some_D29615_value_(Some_D29615__as(SF t_0));
  return T;
}

static inline B hamr_ArtNix_sendOutput_extract_160_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0) {
  return T;
}

static inline B hamr_ArtNix_sendOutput_extract_166_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_8, art_DataContent *_d_166_19) {
  if (!Some_D29615__is(SF t_8)) return F;
  *_d_166_19 = (art_DataContent) Some_D29615_value_(Some_D29615__as(SF t_8));
  return T;
}

static inline B hamr_ArtNix_sendOutput_extract_171_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_8) {
  return T;
}

Unit hamr_ArtNix_sendOutput(STACK_FRAME IS_82ABD8 eventPortIds, IS_82ABD8 dataPortIds) {
  DeclNewStackFrame(caller, "ArtNix.scala", "hamr.ArtNix", "sendOutput", 0);

  sfUpdateLoc(153);
  {
    IS_82ABD8 t_5 = dataPortIds;
    int8_t t_6 = (dataPortIds)->size;
    for (int8_t t_7 = 0; t_7 < t_6; t_7++) {
      Z p = t_5->value[t_7];

      sfUpdateLoc(154);
      DeclNewOption_8E9F45(t_0);
      Type_assign(&t_0, MS_2590FE_at(hamr_ArtNix_outgoing(SF_LAST), p), sizeof(union Option_8E9F45));
      B match_154_7 = F;
      if (!match_154_7) {
        art_DataContent d_155_19;
        match_154_7 = hamr_ArtNix_sendOutput_extract_155_14_8E9F45(SF ((Option_8E9F45) &t_0), &d_155_19);
        if (match_154_7) {

          sfUpdateLoc(156);
          MS_2590FE_up(hamr_ArtNix_outgoing(SF_LAST), p, (Option_8E9F45) hamr_ArtNix_noData(SF_LAST));

          sfUpdateLoc(157);
          {
            IS_AA0F82 t_2 = MS_B5E3E6_at(hamr_ArtNix_connection(SF_LAST), p);
            int8_t t_3 = (MS_B5E3E6_at(hamr_ArtNix_connection(SF_LAST), p))->size;
            for (int8_t t_4 = 0; t_4 < t_3; t_4++) {
              Tuple2_EC3B57 e = (Tuple2_EC3B57) &(t_2->value[t_4]);

              sfUpdateLoc(158);
              B t_1 = hamr_PlatformNix_sendAsync(SF Tuple2_EC3B57_1(e), Tuple2_EC3B57_2(e), (art_DataContent) d_155_19);
            }
          }
        }
      }
      if (!match_154_7) {
        match_154_7 = hamr_ArtNix_sendOutput_extract_160_14_8E9F45(SF ((Option_8E9F45) &t_0));
        if (match_154_7) {
        }
      }
      sfAssert(match_154_7, "Error when pattern matching.");
    }
  }

  sfUpdateLoc(164);
  {
    IS_82ABD8 t_13 = eventPortIds;
    int8_t t_14 = (eventPortIds)->size;
    for (int8_t t_15 = 0; t_15 < t_14; t_15++) {
      Z p = t_13->value[t_15];

      sfUpdateLoc(165);
      DeclNewOption_8E9F45(t_8);
      Type_assign(&t_8, MS_2590FE_at(hamr_ArtNix_outgoing(SF_LAST), p), sizeof(union Option_8E9F45));
      B match_165_7 = F;
      if (!match_165_7) {
        art_DataContent d_166_19;
        match_165_7 = hamr_ArtNix_sendOutput_extract_166_14_8E9F45(SF ((Option_8E9F45) &t_8), &d_166_19);
        if (match_165_7) {

          sfUpdateLoc(167);
          MS_2590FE_up(hamr_ArtNix_outgoing(SF_LAST), p, (Option_8E9F45) hamr_ArtNix_noData(SF_LAST));

          sfUpdateLoc(168);
          {
            IS_AA0F82 t_10 = MS_B5E3E6_at(hamr_ArtNix_connection(SF_LAST), p);
            int8_t t_11 = (MS_B5E3E6_at(hamr_ArtNix_connection(SF_LAST), p))->size;
            for (int8_t t_12 = 0; t_12 < t_11; t_12++) {
              Tuple2_EC3B57 e = (Tuple2_EC3B57) &(t_10->value[t_12]);

              sfUpdateLoc(169);
              B t_9 = hamr_PlatformNix_sendAsync(SF Tuple2_EC3B57_1(e), Tuple2_EC3B57_2(e), (art_DataContent) d_166_19);
            }
          }
        }
      }
      if (!match_165_7) {
        match_165_7 = hamr_ArtNix_sendOutput_extract_171_14_8E9F45(SF ((Option_8E9F45) &t_8));
        if (match_165_7) {
        }
      }
      sfAssert(match_165_7, "Error when pattern matching.");
    }
  }
}

Unit hamr_ArtNix_receiveInput(STACK_FRAME IS_82ABD8 eventPortIds, IS_82ABD8 dataPortIds) {
  DeclNewStackFrame(caller, "ArtNix.scala", "hamr.ArtNix", "receiveInput", 0);

  sfUpdateLoc(138);
  hamr_ArtNix_frozen_a(SF (MS_2590FE) hamr_ArtNix_data(SF_LAST));

  sfUpdateLoc(139);
  {
    IS_82ABD8 t_0 = eventPortIds;
    int8_t t_1 = (eventPortIds)->size;
    for (int8_t t_2 = 0; t_2 < t_1; t_2++) {
      Z i = t_0->value[t_2];

      sfUpdateLoc(140);
      MS_2590FE_up(hamr_ArtNix_data(SF_LAST), i, (Option_8E9F45) hamr_ArtNix_noData(SF_LAST));
    }
  }
}

Unit hamr_ArtNix_logDebug(STACK_FRAME String title, String msg) {
  DeclNewStackFrame(caller, "ArtNix.scala", "hamr.ArtNix", "logDebug", 0);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(189);
  String_cprint(title, T);

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(190);
  String_cprint(string(": "), T);

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(191);
  String_cprint(msg, T);
  cprintln(T);
  cflush(T);

  #endif
}

Unit hamr_ArtNix_logError(STACK_FRAME String title, String msg) {
  DeclNewStackFrame(caller, "ArtNix.scala", "hamr.ArtNix", "logError", 0);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(183);
  String_cprint(title, F);

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(184);
  String_cprint(string(": "), F);

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(185);
  String_cprint(msg, F);
  cprintln(F);
  cflush(F);

  #endif
}

Unit hamr_ArtNix_putValue(STACK_FRAME Z portId, art_DataContent data) {
  DeclNewStackFrame(caller, "ArtNix.scala", "hamr.ArtNix", "putValue", 0);

  sfUpdateLoc(145);
  DeclNewSome_D29615(t_0);
  Some_D29615_apply(SF &t_0, (art_DataContent) data);
  MS_2590FE_up(hamr_ArtNix_outgoing(SF_LAST), portId, (Option_8E9F45) (&t_0));
}

void hamr_ArtNix_getValue(STACK_FRAME Option_8E9F45 result, Z portId) {
  DeclNewStackFrame(caller, "ArtNix.scala", "hamr.ArtNix", "getValue", 0);
  Type_assign(result, MS_2590FE_at(hamr_ArtNix_frozen(SF_LAST), portId), sizeof(union Option_8E9F45));
  return;
}