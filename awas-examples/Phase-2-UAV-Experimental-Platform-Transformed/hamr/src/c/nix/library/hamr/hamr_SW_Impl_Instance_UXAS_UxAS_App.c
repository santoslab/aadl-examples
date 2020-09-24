#include <all.h>

B hamr_SW_Impl_Instance_UXAS_UxAS_App_initialized_ = F;

union art_Bridge_EntryPoints _hamr_SW_Impl_Instance_UXAS_UxAS_App_entryPoints;
Z _hamr_SW_Impl_Instance_UXAS_UxAS_App_appPortId;
union Option_882048 _hamr_SW_Impl_Instance_UXAS_UxAS_App_appPortIdOpt;
Z _hamr_SW_Impl_Instance_UXAS_UxAS_App_AutomationRequestPortId;
union Option_882048 _hamr_SW_Impl_Instance_UXAS_UxAS_App_AutomationRequestPortIdOpt;
Z _hamr_SW_Impl_Instance_UXAS_UxAS_App_AirVehicleStatePortId;
union Option_882048 _hamr_SW_Impl_Instance_UXAS_UxAS_App_AirVehicleStatePortIdOpt;
Z _hamr_SW_Impl_Instance_UXAS_UxAS_App_OperatingRegionPortId;
union Option_882048 _hamr_SW_Impl_Instance_UXAS_UxAS_App_OperatingRegionPortIdOpt;
Z _hamr_SW_Impl_Instance_UXAS_UxAS_App_LineSearchTaskPortId;
union Option_882048 _hamr_SW_Impl_Instance_UXAS_UxAS_App_LineSearchTaskPortIdOpt;

void hamr_SW_Impl_Instance_UXAS_UxAS_App_init(STACK_FRAME_ONLY) {
  if (hamr_SW_Impl_Instance_UXAS_UxAS_App_initialized_) return;
  hamr_SW_Impl_Instance_UXAS_UxAS_App_initialized_ = T;
  DeclNewStackFrame(caller, "SW_Impl_Instance_UXAS_UxAS_App.scala", "hamr.SW_Impl_Instance_UXAS_UxAS_App", "<init>", 0);
  Type_assign(&_hamr_SW_Impl_Instance_UXAS_UxAS_App_entryPoints, hamr_SW_UxAS_thr_Impl_Bridge_entryPoints_(hamr_Arch_SW_Impl_Instance_UXAS_UxAS(SF_LAST)), sizeof(union art_Bridge_EntryPoints));
  _hamr_SW_Impl_Instance_UXAS_UxAS_App_appPortId = hamr_IPCPorts_SW_Impl_Instance_UXAS_UxAS_App(SF_LAST);
  DeclNewSome_488F47(t_0);
  Some_488F47_apply(SF &t_0, hamr_SW_Impl_Instance_UXAS_UxAS_App_appPortId(SF_LAST));
  Type_assign(&_hamr_SW_Impl_Instance_UXAS_UxAS_App_appPortIdOpt, (&t_0), sizeof(struct Some_488F47));
  _hamr_SW_Impl_Instance_UXAS_UxAS_App_AutomationRequestPortId = art_Port_45E54D_id_(hamr_SW_UxAS_thr_Impl_Bridge_AutomationRequest_(hamr_Arch_SW_Impl_Instance_UXAS_UxAS(SF_LAST)));
  DeclNewSome_488F47(t_1);
  Some_488F47_apply(SF &t_1, hamr_SW_Impl_Instance_UXAS_UxAS_App_AutomationRequestPortId(SF_LAST));
  Type_assign(&_hamr_SW_Impl_Instance_UXAS_UxAS_App_AutomationRequestPortIdOpt, (&t_1), sizeof(struct Some_488F47));
  _hamr_SW_Impl_Instance_UXAS_UxAS_App_AirVehicleStatePortId = art_Port_45E54D_id_(hamr_SW_UxAS_thr_Impl_Bridge_AirVehicleState_(hamr_Arch_SW_Impl_Instance_UXAS_UxAS(SF_LAST)));
  DeclNewSome_488F47(t_2);
  Some_488F47_apply(SF &t_2, hamr_SW_Impl_Instance_UXAS_UxAS_App_AirVehicleStatePortId(SF_LAST));
  Type_assign(&_hamr_SW_Impl_Instance_UXAS_UxAS_App_AirVehicleStatePortIdOpt, (&t_2), sizeof(struct Some_488F47));
  _hamr_SW_Impl_Instance_UXAS_UxAS_App_OperatingRegionPortId = art_Port_45E54D_id_(hamr_SW_UxAS_thr_Impl_Bridge_OperatingRegion_(hamr_Arch_SW_Impl_Instance_UXAS_UxAS(SF_LAST)));
  DeclNewSome_488F47(t_3);
  Some_488F47_apply(SF &t_3, hamr_SW_Impl_Instance_UXAS_UxAS_App_OperatingRegionPortId(SF_LAST));
  Type_assign(&_hamr_SW_Impl_Instance_UXAS_UxAS_App_OperatingRegionPortIdOpt, (&t_3), sizeof(struct Some_488F47));
  _hamr_SW_Impl_Instance_UXAS_UxAS_App_LineSearchTaskPortId = art_Port_45E54D_id_(hamr_SW_UxAS_thr_Impl_Bridge_LineSearchTask_(hamr_Arch_SW_Impl_Instance_UXAS_UxAS(SF_LAST)));
  DeclNewSome_488F47(t_4);
  Some_488F47_apply(SF &t_4, hamr_SW_Impl_Instance_UXAS_UxAS_App_LineSearchTaskPortId(SF_LAST));
  Type_assign(&_hamr_SW_Impl_Instance_UXAS_UxAS_App_LineSearchTaskPortIdOpt, (&t_4), sizeof(struct Some_488F47));
}

art_Bridge_EntryPoints hamr_SW_Impl_Instance_UXAS_UxAS_App_entryPoints(STACK_FRAME_ONLY) {
  hamr_SW_Impl_Instance_UXAS_UxAS_App_init(CALLER_LAST);
  return (art_Bridge_EntryPoints) &_hamr_SW_Impl_Instance_UXAS_UxAS_App_entryPoints;
}

Z hamr_SW_Impl_Instance_UXAS_UxAS_App_appPortId(STACK_FRAME_ONLY) {
  hamr_SW_Impl_Instance_UXAS_UxAS_App_init(CALLER_LAST);
  return _hamr_SW_Impl_Instance_UXAS_UxAS_App_appPortId;
}

Option_882048 hamr_SW_Impl_Instance_UXAS_UxAS_App_appPortIdOpt(STACK_FRAME_ONLY) {
  hamr_SW_Impl_Instance_UXAS_UxAS_App_init(CALLER_LAST);
  return (Option_882048) &_hamr_SW_Impl_Instance_UXAS_UxAS_App_appPortIdOpt;
}

Z hamr_SW_Impl_Instance_UXAS_UxAS_App_AutomationRequestPortId(STACK_FRAME_ONLY) {
  hamr_SW_Impl_Instance_UXAS_UxAS_App_init(CALLER_LAST);
  return _hamr_SW_Impl_Instance_UXAS_UxAS_App_AutomationRequestPortId;
}

Option_882048 hamr_SW_Impl_Instance_UXAS_UxAS_App_AutomationRequestPortIdOpt(STACK_FRAME_ONLY) {
  hamr_SW_Impl_Instance_UXAS_UxAS_App_init(CALLER_LAST);
  return (Option_882048) &_hamr_SW_Impl_Instance_UXAS_UxAS_App_AutomationRequestPortIdOpt;
}

Z hamr_SW_Impl_Instance_UXAS_UxAS_App_AirVehicleStatePortId(STACK_FRAME_ONLY) {
  hamr_SW_Impl_Instance_UXAS_UxAS_App_init(CALLER_LAST);
  return _hamr_SW_Impl_Instance_UXAS_UxAS_App_AirVehicleStatePortId;
}

Option_882048 hamr_SW_Impl_Instance_UXAS_UxAS_App_AirVehicleStatePortIdOpt(STACK_FRAME_ONLY) {
  hamr_SW_Impl_Instance_UXAS_UxAS_App_init(CALLER_LAST);
  return (Option_882048) &_hamr_SW_Impl_Instance_UXAS_UxAS_App_AirVehicleStatePortIdOpt;
}

Z hamr_SW_Impl_Instance_UXAS_UxAS_App_OperatingRegionPortId(STACK_FRAME_ONLY) {
  hamr_SW_Impl_Instance_UXAS_UxAS_App_init(CALLER_LAST);
  return _hamr_SW_Impl_Instance_UXAS_UxAS_App_OperatingRegionPortId;
}

Option_882048 hamr_SW_Impl_Instance_UXAS_UxAS_App_OperatingRegionPortIdOpt(STACK_FRAME_ONLY) {
  hamr_SW_Impl_Instance_UXAS_UxAS_App_init(CALLER_LAST);
  return (Option_882048) &_hamr_SW_Impl_Instance_UXAS_UxAS_App_OperatingRegionPortIdOpt;
}

Z hamr_SW_Impl_Instance_UXAS_UxAS_App_LineSearchTaskPortId(STACK_FRAME_ONLY) {
  hamr_SW_Impl_Instance_UXAS_UxAS_App_init(CALLER_LAST);
  return _hamr_SW_Impl_Instance_UXAS_UxAS_App_LineSearchTaskPortId;
}

Option_882048 hamr_SW_Impl_Instance_UXAS_UxAS_App_LineSearchTaskPortIdOpt(STACK_FRAME_ONLY) {
  hamr_SW_Impl_Instance_UXAS_UxAS_App_init(CALLER_LAST);
  return (Option_882048) &_hamr_SW_Impl_Instance_UXAS_UxAS_App_LineSearchTaskPortIdOpt;
}

Z hamr_SW_Impl_Instance_UXAS_UxAS_App_main(STACK_FRAME IS_948B60 args) {
  DeclNewStackFrame(caller, "SW_Impl_Instance_UXAS_UxAS_App.scala", "hamr.SW_Impl_Instance_UXAS_UxAS_App", "main", 0);

  sfUpdateLoc(69);
  Z seed;
  Z t_0 = IS_948B60_size(SF args);
  if (Z__eq(t_0, Z_C(1))) {

    sfUpdateLoc(70);
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

  sfUpdateLoc(76);
  hamr_SW_Impl_Instance_UXAS_UxAS_App_initialiseArchitecture(SF seed);

  sfUpdateLoc(78);
  DeclNewTuple2_D0E3BB(t_4);
  hamr_PlatformNix_receive(SF (Tuple2_D0E3BB) &t_4, (Option_882048) hamr_SW_Impl_Instance_UXAS_UxAS_App_appPortIdOpt(SF_LAST));
  Tuple2_D0E3BB t_5 = ((Tuple2_D0E3BB) &t_4);

  sfUpdateLoc(80);
  hamr_SW_Impl_Instance_UXAS_UxAS_App_initialise(SF_LAST);

  sfUpdateLoc(82);
  DeclNewTuple2_D0E3BB(t_6);
  hamr_PlatformNix_receive(SF (Tuple2_D0E3BB) &t_6, (Option_882048) hamr_SW_Impl_Instance_UXAS_UxAS_App_appPortIdOpt(SF_LAST));
  Tuple2_D0E3BB t_7 = ((Tuple2_D0E3BB) &t_6);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(84);
  String_cprint(string("SW_Impl_Instance_UXAS_UxAS_App starting ..."), T);
  cprintln(T);
  cflush(T);

  #endif

  sfUpdateLoc(86);
  hamr_ArtNix_timeDispatch(SF_LAST);

  sfUpdateLoc(88);
  B terminated = F;

  sfUpdateLoc(89);
  B t_89_5 = (!terminated);
  while(t_89_5) {

    sfUpdateLoc(90);
    DeclNewOption_02FA6D(_termOpt);
    Option_02FA6D termOpt;
    DeclNewOption_02FA6D(t_8);
    hamr_PlatformNix_receiveAsync(SF (Option_02FA6D) &t_8, (Option_882048) hamr_SW_Impl_Instance_UXAS_UxAS_App_appPortIdOpt(SF_LAST));
    termOpt = (Option_02FA6D) ((Option_02FA6D) &t_8);

    sfUpdateLoc(91);
    B t_9 = Option_02FA6D_isEmpty_(SF termOpt);
    if (t_9) {

      sfUpdateLoc(92);
      hamr_SW_Impl_Instance_UXAS_UxAS_App_compute(SF_LAST);
    } else {

      sfUpdateLoc(94);
      terminated = T;
    }

    sfUpdateLoc(89);
    t_89_5 = (!terminated);
  }

  sfUpdateLoc(97);
  hamr_SW_Impl_Instance_UXAS_UxAS_App_exit(SF_LAST);
  return Z_C(0);
}

Unit hamr_SW_Impl_Instance_UXAS_UxAS_App_atExit(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "SW_Impl_Instance_UXAS_UxAS_App.scala", "hamr.SW_Impl_Instance_UXAS_UxAS_App", "atExit", 0);

  sfUpdateLoc(108);
  hamr_SW_Impl_Instance_UXAS_UxAS_App_exit(SF_LAST);
}

Unit hamr_SW_Impl_Instance_UXAS_UxAS_App_initialiseArchitecture(STACK_FRAME Z seed) {
  DeclNewStackFrame(caller, "SW_Impl_Instance_UXAS_UxAS_App.scala", "hamr.SW_Impl_Instance_UXAS_UxAS_App", "initialiseArchitecture", 0);

  sfUpdateLoc(25);
  hamr_PlatformNix_initialise(SF seed, (Option_882048) hamr_SW_Impl_Instance_UXAS_UxAS_App_appPortIdOpt(SF_LAST));

  sfUpdateLoc(26);
  hamr_PlatformNix_initialise(SF seed, (Option_882048) hamr_SW_Impl_Instance_UXAS_UxAS_App_AutomationRequestPortIdOpt(SF_LAST));

  sfUpdateLoc(27);
  hamr_PlatformNix_initialise(SF seed, (Option_882048) hamr_SW_Impl_Instance_UXAS_UxAS_App_AirVehicleStatePortIdOpt(SF_LAST));

  sfUpdateLoc(28);
  hamr_PlatformNix_initialise(SF seed, (Option_882048) hamr_SW_Impl_Instance_UXAS_UxAS_App_OperatingRegionPortIdOpt(SF_LAST));

  sfUpdateLoc(29);
  hamr_PlatformNix_initialise(SF seed, (Option_882048) hamr_SW_Impl_Instance_UXAS_UxAS_App_LineSearchTaskPortIdOpt(SF_LAST));

  sfUpdateLoc(31);
  art_Art_run(SF (art_ArchitectureDescription) hamr_Arch_ad(SF_LAST));
}

Unit hamr_SW_Impl_Instance_UXAS_UxAS_App_initialise(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "SW_Impl_Instance_UXAS_UxAS_App.scala", "hamr.SW_Impl_Instance_UXAS_UxAS_App", "initialise", 0);

  sfUpdateLoc(35);
  art_Bridge_EntryPoints_initialise_(SF hamr_SW_Impl_Instance_UXAS_UxAS_App_entryPoints(SF_LAST));
}

static inline B hamr_SW_Impl_Instance_UXAS_UxAS_App_compute_extract_40_12_02FA6D(STACK_FRAME_SF Option_02FA6D t_0, hamr_Base_Types_Bits_Payload *_v_40_21) {
  if (!Some_E9D1E5__is(SF t_0)) return F;
  if (!hamr_Base_Types_Bits_Payload__is(SF Tuple2_D0E3BB_2(Some_E9D1E5_value_(Some_E9D1E5__as(SF t_0))))) return F;
  *_v_40_21 = (hamr_Base_Types_Bits_Payload) Tuple2_D0E3BB_2(Some_E9D1E5_value_(Some_E9D1E5__as(SF t_0)));
  return T;
}

static inline B hamr_SW_Impl_Instance_UXAS_UxAS_App_compute_extract_41_12_02FA6D(STACK_FRAME_SF Option_02FA6D t_0, art_DataContent *_v_41_21) {
  if (!Some_E9D1E5__is(SF t_0)) return F;
  *_v_41_21 = (art_DataContent) Tuple2_D0E3BB_2(Some_E9D1E5_value_(Some_E9D1E5__as(SF t_0)));
  return T;
}

static inline B hamr_SW_Impl_Instance_UXAS_UxAS_App_compute_extract_42_12_02FA6D(STACK_FRAME_SF Option_02FA6D t_0) {
  if (!None_93AA2B__is(SF t_0)) return F;
  return T;
}

static inline B hamr_SW_Impl_Instance_UXAS_UxAS_App_compute_extract_45_12_02FA6D(STACK_FRAME_SF Option_02FA6D t_5, hamr_Base_Types_Bits_Payload *_v_45_21) {
  if (!Some_E9D1E5__is(SF t_5)) return F;
  if (!hamr_Base_Types_Bits_Payload__is(SF Tuple2_D0E3BB_2(Some_E9D1E5_value_(Some_E9D1E5__as(SF t_5))))) return F;
  *_v_45_21 = (hamr_Base_Types_Bits_Payload) Tuple2_D0E3BB_2(Some_E9D1E5_value_(Some_E9D1E5__as(SF t_5)));
  return T;
}

static inline B hamr_SW_Impl_Instance_UXAS_UxAS_App_compute_extract_46_12_02FA6D(STACK_FRAME_SF Option_02FA6D t_5, art_DataContent *_v_46_21) {
  if (!Some_E9D1E5__is(SF t_5)) return F;
  *_v_46_21 = (art_DataContent) Tuple2_D0E3BB_2(Some_E9D1E5_value_(Some_E9D1E5__as(SF t_5)));
  return T;
}

static inline B hamr_SW_Impl_Instance_UXAS_UxAS_App_compute_extract_47_12_02FA6D(STACK_FRAME_SF Option_02FA6D t_5) {
  if (!None_93AA2B__is(SF t_5)) return F;
  return T;
}

static inline B hamr_SW_Impl_Instance_UXAS_UxAS_App_compute_extract_50_12_02FA6D(STACK_FRAME_SF Option_02FA6D t_10, hamr_Base_Types_Bits_Payload *_v_50_21) {
  if (!Some_E9D1E5__is(SF t_10)) return F;
  if (!hamr_Base_Types_Bits_Payload__is(SF Tuple2_D0E3BB_2(Some_E9D1E5_value_(Some_E9D1E5__as(SF t_10))))) return F;
  *_v_50_21 = (hamr_Base_Types_Bits_Payload) Tuple2_D0E3BB_2(Some_E9D1E5_value_(Some_E9D1E5__as(SF t_10)));
  return T;
}

static inline B hamr_SW_Impl_Instance_UXAS_UxAS_App_compute_extract_51_12_02FA6D(STACK_FRAME_SF Option_02FA6D t_10, art_DataContent *_v_51_21) {
  if (!Some_E9D1E5__is(SF t_10)) return F;
  *_v_51_21 = (art_DataContent) Tuple2_D0E3BB_2(Some_E9D1E5_value_(Some_E9D1E5__as(SF t_10)));
  return T;
}

static inline B hamr_SW_Impl_Instance_UXAS_UxAS_App_compute_extract_52_12_02FA6D(STACK_FRAME_SF Option_02FA6D t_10) {
  if (!None_93AA2B__is(SF t_10)) return F;
  return T;
}

static inline B hamr_SW_Impl_Instance_UXAS_UxAS_App_compute_extract_55_12_02FA6D(STACK_FRAME_SF Option_02FA6D t_15, hamr_Base_Types_Bits_Payload *_v_55_21) {
  if (!Some_E9D1E5__is(SF t_15)) return F;
  if (!hamr_Base_Types_Bits_Payload__is(SF Tuple2_D0E3BB_2(Some_E9D1E5_value_(Some_E9D1E5__as(SF t_15))))) return F;
  *_v_55_21 = (hamr_Base_Types_Bits_Payload) Tuple2_D0E3BB_2(Some_E9D1E5_value_(Some_E9D1E5__as(SF t_15)));
  return T;
}

static inline B hamr_SW_Impl_Instance_UXAS_UxAS_App_compute_extract_56_12_02FA6D(STACK_FRAME_SF Option_02FA6D t_15, art_DataContent *_v_56_21) {
  if (!Some_E9D1E5__is(SF t_15)) return F;
  *_v_56_21 = (art_DataContent) Tuple2_D0E3BB_2(Some_E9D1E5_value_(Some_E9D1E5__as(SF t_15)));
  return T;
}

static inline B hamr_SW_Impl_Instance_UXAS_UxAS_App_compute_extract_57_12_02FA6D(STACK_FRAME_SF Option_02FA6D t_15) {
  if (!None_93AA2B__is(SF t_15)) return F;
  return T;
}

Unit hamr_SW_Impl_Instance_UXAS_UxAS_App_compute(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "SW_Impl_Instance_UXAS_UxAS_App.scala", "hamr.SW_Impl_Instance_UXAS_UxAS_App", "compute", 0);

  sfUpdateLoc(39);
  DeclNewOption_02FA6D(t_1);
  hamr_PlatformNix_receiveAsync(SF (Option_02FA6D) &t_1, (Option_882048) hamr_SW_Impl_Instance_UXAS_UxAS_App_AutomationRequestPortIdOpt(SF_LAST));
  Option_02FA6D t_0 = ((Option_02FA6D) &t_1);
  B match_39_14 = F;
  if (!match_39_14) {
    hamr_Base_Types_Bits_Payload v_40_21;
    match_39_14 = hamr_SW_Impl_Instance_UXAS_UxAS_App_compute_extract_40_12_02FA6D(SF t_0, &v_40_21);
    if (match_39_14) {

      sfUpdateLoc(40);
      hamr_ArtNix_updateData(SF hamr_SW_Impl_Instance_UXAS_UxAS_App_AutomationRequestPortId(SF_LAST), (art_DataContent) v_40_21);
    }
  }
  if (!match_39_14) {
    art_DataContent v_41_21;
    match_39_14 = hamr_SW_Impl_Instance_UXAS_UxAS_App_compute_extract_41_12_02FA6D(SF t_0, &v_41_21);
    if (match_39_14) {

      sfUpdateLoc(41);
      DeclNewString(t_2);
      String t_3 = (String) &t_2;
      DeclNewString(t_4);
      String_string_(SF (String) &t_4, string("Unexpected payload on port AutomationRequest.  Expecting something of type Base_Types.Bits_Payload but received "));
      art_DataContent_string_(SF (String) &t_4, v_41_21);
      String_string_(SF (String) &t_4, string(""));
      String_string_(SF t_3, ((String) &t_4));
      sfAbort(t_3->value);
      abort();
    }
  }
  if (!match_39_14) {
    match_39_14 = hamr_SW_Impl_Instance_UXAS_UxAS_App_compute_extract_42_12_02FA6D(SF t_0);
    if (match_39_14) {
    }
  }
  sfAssert(match_39_14, "Error when pattern matching.");

  sfUpdateLoc(44);
  DeclNewOption_02FA6D(t_6);
  hamr_PlatformNix_receiveAsync(SF (Option_02FA6D) &t_6, (Option_882048) hamr_SW_Impl_Instance_UXAS_UxAS_App_AirVehicleStatePortIdOpt(SF_LAST));
  Option_02FA6D t_5 = ((Option_02FA6D) &t_6);
  B match_44_14 = F;
  if (!match_44_14) {
    hamr_Base_Types_Bits_Payload v_45_21;
    match_44_14 = hamr_SW_Impl_Instance_UXAS_UxAS_App_compute_extract_45_12_02FA6D(SF t_5, &v_45_21);
    if (match_44_14) {

      sfUpdateLoc(45);
      hamr_ArtNix_updateData(SF hamr_SW_Impl_Instance_UXAS_UxAS_App_AirVehicleStatePortId(SF_LAST), (art_DataContent) v_45_21);
    }
  }
  if (!match_44_14) {
    art_DataContent v_46_21;
    match_44_14 = hamr_SW_Impl_Instance_UXAS_UxAS_App_compute_extract_46_12_02FA6D(SF t_5, &v_46_21);
    if (match_44_14) {

      sfUpdateLoc(46);
      DeclNewString(t_7);
      String t_8 = (String) &t_7;
      DeclNewString(t_9);
      String_string_(SF (String) &t_9, string("Unexpected payload on port AirVehicleState.  Expecting something of type Base_Types.Bits_Payload but received "));
      art_DataContent_string_(SF (String) &t_9, v_46_21);
      String_string_(SF (String) &t_9, string(""));
      String_string_(SF t_8, ((String) &t_9));
      sfAbort(t_8->value);
      abort();
    }
  }
  if (!match_44_14) {
    match_44_14 = hamr_SW_Impl_Instance_UXAS_UxAS_App_compute_extract_47_12_02FA6D(SF t_5);
    if (match_44_14) {
    }
  }
  sfAssert(match_44_14, "Error when pattern matching.");

  sfUpdateLoc(49);
  DeclNewOption_02FA6D(t_11);
  hamr_PlatformNix_receiveAsync(SF (Option_02FA6D) &t_11, (Option_882048) hamr_SW_Impl_Instance_UXAS_UxAS_App_OperatingRegionPortIdOpt(SF_LAST));
  Option_02FA6D t_10 = ((Option_02FA6D) &t_11);
  B match_49_14 = F;
  if (!match_49_14) {
    hamr_Base_Types_Bits_Payload v_50_21;
    match_49_14 = hamr_SW_Impl_Instance_UXAS_UxAS_App_compute_extract_50_12_02FA6D(SF t_10, &v_50_21);
    if (match_49_14) {

      sfUpdateLoc(50);
      hamr_ArtNix_updateData(SF hamr_SW_Impl_Instance_UXAS_UxAS_App_OperatingRegionPortId(SF_LAST), (art_DataContent) v_50_21);
    }
  }
  if (!match_49_14) {
    art_DataContent v_51_21;
    match_49_14 = hamr_SW_Impl_Instance_UXAS_UxAS_App_compute_extract_51_12_02FA6D(SF t_10, &v_51_21);
    if (match_49_14) {

      sfUpdateLoc(51);
      DeclNewString(t_12);
      String t_13 = (String) &t_12;
      DeclNewString(t_14);
      String_string_(SF (String) &t_14, string("Unexpected payload on port OperatingRegion.  Expecting something of type Base_Types.Bits_Payload but received "));
      art_DataContent_string_(SF (String) &t_14, v_51_21);
      String_string_(SF (String) &t_14, string(""));
      String_string_(SF t_13, ((String) &t_14));
      sfAbort(t_13->value);
      abort();
    }
  }
  if (!match_49_14) {
    match_49_14 = hamr_SW_Impl_Instance_UXAS_UxAS_App_compute_extract_52_12_02FA6D(SF t_10);
    if (match_49_14) {
    }
  }
  sfAssert(match_49_14, "Error when pattern matching.");

  sfUpdateLoc(54);
  DeclNewOption_02FA6D(t_16);
  hamr_PlatformNix_receiveAsync(SF (Option_02FA6D) &t_16, (Option_882048) hamr_SW_Impl_Instance_UXAS_UxAS_App_LineSearchTaskPortIdOpt(SF_LAST));
  Option_02FA6D t_15 = ((Option_02FA6D) &t_16);
  B match_54_14 = F;
  if (!match_54_14) {
    hamr_Base_Types_Bits_Payload v_55_21;
    match_54_14 = hamr_SW_Impl_Instance_UXAS_UxAS_App_compute_extract_55_12_02FA6D(SF t_15, &v_55_21);
    if (match_54_14) {

      sfUpdateLoc(55);
      hamr_ArtNix_updateData(SF hamr_SW_Impl_Instance_UXAS_UxAS_App_LineSearchTaskPortId(SF_LAST), (art_DataContent) v_55_21);
    }
  }
  if (!match_54_14) {
    art_DataContent v_56_21;
    match_54_14 = hamr_SW_Impl_Instance_UXAS_UxAS_App_compute_extract_56_12_02FA6D(SF t_15, &v_56_21);
    if (match_54_14) {

      sfUpdateLoc(56);
      DeclNewString(t_17);
      String t_18 = (String) &t_17;
      DeclNewString(t_19);
      String_string_(SF (String) &t_19, string("Unexpected payload on port LineSearchTask.  Expecting something of type Base_Types.Bits_Payload but received "));
      art_DataContent_string_(SF (String) &t_19, v_56_21);
      String_string_(SF (String) &t_19, string(""));
      String_string_(SF t_18, ((String) &t_19));
      sfAbort(t_18->value);
      abort();
    }
  }
  if (!match_54_14) {
    match_54_14 = hamr_SW_Impl_Instance_UXAS_UxAS_App_compute_extract_57_12_02FA6D(SF t_15);
    if (match_54_14) {
    }
  }
  sfAssert(match_54_14, "Error when pattern matching.");

  sfUpdateLoc(59);
  art_Bridge_EntryPoints_compute_(SF hamr_SW_Impl_Instance_UXAS_UxAS_App_entryPoints(SF_LAST));

  sfUpdateLoc(60);
  hamr_Process_sleep(SF Z_C(500));
}

Unit hamr_SW_Impl_Instance_UXAS_UxAS_App_exit(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "SW_Impl_Instance_UXAS_UxAS_App.scala", "hamr.SW_Impl_Instance_UXAS_UxAS_App", "exit", 0);

  sfUpdateLoc(103);
  hamr_SW_Impl_Instance_UXAS_UxAS_App_finalise(SF_LAST);

  sfUpdateLoc(104);
  hamr_PlatformNix_finalise(SF_LAST);
}

Unit hamr_SW_Impl_Instance_UXAS_UxAS_App_finalise(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "SW_Impl_Instance_UXAS_UxAS_App.scala", "hamr.SW_Impl_Instance_UXAS_UxAS_App", "finalise", 0);

  sfUpdateLoc(64);
  art_Bridge_EntryPoints_finalise_(SF hamr_SW_Impl_Instance_UXAS_UxAS_App_entryPoints(SF_LAST));
}