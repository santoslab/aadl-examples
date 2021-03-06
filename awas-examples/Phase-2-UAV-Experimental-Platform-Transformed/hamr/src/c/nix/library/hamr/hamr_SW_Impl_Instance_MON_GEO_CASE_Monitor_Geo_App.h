#ifndef SIREUM_H_hamr_SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo_App
#define SIREUM_H_hamr_SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo_App
#include <types.h>

void hamr_SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo_App_init(STACK_FRAME_ONLY);

art_Bridge_EntryPoints hamr_SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo_App_entryPoints(STACK_FRAME_ONLY);
Z hamr_SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo_App_appPortId(STACK_FRAME_ONLY);
Option_882048 hamr_SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo_App_appPortIdOpt(STACK_FRAME_ONLY);
Z hamr_SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo_App_keep_in_zonesPortId(STACK_FRAME_ONLY);
Option_882048 hamr_SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo_App_keep_in_zonesPortIdOpt(STACK_FRAME_ONLY);
Z hamr_SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo_App_keep_out_zonesPortId(STACK_FRAME_ONLY);
Option_882048 hamr_SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo_App_keep_out_zonesPortIdOpt(STACK_FRAME_ONLY);
Z hamr_SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo_App_observedPortId(STACK_FRAME_ONLY);
Option_882048 hamr_SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo_App_observedPortIdOpt(STACK_FRAME_ONLY);

Z hamr_SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo_App_main(STACK_FRAME IS_948B60 args);

Unit hamr_SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo_App_atExit(STACK_FRAME_ONLY);

Unit hamr_SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo_App_initialiseArchitecture(STACK_FRAME Z seed);

Unit hamr_SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo_App_initialise(STACK_FRAME_ONLY);

Unit hamr_SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo_App_compute(STACK_FRAME_ONLY);

Unit hamr_SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo_App_exit(STACK_FRAME_ONLY);

Unit hamr_SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo_App_finalise(STACK_FRAME_ONLY);

#endif