#include <all.h>

B hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_App_initialized_ = F;

union art_Bridge_EntryPoints _hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_App_entryPoints;
Z _hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_App_appPortId;
union Option_882048 _hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_App_appPortIdOpt;
Z _hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_App_filter_inPortId;
union Option_882048 _hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_App_filter_inPortIdOpt;

void hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_App_init(STACK_FRAME_ONLY) {
  if (hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_App_initialized_) return;
  hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_App_initialized_ = T;
  DeclNewStackFrame(caller, "SW_Impl_Instance_FLT_LST_CASE_Filter_LST_App.scala", "hamr.SW_Impl_Instance_FLT_LST_CASE_Filter_LST_App", "<init>", 0);
  Type_assign(&_hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_App_entryPoints, hamr_SW_CASE_Filter_LST_thr_Impl_Bridge_entryPoints_(hamr_Arch_SW_Impl_Instance_FLT_LST_CASE_Filter_LST(SF_LAST)), sizeof(union art_Bridge_EntryPoints));
  _hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_App_appPortId = hamr_IPCPorts_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_App(SF_LAST);
  DeclNewSome_488F47(t_0);
  Some_488F47_apply(SF &t_0, hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_App_appPortId(SF_LAST));
  Type_assign(&_hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_App_appPortIdOpt, (&t_0), sizeof(struct Some_488F47));
  _hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_App_filter_inPortId = art_Port_45E54D_id_(hamr_SW_CASE_Filter_LST_thr_Impl_Bridge_filter_in_(hamr_Arch_SW_Impl_Instance_FLT_LST_CASE_Filter_LST(SF_LAST)));
  DeclNewSome_488F47(t_1);
  Some_488F47_apply(SF &t_1, hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_App_filter_inPortId(SF_LAST));
  Type_assign(&_hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_App_filter_inPortIdOpt, (&t_1), sizeof(struct Some_488F47));
}

art_Bridge_EntryPoints hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_App_entryPoints(STACK_FRAME_ONLY) {
  hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_App_init(CALLER_LAST);
  return (art_Bridge_EntryPoints) &_hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_App_entryPoints;
}

Z hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_App_appPortId(STACK_FRAME_ONLY) {
  hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_App_init(CALLER_LAST);
  return _hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_App_appPortId;
}

Option_882048 hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_App_appPortIdOpt(STACK_FRAME_ONLY) {
  hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_App_init(CALLER_LAST);
  return (Option_882048) &_hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_App_appPortIdOpt;
}

Z hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_App_filter_inPortId(STACK_FRAME_ONLY) {
  hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_App_init(CALLER_LAST);
  return _hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_App_filter_inPortId;
}

Option_882048 hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_App_filter_inPortIdOpt(STACK_FRAME_ONLY) {
  hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_App_init(CALLER_LAST);
  return (Option_882048) &_hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_App_filter_inPortIdOpt;
}

Z hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_App_main(STACK_FRAME IS_948B60 args) {
  DeclNewStackFrame(caller, "SW_Impl_Instance_FLT_LST_CASE_Filter_LST_App.scala", "hamr.SW_Impl_Instance_FLT_LST_CASE_Filter_LST_App", "main", 0);

  sfUpdateLoc(45);
  Z seed;
  Z t_0 = IS_948B60_size(SF args);
  if (Z__eq(t_0, Z_C(1))) {

    sfUpdateLoc(46);
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

  sfUpdateLoc(52);
  hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_App_initialiseArchitecture(SF seed);

  sfUpdateLoc(54);
  DeclNewTuple2_D0E3BB(t_4);
  hamr_PlatformNix_receive(SF (Tuple2_D0E3BB) &t_4, (Option_882048) hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_App_appPortIdOpt(SF_LAST));
  Tuple2_D0E3BB t_5 = ((Tuple2_D0E3BB) &t_4);

  sfUpdateLoc(56);
  hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_App_initialise(SF_LAST);

  sfUpdateLoc(58);
  DeclNewTuple2_D0E3BB(t_6);
  hamr_PlatformNix_receive(SF (Tuple2_D0E3BB) &t_6, (Option_882048) hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_App_appPortIdOpt(SF_LAST));
  Tuple2_D0E3BB t_7 = ((Tuple2_D0E3BB) &t_6);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(60);
  String_cprint(string("SW_Impl_Instance_FLT_LST_CASE_Filter_LST_App starting ..."), T);
  cprintln(T);
  cflush(T);

  #endif

  sfUpdateLoc(62);
  hamr_ArtNix_timeDispatch(SF_LAST);

  sfUpdateLoc(64);
  B terminated = F;

  sfUpdateLoc(65);
  B t_65_5 = (!terminated);
  while(t_65_5) {

    sfUpdateLoc(66);
    DeclNewOption_02FA6D(_termOpt);
    Option_02FA6D termOpt;
    DeclNewOption_02FA6D(t_8);
    hamr_PlatformNix_receiveAsync(SF (Option_02FA6D) &t_8, (Option_882048) hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_App_appPortIdOpt(SF_LAST));
    termOpt = (Option_02FA6D) ((Option_02FA6D) &t_8);

    sfUpdateLoc(67);
    B t_9 = Option_02FA6D_isEmpty_(SF termOpt);
    if (t_9) {

      sfUpdateLoc(68);
      hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_App_compute(SF_LAST);
    } else {

      sfUpdateLoc(70);
      terminated = T;
    }

    sfUpdateLoc(65);
    t_65_5 = (!terminated);
  }

  sfUpdateLoc(73);
  hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_App_exit(SF_LAST);
  return Z_C(0);
}

Unit hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_App_atExit(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "SW_Impl_Instance_FLT_LST_CASE_Filter_LST_App.scala", "hamr.SW_Impl_Instance_FLT_LST_CASE_Filter_LST_App", "atExit", 0);

  sfUpdateLoc(84);
  hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_App_exit(SF_LAST);
}

Unit hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_App_initialiseArchitecture(STACK_FRAME Z seed) {
  DeclNewStackFrame(caller, "SW_Impl_Instance_FLT_LST_CASE_Filter_LST_App.scala", "hamr.SW_Impl_Instance_FLT_LST_CASE_Filter_LST_App", "initialiseArchitecture", 0);

  sfUpdateLoc(19);
  hamr_PlatformNix_initialise(SF seed, (Option_882048) hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_App_appPortIdOpt(SF_LAST));

  sfUpdateLoc(20);
  hamr_PlatformNix_initialise(SF seed, (Option_882048) hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_App_filter_inPortIdOpt(SF_LAST));

  sfUpdateLoc(22);
  art_Art_run(SF (art_ArchitectureDescription) hamr_Arch_ad(SF_LAST));
}

Unit hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_App_initialise(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "SW_Impl_Instance_FLT_LST_CASE_Filter_LST_App.scala", "hamr.SW_Impl_Instance_FLT_LST_CASE_Filter_LST_App", "initialise", 0);

  sfUpdateLoc(26);
  art_Bridge_EntryPoints_initialise_(SF hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_App_entryPoints(SF_LAST));
}

static inline B hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_App_compute_extract_31_12_02FA6D(STACK_FRAME_SF Option_02FA6D t_0, hamr_Base_Types_Bits_Payload *_v_31_21) {
  if (!Some_E9D1E5__is(SF t_0)) return F;
  if (!hamr_Base_Types_Bits_Payload__is(SF Tuple2_D0E3BB_2(Some_E9D1E5_value_(Some_E9D1E5__as(SF t_0))))) return F;
  *_v_31_21 = (hamr_Base_Types_Bits_Payload) Tuple2_D0E3BB_2(Some_E9D1E5_value_(Some_E9D1E5__as(SF t_0)));
  return T;
}

static inline B hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_App_compute_extract_32_12_02FA6D(STACK_FRAME_SF Option_02FA6D t_0, art_DataContent *_v_32_21) {
  if (!Some_E9D1E5__is(SF t_0)) return F;
  *_v_32_21 = (art_DataContent) Tuple2_D0E3BB_2(Some_E9D1E5_value_(Some_E9D1E5__as(SF t_0)));
  return T;
}

static inline B hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_App_compute_extract_33_12_02FA6D(STACK_FRAME_SF Option_02FA6D t_0) {
  if (!None_93AA2B__is(SF t_0)) return F;
  return T;
}

Unit hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_App_compute(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "SW_Impl_Instance_FLT_LST_CASE_Filter_LST_App.scala", "hamr.SW_Impl_Instance_FLT_LST_CASE_Filter_LST_App", "compute", 0);

  sfUpdateLoc(30);
  DeclNewOption_02FA6D(t_1);
  hamr_PlatformNix_receiveAsync(SF (Option_02FA6D) &t_1, (Option_882048) hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_App_filter_inPortIdOpt(SF_LAST));
  Option_02FA6D t_0 = ((Option_02FA6D) &t_1);
  B match_30_14 = F;
  if (!match_30_14) {
    hamr_Base_Types_Bits_Payload v_31_21;
    match_30_14 = hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_App_compute_extract_31_12_02FA6D(SF t_0, &v_31_21);
    if (match_30_14) {

      sfUpdateLoc(31);
      hamr_ArtNix_updateData(SF hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_App_filter_inPortId(SF_LAST), (art_DataContent) v_31_21);
    }
  }
  if (!match_30_14) {
    art_DataContent v_32_21;
    match_30_14 = hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_App_compute_extract_32_12_02FA6D(SF t_0, &v_32_21);
    if (match_30_14) {

      sfUpdateLoc(32);
      DeclNewString(t_2);
      String t_3 = (String) &t_2;
      DeclNewString(t_4);
      String_string_(SF (String) &t_4, string("Unexpected payload on port filter_in.  Expecting something of type Base_Types.Bits_Payload but received "));
      art_DataContent_string_(SF (String) &t_4, v_32_21);
      String_string_(SF (String) &t_4, string(""));
      String_string_(SF t_3, ((String) &t_4));
      sfAbort(t_3->value);
      abort();
    }
  }
  if (!match_30_14) {
    match_30_14 = hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_App_compute_extract_33_12_02FA6D(SF t_0);
    if (match_30_14) {
    }
  }
  sfAssert(match_30_14, "Error when pattern matching.");

  sfUpdateLoc(35);
  art_Bridge_EntryPoints_compute_(SF hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_App_entryPoints(SF_LAST));

  sfUpdateLoc(36);
  hamr_Process_sleep(SF Z_C(500));
}

Unit hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_App_exit(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "SW_Impl_Instance_FLT_LST_CASE_Filter_LST_App.scala", "hamr.SW_Impl_Instance_FLT_LST_CASE_Filter_LST_App", "exit", 0);

  sfUpdateLoc(79);
  hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_App_finalise(SF_LAST);

  sfUpdateLoc(80);
  hamr_PlatformNix_finalise(SF_LAST);
}

Unit hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_App_finalise(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "SW_Impl_Instance_FLT_LST_CASE_Filter_LST_App.scala", "hamr.SW_Impl_Instance_FLT_LST_CASE_Filter_LST_App", "finalise", 0);

  sfUpdateLoc(40);
  art_Bridge_EntryPoints_finalise_(SF hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_App_entryPoints(SF_LAST));
}