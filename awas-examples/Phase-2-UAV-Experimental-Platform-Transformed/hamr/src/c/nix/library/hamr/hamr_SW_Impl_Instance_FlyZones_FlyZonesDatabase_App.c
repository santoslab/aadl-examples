#include <all.h>

B hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_App_initialized_ = F;

union art_Bridge_EntryPoints _hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_App_entryPoints;
Z _hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_App_appPortId;
union Option_882048 _hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_App_appPortIdOpt;

void hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_App_init(STACK_FRAME_ONLY) {
  if (hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_App_initialized_) return;
  hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_App_initialized_ = T;
  DeclNewStackFrame(caller, "SW_Impl_Instance_FlyZones_FlyZonesDatabase_App.scala", "hamr.SW_Impl_Instance_FlyZones_FlyZonesDatabase_App", "<init>", 0);
  Type_assign(&_hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_App_entryPoints, hamr_SW_FlyZonesDatabase_thr_Impl_Bridge_entryPoints_(hamr_Arch_SW_Impl_Instance_FlyZones_FlyZonesDatabase(SF_LAST)), sizeof(union art_Bridge_EntryPoints));
  _hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_App_appPortId = hamr_IPCPorts_SW_Impl_Instance_FlyZones_FlyZonesDatabase_App(SF_LAST);
  DeclNewSome_488F47(t_0);
  Some_488F47_apply(SF &t_0, hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_App_appPortId(SF_LAST));
  Type_assign(&_hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_App_appPortIdOpt, (&t_0), sizeof(struct Some_488F47));
}

art_Bridge_EntryPoints hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_App_entryPoints(STACK_FRAME_ONLY) {
  hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_App_init(CALLER_LAST);
  return (art_Bridge_EntryPoints) &_hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_App_entryPoints;
}

Z hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_App_appPortId(STACK_FRAME_ONLY) {
  hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_App_init(CALLER_LAST);
  return _hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_App_appPortId;
}

Option_882048 hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_App_appPortIdOpt(STACK_FRAME_ONLY) {
  hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_App_init(CALLER_LAST);
  return (Option_882048) &_hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_App_appPortIdOpt;
}

Z hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_App_main(STACK_FRAME IS_948B60 args) {
  DeclNewStackFrame(caller, "SW_Impl_Instance_FlyZones_FlyZonesDatabase_App.scala", "hamr.SW_Impl_Instance_FlyZones_FlyZonesDatabase_App", "main", 0);

  sfUpdateLoc(37);
  Z seed;
  Z t_0 = IS_948B60_size(SF args);
  if (Z__eq(t_0, Z_C(1))) {

    sfUpdateLoc(38);
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

  sfUpdateLoc(44);
  hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_App_initialiseArchitecture(SF seed);

  sfUpdateLoc(46);
  DeclNewTuple2_D0E3BB(t_4);
  hamr_PlatformNix_receive(SF (Tuple2_D0E3BB) &t_4, (Option_882048) hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_App_appPortIdOpt(SF_LAST));
  Tuple2_D0E3BB t_5 = ((Tuple2_D0E3BB) &t_4);

  sfUpdateLoc(48);
  hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_App_initialise(SF_LAST);

  sfUpdateLoc(50);
  DeclNewTuple2_D0E3BB(t_6);
  hamr_PlatformNix_receive(SF (Tuple2_D0E3BB) &t_6, (Option_882048) hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_App_appPortIdOpt(SF_LAST));
  Tuple2_D0E3BB t_7 = ((Tuple2_D0E3BB) &t_6);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(52);
  String_cprint(string("SW_Impl_Instance_FlyZones_FlyZonesDatabase_App starting ..."), T);
  cprintln(T);
  cflush(T);

  #endif

  sfUpdateLoc(54);
  hamr_ArtNix_timeDispatch(SF_LAST);

  sfUpdateLoc(56);
  B terminated = F;

  sfUpdateLoc(57);
  B t_57_5 = (!terminated);
  while(t_57_5) {

    sfUpdateLoc(58);
    DeclNewOption_02FA6D(_termOpt);
    Option_02FA6D termOpt;
    DeclNewOption_02FA6D(t_8);
    hamr_PlatformNix_receiveAsync(SF (Option_02FA6D) &t_8, (Option_882048) hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_App_appPortIdOpt(SF_LAST));
    termOpt = (Option_02FA6D) ((Option_02FA6D) &t_8);

    sfUpdateLoc(59);
    B t_9 = Option_02FA6D_isEmpty_(SF termOpt);
    if (t_9) {

      sfUpdateLoc(60);
      hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_App_compute(SF_LAST);
    } else {

      sfUpdateLoc(62);
      terminated = T;
    }

    sfUpdateLoc(57);
    t_57_5 = (!terminated);
  }

  sfUpdateLoc(65);
  hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_App_exit(SF_LAST);
  return Z_C(0);
}

Unit hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_App_atExit(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "SW_Impl_Instance_FlyZones_FlyZonesDatabase_App.scala", "hamr.SW_Impl_Instance_FlyZones_FlyZonesDatabase_App", "atExit", 0);

  sfUpdateLoc(76);
  hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_App_exit(SF_LAST);
}

Unit hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_App_initialiseArchitecture(STACK_FRAME Z seed) {
  DeclNewStackFrame(caller, "SW_Impl_Instance_FlyZones_FlyZonesDatabase_App.scala", "hamr.SW_Impl_Instance_FlyZones_FlyZonesDatabase_App", "initialiseArchitecture", 0);

  sfUpdateLoc(17);
  hamr_PlatformNix_initialise(SF seed, (Option_882048) hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_App_appPortIdOpt(SF_LAST));

  sfUpdateLoc(19);
  art_Art_run(SF (art_ArchitectureDescription) hamr_Arch_ad(SF_LAST));
}

Unit hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_App_initialise(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "SW_Impl_Instance_FlyZones_FlyZonesDatabase_App.scala", "hamr.SW_Impl_Instance_FlyZones_FlyZonesDatabase_App", "initialise", 0);

  sfUpdateLoc(23);
  art_Bridge_EntryPoints_initialise_(SF hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_App_entryPoints(SF_LAST));
}

Unit hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_App_compute(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "SW_Impl_Instance_FlyZones_FlyZonesDatabase_App.scala", "hamr.SW_Impl_Instance_FlyZones_FlyZonesDatabase_App", "compute", 0);

  sfUpdateLoc(27);
  art_Bridge_EntryPoints_compute_(SF hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_App_entryPoints(SF_LAST));

  sfUpdateLoc(28);
  hamr_Process_sleep(SF Z_C(500));
}

Unit hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_App_exit(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "SW_Impl_Instance_FlyZones_FlyZonesDatabase_App.scala", "hamr.SW_Impl_Instance_FlyZones_FlyZonesDatabase_App", "exit", 0);

  sfUpdateLoc(71);
  hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_App_finalise(SF_LAST);

  sfUpdateLoc(72);
  hamr_PlatformNix_finalise(SF_LAST);
}

Unit hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_App_finalise(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "SW_Impl_Instance_FlyZones_FlyZonesDatabase_App.scala", "hamr.SW_Impl_Instance_FlyZones_FlyZonesDatabase_App", "finalise", 0);

  sfUpdateLoc(32);
  art_Bridge_EntryPoints_finalise_(SF hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_App_entryPoints(SF_LAST));
}