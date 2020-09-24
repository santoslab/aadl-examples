#ifndef SIREUM_TYPE_H_art_Bridge
#define SIREUM_TYPE_H_art_Bridge
#include <misc.h>

// art.Bridge

#include <type-hamr_SW_CASE_Filter_AReq_thr_Impl_Bridge.h>
#include <type-hamr_SW_CASE_AttestationGate_thr_Impl_Bridge.h>
#include <type-hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge.h>
#include <type-hamr_Drivers_UARTDriver_Impl_Bridge.h>
#include <type-hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge.h>
#include <type-hamr_SW_FlyZonesDatabase_thr_Impl_Bridge.h>
#include <type-hamr_SW_CASE_Filter_OR_thr_Impl_Bridge.h>
#include <type-hamr_SW_CASE_Filter_LST_thr_Impl_Bridge.h>
#include <type-hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge.h>
#include <type-hamr_SW_CASE_AttestationManager_thr_Impl_Bridge.h>
#include <type-hamr_SW_UxAS_thr_Impl_Bridge.h>
#include <type-hamr_SW_CASE_Monitor_Geo_thr_Impl_Bridge.h>
#include <type-hamr_SW_CASE_Filter_ARes_thr_Impl_Bridge.h>

typedef union art_Bridge *art_Bridge;
union art_Bridge {
  TYPE type;
  struct hamr_SW_CASE_Filter_AReq_thr_Impl_Bridge hamr_SW_CASE_Filter_AReq_thr_Impl_Bridge;
  struct hamr_SW_CASE_AttestationGate_thr_Impl_Bridge hamr_SW_CASE_AttestationGate_thr_Impl_Bridge;
  struct hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge;
  struct hamr_Drivers_UARTDriver_Impl_Bridge hamr_Drivers_UARTDriver_Impl_Bridge;
  struct hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge;
  struct hamr_SW_FlyZonesDatabase_thr_Impl_Bridge hamr_SW_FlyZonesDatabase_thr_Impl_Bridge;
  struct hamr_SW_CASE_Filter_OR_thr_Impl_Bridge hamr_SW_CASE_Filter_OR_thr_Impl_Bridge;
  struct hamr_SW_CASE_Filter_LST_thr_Impl_Bridge hamr_SW_CASE_Filter_LST_thr_Impl_Bridge;
  struct hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge;
  struct hamr_SW_CASE_AttestationManager_thr_Impl_Bridge hamr_SW_CASE_AttestationManager_thr_Impl_Bridge;
  struct hamr_SW_UxAS_thr_Impl_Bridge hamr_SW_UxAS_thr_Impl_Bridge;
  struct hamr_SW_CASE_Monitor_Geo_thr_Impl_Bridge hamr_SW_CASE_Monitor_Geo_thr_Impl_Bridge;
  struct hamr_SW_CASE_Filter_ARes_thr_Impl_Bridge hamr_SW_CASE_Filter_ARes_thr_Impl_Bridge;
};

#define DeclNewart_Bridge(x) union art_Bridge x = { 0 }

#endif