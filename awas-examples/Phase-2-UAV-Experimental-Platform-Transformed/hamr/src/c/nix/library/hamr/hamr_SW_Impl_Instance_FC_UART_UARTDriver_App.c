#include <all.h>

B hamr_SW_Impl_Instance_FC_UART_UARTDriver_App_initialized_ = F;

union art_Bridge_EntryPoints _hamr_SW_Impl_Instance_FC_UART_UARTDriver_App_entryPoints;
Z _hamr_SW_Impl_Instance_FC_UART_UARTDriver_App_appPortId;
union Option_882048 _hamr_SW_Impl_Instance_FC_UART_UARTDriver_App_appPortIdOpt;
Z _hamr_SW_Impl_Instance_FC_UART_UARTDriver_App_recv_dataPortId;
union Option_882048 _hamr_SW_Impl_Instance_FC_UART_UARTDriver_App_recv_dataPortIdOpt;
Z _hamr_SW_Impl_Instance_FC_UART_UARTDriver_App_MissionCommandPortId;
union Option_882048 _hamr_SW_Impl_Instance_FC_UART_UARTDriver_App_MissionCommandPortIdOpt;

void hamr_SW_Impl_Instance_FC_UART_UARTDriver_App_init(STACK_FRAME_ONLY) {
  if (hamr_SW_Impl_Instance_FC_UART_UARTDriver_App_initialized_) return;
  hamr_SW_Impl_Instance_FC_UART_UARTDriver_App_initialized_ = T;
  DeclNewStackFrame(caller, "SW_Impl_Instance_FC_UART_UARTDriver_App.scala", "hamr.SW_Impl_Instance_FC_UART_UARTDriver_App", "<init>", 0);
  Type_assign(&_hamr_SW_Impl_Instance_FC_UART_UARTDriver_App_entryPoints, hamr_Drivers_UARTDriver_Impl_Bridge_entryPoints_(hamr_Arch_SW_Impl_Instance_FC_UART_UARTDriver(SF_LAST)), sizeof(union art_Bridge_EntryPoints));
  _hamr_SW_Impl_Instance_FC_UART_UARTDriver_App_appPortId = hamr_IPCPorts_SW_Impl_Instance_FC_UART_UARTDriver_App(SF_LAST);
  DeclNewSome_488F47(t_0);
  Some_488F47_apply(SF &t_0, hamr_SW_Impl_Instance_FC_UART_UARTDriver_App_appPortId(SF_LAST));
  Type_assign(&_hamr_SW_Impl_Instance_FC_UART_UARTDriver_App_appPortIdOpt, (&t_0), sizeof(struct Some_488F47));
  _hamr_SW_Impl_Instance_FC_UART_UARTDriver_App_recv_dataPortId = art_Port_45E54D_id_(hamr_Drivers_UARTDriver_Impl_Bridge_recv_data_(hamr_Arch_SW_Impl_Instance_FC_UART_UARTDriver(SF_LAST)));
  DeclNewSome_488F47(t_1);
  Some_488F47_apply(SF &t_1, hamr_SW_Impl_Instance_FC_UART_UARTDriver_App_recv_dataPortId(SF_LAST));
  Type_assign(&_hamr_SW_Impl_Instance_FC_UART_UARTDriver_App_recv_dataPortIdOpt, (&t_1), sizeof(struct Some_488F47));
  _hamr_SW_Impl_Instance_FC_UART_UARTDriver_App_MissionCommandPortId = art_Port_45E54D_id_(hamr_Drivers_UARTDriver_Impl_Bridge_MissionCommand_(hamr_Arch_SW_Impl_Instance_FC_UART_UARTDriver(SF_LAST)));
  DeclNewSome_488F47(t_2);
  Some_488F47_apply(SF &t_2, hamr_SW_Impl_Instance_FC_UART_UARTDriver_App_MissionCommandPortId(SF_LAST));
  Type_assign(&_hamr_SW_Impl_Instance_FC_UART_UARTDriver_App_MissionCommandPortIdOpt, (&t_2), sizeof(struct Some_488F47));
}

art_Bridge_EntryPoints hamr_SW_Impl_Instance_FC_UART_UARTDriver_App_entryPoints(STACK_FRAME_ONLY) {
  hamr_SW_Impl_Instance_FC_UART_UARTDriver_App_init(CALLER_LAST);
  return (art_Bridge_EntryPoints) &_hamr_SW_Impl_Instance_FC_UART_UARTDriver_App_entryPoints;
}

Z hamr_SW_Impl_Instance_FC_UART_UARTDriver_App_appPortId(STACK_FRAME_ONLY) {
  hamr_SW_Impl_Instance_FC_UART_UARTDriver_App_init(CALLER_LAST);
  return _hamr_SW_Impl_Instance_FC_UART_UARTDriver_App_appPortId;
}

Option_882048 hamr_SW_Impl_Instance_FC_UART_UARTDriver_App_appPortIdOpt(STACK_FRAME_ONLY) {
  hamr_SW_Impl_Instance_FC_UART_UARTDriver_App_init(CALLER_LAST);
  return (Option_882048) &_hamr_SW_Impl_Instance_FC_UART_UARTDriver_App_appPortIdOpt;
}

Z hamr_SW_Impl_Instance_FC_UART_UARTDriver_App_recv_dataPortId(STACK_FRAME_ONLY) {
  hamr_SW_Impl_Instance_FC_UART_UARTDriver_App_init(CALLER_LAST);
  return _hamr_SW_Impl_Instance_FC_UART_UARTDriver_App_recv_dataPortId;
}

Option_882048 hamr_SW_Impl_Instance_FC_UART_UARTDriver_App_recv_dataPortIdOpt(STACK_FRAME_ONLY) {
  hamr_SW_Impl_Instance_FC_UART_UARTDriver_App_init(CALLER_LAST);
  return (Option_882048) &_hamr_SW_Impl_Instance_FC_UART_UARTDriver_App_recv_dataPortIdOpt;
}

Z hamr_SW_Impl_Instance_FC_UART_UARTDriver_App_MissionCommandPortId(STACK_FRAME_ONLY) {
  hamr_SW_Impl_Instance_FC_UART_UARTDriver_App_init(CALLER_LAST);
  return _hamr_SW_Impl_Instance_FC_UART_UARTDriver_App_MissionCommandPortId;
}

Option_882048 hamr_SW_Impl_Instance_FC_UART_UARTDriver_App_MissionCommandPortIdOpt(STACK_FRAME_ONLY) {
  hamr_SW_Impl_Instance_FC_UART_UARTDriver_App_init(CALLER_LAST);
  return (Option_882048) &_hamr_SW_Impl_Instance_FC_UART_UARTDriver_App_MissionCommandPortIdOpt;
}

Z hamr_SW_Impl_Instance_FC_UART_UARTDriver_App_main(STACK_FRAME IS_948B60 args) {
  DeclNewStackFrame(caller, "SW_Impl_Instance_FC_UART_UARTDriver_App.scala", "hamr.SW_Impl_Instance_FC_UART_UARTDriver_App", "main", 0);

  sfUpdateLoc(53);
  Z seed;
  Z t_0 = IS_948B60_size(SF args);
  if (Z__eq(t_0, Z_C(1))) {

    sfUpdateLoc(54);
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

  sfUpdateLoc(60);
  hamr_SW_Impl_Instance_FC_UART_UARTDriver_App_initialiseArchitecture(SF seed);

  sfUpdateLoc(62);
  DeclNewTuple2_D0E3BB(t_4);
  hamr_PlatformNix_receive(SF (Tuple2_D0E3BB) &t_4, (Option_882048) hamr_SW_Impl_Instance_FC_UART_UARTDriver_App_appPortIdOpt(SF_LAST));
  Tuple2_D0E3BB t_5 = ((Tuple2_D0E3BB) &t_4);

  sfUpdateLoc(64);
  hamr_SW_Impl_Instance_FC_UART_UARTDriver_App_initialise(SF_LAST);

  sfUpdateLoc(66);
  DeclNewTuple2_D0E3BB(t_6);
  hamr_PlatformNix_receive(SF (Tuple2_D0E3BB) &t_6, (Option_882048) hamr_SW_Impl_Instance_FC_UART_UARTDriver_App_appPortIdOpt(SF_LAST));
  Tuple2_D0E3BB t_7 = ((Tuple2_D0E3BB) &t_6);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(68);
  String_cprint(string("SW_Impl_Instance_FC_UART_UARTDriver_App starting ..."), T);
  cprintln(T);
  cflush(T);

  #endif

  sfUpdateLoc(70);
  hamr_ArtNix_timeDispatch(SF_LAST);

  sfUpdateLoc(72);
  B terminated = F;

  sfUpdateLoc(73);
  B t_73_5 = (!terminated);
  while(t_73_5) {

    sfUpdateLoc(74);
    DeclNewOption_02FA6D(_termOpt);
    Option_02FA6D termOpt;
    DeclNewOption_02FA6D(t_8);
    hamr_PlatformNix_receiveAsync(SF (Option_02FA6D) &t_8, (Option_882048) hamr_SW_Impl_Instance_FC_UART_UARTDriver_App_appPortIdOpt(SF_LAST));
    termOpt = (Option_02FA6D) ((Option_02FA6D) &t_8);

    sfUpdateLoc(75);
    B t_9 = Option_02FA6D_isEmpty_(SF termOpt);
    if (t_9) {

      sfUpdateLoc(76);
      hamr_SW_Impl_Instance_FC_UART_UARTDriver_App_compute(SF_LAST);
    } else {

      sfUpdateLoc(78);
      terminated = T;
    }

    sfUpdateLoc(73);
    t_73_5 = (!terminated);
  }

  sfUpdateLoc(81);
  hamr_SW_Impl_Instance_FC_UART_UARTDriver_App_exit(SF_LAST);
  return Z_C(0);
}

Unit hamr_SW_Impl_Instance_FC_UART_UARTDriver_App_atExit(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "SW_Impl_Instance_FC_UART_UARTDriver_App.scala", "hamr.SW_Impl_Instance_FC_UART_UARTDriver_App", "atExit", 0);

  sfUpdateLoc(92);
  hamr_SW_Impl_Instance_FC_UART_UARTDriver_App_exit(SF_LAST);
}

Unit hamr_SW_Impl_Instance_FC_UART_UARTDriver_App_initialiseArchitecture(STACK_FRAME Z seed) {
  DeclNewStackFrame(caller, "SW_Impl_Instance_FC_UART_UARTDriver_App.scala", "hamr.SW_Impl_Instance_FC_UART_UARTDriver_App", "initialiseArchitecture", 0);

  sfUpdateLoc(21);
  hamr_PlatformNix_initialise(SF seed, (Option_882048) hamr_SW_Impl_Instance_FC_UART_UARTDriver_App_appPortIdOpt(SF_LAST));

  sfUpdateLoc(22);
  hamr_PlatformNix_initialise(SF seed, (Option_882048) hamr_SW_Impl_Instance_FC_UART_UARTDriver_App_recv_dataPortIdOpt(SF_LAST));

  sfUpdateLoc(23);
  hamr_PlatformNix_initialise(SF seed, (Option_882048) hamr_SW_Impl_Instance_FC_UART_UARTDriver_App_MissionCommandPortIdOpt(SF_LAST));

  sfUpdateLoc(25);
  art_Art_run(SF (art_ArchitectureDescription) hamr_Arch_ad(SF_LAST));
}

Unit hamr_SW_Impl_Instance_FC_UART_UARTDriver_App_initialise(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "SW_Impl_Instance_FC_UART_UARTDriver_App.scala", "hamr.SW_Impl_Instance_FC_UART_UARTDriver_App", "initialise", 0);

  sfUpdateLoc(29);
  art_Bridge_EntryPoints_initialise_(SF hamr_SW_Impl_Instance_FC_UART_UARTDriver_App_entryPoints(SF_LAST));
}

static inline B hamr_SW_Impl_Instance_FC_UART_UARTDriver_App_compute_extract_34_12_02FA6D(STACK_FRAME_SF Option_02FA6D t_0, hamr_Base_Types_Bits_Payload *_v_34_21) {
  if (!Some_E9D1E5__is(SF t_0)) return F;
  if (!hamr_Base_Types_Bits_Payload__is(SF Tuple2_D0E3BB_2(Some_E9D1E5_value_(Some_E9D1E5__as(SF t_0))))) return F;
  *_v_34_21 = (hamr_Base_Types_Bits_Payload) Tuple2_D0E3BB_2(Some_E9D1E5_value_(Some_E9D1E5__as(SF t_0)));
  return T;
}

static inline B hamr_SW_Impl_Instance_FC_UART_UARTDriver_App_compute_extract_35_12_02FA6D(STACK_FRAME_SF Option_02FA6D t_0, art_DataContent *_v_35_21) {
  if (!Some_E9D1E5__is(SF t_0)) return F;
  *_v_35_21 = (art_DataContent) Tuple2_D0E3BB_2(Some_E9D1E5_value_(Some_E9D1E5__as(SF t_0)));
  return T;
}

static inline B hamr_SW_Impl_Instance_FC_UART_UARTDriver_App_compute_extract_36_12_02FA6D(STACK_FRAME_SF Option_02FA6D t_0) {
  if (!None_93AA2B__is(SF t_0)) return F;
  return T;
}

static inline B hamr_SW_Impl_Instance_FC_UART_UARTDriver_App_compute_extract_39_12_02FA6D(STACK_FRAME_SF Option_02FA6D t_5, hamr_Base_Types_Bits_Payload *_v_39_21) {
  if (!Some_E9D1E5__is(SF t_5)) return F;
  if (!hamr_Base_Types_Bits_Payload__is(SF Tuple2_D0E3BB_2(Some_E9D1E5_value_(Some_E9D1E5__as(SF t_5))))) return F;
  *_v_39_21 = (hamr_Base_Types_Bits_Payload) Tuple2_D0E3BB_2(Some_E9D1E5_value_(Some_E9D1E5__as(SF t_5)));
  return T;
}

static inline B hamr_SW_Impl_Instance_FC_UART_UARTDriver_App_compute_extract_40_12_02FA6D(STACK_FRAME_SF Option_02FA6D t_5, art_DataContent *_v_40_21) {
  if (!Some_E9D1E5__is(SF t_5)) return F;
  *_v_40_21 = (art_DataContent) Tuple2_D0E3BB_2(Some_E9D1E5_value_(Some_E9D1E5__as(SF t_5)));
  return T;
}

static inline B hamr_SW_Impl_Instance_FC_UART_UARTDriver_App_compute_extract_41_12_02FA6D(STACK_FRAME_SF Option_02FA6D t_5) {
  if (!None_93AA2B__is(SF t_5)) return F;
  return T;
}

Unit hamr_SW_Impl_Instance_FC_UART_UARTDriver_App_compute(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "SW_Impl_Instance_FC_UART_UARTDriver_App.scala", "hamr.SW_Impl_Instance_FC_UART_UARTDriver_App", "compute", 0);

  sfUpdateLoc(33);
  DeclNewOption_02FA6D(t_1);
  hamr_PlatformNix_receiveAsync(SF (Option_02FA6D) &t_1, (Option_882048) hamr_SW_Impl_Instance_FC_UART_UARTDriver_App_recv_dataPortIdOpt(SF_LAST));
  Option_02FA6D t_0 = ((Option_02FA6D) &t_1);
  B match_33_14 = F;
  if (!match_33_14) {
    hamr_Base_Types_Bits_Payload v_34_21;
    match_33_14 = hamr_SW_Impl_Instance_FC_UART_UARTDriver_App_compute_extract_34_12_02FA6D(SF t_0, &v_34_21);
    if (match_33_14) {

      sfUpdateLoc(34);
      hamr_ArtNix_updateData(SF hamr_SW_Impl_Instance_FC_UART_UARTDriver_App_recv_dataPortId(SF_LAST), (art_DataContent) v_34_21);
    }
  }
  if (!match_33_14) {
    art_DataContent v_35_21;
    match_33_14 = hamr_SW_Impl_Instance_FC_UART_UARTDriver_App_compute_extract_35_12_02FA6D(SF t_0, &v_35_21);
    if (match_33_14) {

      sfUpdateLoc(35);
      DeclNewString(t_2);
      String t_3 = (String) &t_2;
      DeclNewString(t_4);
      String_string_(SF (String) &t_4, string("Unexpected payload on port recv_data.  Expecting something of type Base_Types.Bits_Payload but received "));
      art_DataContent_string_(SF (String) &t_4, v_35_21);
      String_string_(SF (String) &t_4, string(""));
      String_string_(SF t_3, ((String) &t_4));
      sfAbort(t_3->value);
      abort();
    }
  }
  if (!match_33_14) {
    match_33_14 = hamr_SW_Impl_Instance_FC_UART_UARTDriver_App_compute_extract_36_12_02FA6D(SF t_0);
    if (match_33_14) {
    }
  }
  sfAssert(match_33_14, "Error when pattern matching.");

  sfUpdateLoc(38);
  DeclNewOption_02FA6D(t_6);
  hamr_PlatformNix_receiveAsync(SF (Option_02FA6D) &t_6, (Option_882048) hamr_SW_Impl_Instance_FC_UART_UARTDriver_App_MissionCommandPortIdOpt(SF_LAST));
  Option_02FA6D t_5 = ((Option_02FA6D) &t_6);
  B match_38_14 = F;
  if (!match_38_14) {
    hamr_Base_Types_Bits_Payload v_39_21;
    match_38_14 = hamr_SW_Impl_Instance_FC_UART_UARTDriver_App_compute_extract_39_12_02FA6D(SF t_5, &v_39_21);
    if (match_38_14) {

      sfUpdateLoc(39);
      hamr_ArtNix_updateData(SF hamr_SW_Impl_Instance_FC_UART_UARTDriver_App_MissionCommandPortId(SF_LAST), (art_DataContent) v_39_21);
    }
  }
  if (!match_38_14) {
    art_DataContent v_40_21;
    match_38_14 = hamr_SW_Impl_Instance_FC_UART_UARTDriver_App_compute_extract_40_12_02FA6D(SF t_5, &v_40_21);
    if (match_38_14) {

      sfUpdateLoc(40);
      DeclNewString(t_7);
      String t_8 = (String) &t_7;
      DeclNewString(t_9);
      String_string_(SF (String) &t_9, string("Unexpected payload on port MissionCommand.  Expecting something of type Base_Types.Bits_Payload but received "));
      art_DataContent_string_(SF (String) &t_9, v_40_21);
      String_string_(SF (String) &t_9, string(""));
      String_string_(SF t_8, ((String) &t_9));
      sfAbort(t_8->value);
      abort();
    }
  }
  if (!match_38_14) {
    match_38_14 = hamr_SW_Impl_Instance_FC_UART_UARTDriver_App_compute_extract_41_12_02FA6D(SF t_5);
    if (match_38_14) {
    }
  }
  sfAssert(match_38_14, "Error when pattern matching.");

  sfUpdateLoc(43);
  art_Bridge_EntryPoints_compute_(SF hamr_SW_Impl_Instance_FC_UART_UARTDriver_App_entryPoints(SF_LAST));

  sfUpdateLoc(44);
  hamr_Process_sleep(SF Z_C(500));
}

Unit hamr_SW_Impl_Instance_FC_UART_UARTDriver_App_exit(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "SW_Impl_Instance_FC_UART_UARTDriver_App.scala", "hamr.SW_Impl_Instance_FC_UART_UARTDriver_App", "exit", 0);

  sfUpdateLoc(87);
  hamr_SW_Impl_Instance_FC_UART_UARTDriver_App_finalise(SF_LAST);

  sfUpdateLoc(88);
  hamr_PlatformNix_finalise(SF_LAST);
}

Unit hamr_SW_Impl_Instance_FC_UART_UARTDriver_App_finalise(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "SW_Impl_Instance_FC_UART_UARTDriver_App.scala", "hamr.SW_Impl_Instance_FC_UART_UARTDriver_App", "finalise", 0);

  sfUpdateLoc(48);
  art_Bridge_EntryPoints_finalise_(SF hamr_SW_Impl_Instance_FC_UART_UARTDriver_App_entryPoints(SF_LAST));
}