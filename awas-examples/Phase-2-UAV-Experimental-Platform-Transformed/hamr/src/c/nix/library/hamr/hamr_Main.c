#include <all.h>

Z hamr_Main_main(STACK_FRAME IS_948B60 args) {
  DeclNewStackFrame(caller, "Main.scala", "hamr.Main", "main", 0);

  sfUpdateLoc(13);
  Z seed;
  Z t_0 = IS_948B60_size(SF args);
  if (Z__eq(t_0, Z_C(1))) {

    sfUpdateLoc(14);
    DeclNewOption_882048(t_1);
    Z_apply(&t_1, IS_948B60_at(args, Z_C(0)));
    Z t_2 = Option_882048_get_(SF (&t_1));
    Z n = t_2;
    Z t_3;
    if (Z__eq(n, Z_C(0))) {
      t_3 = Z_C(1);
    } else {
      t_3 = n;
    }
    seed = t_3;
  } else {
    seed = Z_C(1);
  }

  sfUpdateLoc(20);
  DeclNewNone_76463B(t_4);
  None_76463B_apply(SF &t_4);
  hamr_PlatformNix_initialise(SF seed, (Option_882048) (&t_4));

  sfUpdateLoc(22);
  DeclNewart_Empty(_empty);
  art_Empty empty;
  DeclNewart_Empty(t_5);
  art_Empty_apply(SF &t_5);
  empty = (art_Empty) (&t_5);

  sfUpdateLoc(24);
  B t_6 = hamr_PlatformNix_sendAsync(SF hamr_IPCPorts_SW_Impl_Instance_FC_UART_UARTDriver_App(SF_LAST), hamr_IPCPorts_SW_Impl_Instance_FC_UART_UARTDriver_App(SF_LAST), (art_DataContent) empty);

  sfUpdateLoc(25);
  B t_7 = hamr_PlatformNix_sendAsync(SF hamr_IPCPorts_SW_Impl_Instance_RADIO_RadioDriver_Attestation_App(SF_LAST), hamr_IPCPorts_SW_Impl_Instance_RADIO_RadioDriver_Attestation_App(SF_LAST), (art_DataContent) empty);

  sfUpdateLoc(26);
  B t_8 = hamr_PlatformNix_sendAsync(SF hamr_IPCPorts_SW_Impl_Instance_FlyZones_FlyZonesDatabase_App(SF_LAST), hamr_IPCPorts_SW_Impl_Instance_FlyZones_FlyZonesDatabase_App(SF_LAST), (art_DataContent) empty);

  sfUpdateLoc(27);
  B t_9 = hamr_PlatformNix_sendAsync(SF hamr_IPCPorts_SW_Impl_Instance_UXAS_UxAS_App(SF_LAST), hamr_IPCPorts_SW_Impl_Instance_UXAS_UxAS_App(SF_LAST), (art_DataContent) empty);

  sfUpdateLoc(28);
  B t_10 = hamr_PlatformNix_sendAsync(SF hamr_IPCPorts_SW_Impl_Instance_WPM_WaypointPlanManagerService_App(SF_LAST), hamr_IPCPorts_SW_Impl_Instance_WPM_WaypointPlanManagerService_App(SF_LAST), (art_DataContent) empty);

  sfUpdateLoc(29);
  B t_11 = hamr_PlatformNix_sendAsync(SF hamr_IPCPorts_SW_Impl_Instance_AM_CASE_AttestationManager_App(SF_LAST), hamr_IPCPorts_SW_Impl_Instance_AM_CASE_AttestationManager_App(SF_LAST), (art_DataContent) empty);

  sfUpdateLoc(30);
  B t_12 = hamr_PlatformNix_sendAsync(SF hamr_IPCPorts_SW_Impl_Instance_AM_Gate_CASE_AttestationGate_App(SF_LAST), hamr_IPCPorts_SW_Impl_Instance_AM_Gate_CASE_AttestationGate_App(SF_LAST), (art_DataContent) empty);

  sfUpdateLoc(31);
  B t_13 = hamr_PlatformNix_sendAsync(SF hamr_IPCPorts_SW_Impl_Instance_FLT_AReq_CASE_Filter_AReq_App(SF_LAST), hamr_IPCPorts_SW_Impl_Instance_FLT_AReq_CASE_Filter_AReq_App(SF_LAST), (art_DataContent) empty);

  sfUpdateLoc(32);
  B t_14 = hamr_PlatformNix_sendAsync(SF hamr_IPCPorts_SW_Impl_Instance_FLT_OR_CASE_Filter_OR_App(SF_LAST), hamr_IPCPorts_SW_Impl_Instance_FLT_OR_CASE_Filter_OR_App(SF_LAST), (art_DataContent) empty);

  sfUpdateLoc(33);
  B t_15 = hamr_PlatformNix_sendAsync(SF hamr_IPCPorts_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_App(SF_LAST), hamr_IPCPorts_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_App(SF_LAST), (art_DataContent) empty);

  sfUpdateLoc(34);
  B t_16 = hamr_PlatformNix_sendAsync(SF hamr_IPCPorts_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_App(SF_LAST), hamr_IPCPorts_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_App(SF_LAST), (art_DataContent) empty);

  sfUpdateLoc(35);
  B t_17 = hamr_PlatformNix_sendAsync(SF hamr_IPCPorts_SW_Impl_Instance_FLT_ARes_CASE_Filter_ARes_App(SF_LAST), hamr_IPCPorts_SW_Impl_Instance_FLT_ARes_CASE_Filter_ARes_App(SF_LAST), (art_DataContent) empty);

  sfUpdateLoc(36);
  B t_18 = hamr_PlatformNix_sendAsync(SF hamr_IPCPorts_SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo_App(SF_LAST), hamr_IPCPorts_SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo_App(SF_LAST), (art_DataContent) empty);

  sfUpdateLoc(38);
  hamr_PlatformNix_finalise(SF_LAST);
  return Z_C(0);
}