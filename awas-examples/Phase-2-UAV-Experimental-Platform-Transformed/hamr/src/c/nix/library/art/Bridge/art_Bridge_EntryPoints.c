#include <all.h>

// art.Bridge.EntryPoints

B art_Bridge_EntryPoints__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case Thamr_SW_FlyZonesDatabase_thr_Impl_Bridge_EntryPoints: return T;
    case Thamr_SW_UxAS_thr_Impl_Bridge_EntryPoints: return T;
    case Thamr_SW_CASE_Filter_ARes_thr_Impl_Bridge_EntryPoints: return T;
    case Thamr_SW_CASE_Monitor_Req_thr_Impl_Bridge_EntryPoints: return T;
    case Thamr_SW_WaypointPlanManagerService_thr_Impl_Bridge_EntryPoints: return T;
    case Thamr_SW_CASE_Filter_OR_thr_Impl_Bridge_EntryPoints: return T;
    case Thamr_SW_CASE_Monitor_Geo_thr_Impl_Bridge_EntryPoints: return T;
    case Thamr_Drivers_UARTDriver_Impl_Bridge_EntryPoints: return T;
    case Thamr_SW_CASE_Filter_AReq_thr_Impl_Bridge_EntryPoints: return T;
    case Thamr_SW_CASE_Filter_LST_thr_Impl_Bridge_EntryPoints: return T;
    case Thamr_SW_CASE_AttestationGate_thr_Impl_Bridge_EntryPoints: return T;
    case Thamr_SW_CASE_AttestationManager_thr_Impl_Bridge_EntryPoints: return T;
    case Thamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_EntryPoints: return T;
    default: return F;
  }
}

art_Bridge_EntryPoints art_Bridge_EntryPoints__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case Thamr_SW_FlyZonesDatabase_thr_Impl_Bridge_EntryPoints: break;
    case Thamr_SW_UxAS_thr_Impl_Bridge_EntryPoints: break;
    case Thamr_SW_CASE_Filter_ARes_thr_Impl_Bridge_EntryPoints: break;
    case Thamr_SW_CASE_Monitor_Req_thr_Impl_Bridge_EntryPoints: break;
    case Thamr_SW_WaypointPlanManagerService_thr_Impl_Bridge_EntryPoints: break;
    case Thamr_SW_CASE_Filter_OR_thr_Impl_Bridge_EntryPoints: break;
    case Thamr_SW_CASE_Monitor_Geo_thr_Impl_Bridge_EntryPoints: break;
    case Thamr_Drivers_UARTDriver_Impl_Bridge_EntryPoints: break;
    case Thamr_SW_CASE_Filter_AReq_thr_Impl_Bridge_EntryPoints: break;
    case Thamr_SW_CASE_Filter_LST_thr_Impl_Bridge_EntryPoints: break;
    case Thamr_SW_CASE_AttestationGate_thr_Impl_Bridge_EntryPoints: break;
    case Thamr_SW_CASE_AttestationManager_thr_Impl_Bridge_EntryPoints: break;
    case Thamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_EntryPoints: break;
    default:
      fprintf(stderr, "Invalid cast from %s to art.Bridge.EntryPoints.", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (art_Bridge_EntryPoints) this;
}

void art_Bridge_EntryPoints_string_(STACK_FRAME String result, art_Bridge_EntryPoints this);

Unit art_Bridge_EntryPoints_initialise_(STACK_FRAME art_Bridge_EntryPoints this) {
  switch (this->type) {
    case Thamr_SW_FlyZonesDatabase_thr_Impl_Bridge_EntryPoints: hamr_SW_FlyZonesDatabase_thr_Impl_Bridge_EntryPoints_initialise_(CALLER (hamr_SW_FlyZonesDatabase_thr_Impl_Bridge_EntryPoints) this); return;
    case Thamr_SW_UxAS_thr_Impl_Bridge_EntryPoints: hamr_SW_UxAS_thr_Impl_Bridge_EntryPoints_initialise_(CALLER (hamr_SW_UxAS_thr_Impl_Bridge_EntryPoints) this); return;
    case Thamr_SW_CASE_Filter_ARes_thr_Impl_Bridge_EntryPoints: hamr_SW_CASE_Filter_ARes_thr_Impl_Bridge_EntryPoints_initialise_(CALLER (hamr_SW_CASE_Filter_ARes_thr_Impl_Bridge_EntryPoints) this); return;
    case Thamr_SW_CASE_Monitor_Req_thr_Impl_Bridge_EntryPoints: hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge_EntryPoints_initialise_(CALLER (hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge_EntryPoints) this); return;
    case Thamr_SW_WaypointPlanManagerService_thr_Impl_Bridge_EntryPoints: hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge_EntryPoints_initialise_(CALLER (hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge_EntryPoints) this); return;
    case Thamr_SW_CASE_Filter_OR_thr_Impl_Bridge_EntryPoints: hamr_SW_CASE_Filter_OR_thr_Impl_Bridge_EntryPoints_initialise_(CALLER (hamr_SW_CASE_Filter_OR_thr_Impl_Bridge_EntryPoints) this); return;
    case Thamr_SW_CASE_Monitor_Geo_thr_Impl_Bridge_EntryPoints: hamr_SW_CASE_Monitor_Geo_thr_Impl_Bridge_EntryPoints_initialise_(CALLER (hamr_SW_CASE_Monitor_Geo_thr_Impl_Bridge_EntryPoints) this); return;
    case Thamr_Drivers_UARTDriver_Impl_Bridge_EntryPoints: hamr_Drivers_UARTDriver_Impl_Bridge_EntryPoints_initialise_(CALLER (hamr_Drivers_UARTDriver_Impl_Bridge_EntryPoints) this); return;
    case Thamr_SW_CASE_Filter_AReq_thr_Impl_Bridge_EntryPoints: hamr_SW_CASE_Filter_AReq_thr_Impl_Bridge_EntryPoints_initialise_(CALLER (hamr_SW_CASE_Filter_AReq_thr_Impl_Bridge_EntryPoints) this); return;
    case Thamr_SW_CASE_Filter_LST_thr_Impl_Bridge_EntryPoints: hamr_SW_CASE_Filter_LST_thr_Impl_Bridge_EntryPoints_initialise_(CALLER (hamr_SW_CASE_Filter_LST_thr_Impl_Bridge_EntryPoints) this); return;
    case Thamr_SW_CASE_AttestationGate_thr_Impl_Bridge_EntryPoints: hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_EntryPoints_initialise_(CALLER (hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_EntryPoints) this); return;
    case Thamr_SW_CASE_AttestationManager_thr_Impl_Bridge_EntryPoints: hamr_SW_CASE_AttestationManager_thr_Impl_Bridge_EntryPoints_initialise_(CALLER (hamr_SW_CASE_AttestationManager_thr_Impl_Bridge_EntryPoints) this); return;
    case Thamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_EntryPoints: hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_EntryPoints_initialise_(CALLER (hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_EntryPoints) this); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}

Unit art_Bridge_EntryPoints_compute_(STACK_FRAME art_Bridge_EntryPoints this) {
  switch (this->type) {
    case Thamr_SW_FlyZonesDatabase_thr_Impl_Bridge_EntryPoints: hamr_SW_FlyZonesDatabase_thr_Impl_Bridge_EntryPoints_compute_(CALLER (hamr_SW_FlyZonesDatabase_thr_Impl_Bridge_EntryPoints) this); return;
    case Thamr_SW_UxAS_thr_Impl_Bridge_EntryPoints: hamr_SW_UxAS_thr_Impl_Bridge_EntryPoints_compute_(CALLER (hamr_SW_UxAS_thr_Impl_Bridge_EntryPoints) this); return;
    case Thamr_SW_CASE_Filter_ARes_thr_Impl_Bridge_EntryPoints: hamr_SW_CASE_Filter_ARes_thr_Impl_Bridge_EntryPoints_compute_(CALLER (hamr_SW_CASE_Filter_ARes_thr_Impl_Bridge_EntryPoints) this); return;
    case Thamr_SW_CASE_Monitor_Req_thr_Impl_Bridge_EntryPoints: hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge_EntryPoints_compute_(CALLER (hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge_EntryPoints) this); return;
    case Thamr_SW_WaypointPlanManagerService_thr_Impl_Bridge_EntryPoints: hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge_EntryPoints_compute_(CALLER (hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge_EntryPoints) this); return;
    case Thamr_SW_CASE_Filter_OR_thr_Impl_Bridge_EntryPoints: hamr_SW_CASE_Filter_OR_thr_Impl_Bridge_EntryPoints_compute_(CALLER (hamr_SW_CASE_Filter_OR_thr_Impl_Bridge_EntryPoints) this); return;
    case Thamr_SW_CASE_Monitor_Geo_thr_Impl_Bridge_EntryPoints: hamr_SW_CASE_Monitor_Geo_thr_Impl_Bridge_EntryPoints_compute_(CALLER (hamr_SW_CASE_Monitor_Geo_thr_Impl_Bridge_EntryPoints) this); return;
    case Thamr_Drivers_UARTDriver_Impl_Bridge_EntryPoints: hamr_Drivers_UARTDriver_Impl_Bridge_EntryPoints_compute_(CALLER (hamr_Drivers_UARTDriver_Impl_Bridge_EntryPoints) this); return;
    case Thamr_SW_CASE_Filter_AReq_thr_Impl_Bridge_EntryPoints: hamr_SW_CASE_Filter_AReq_thr_Impl_Bridge_EntryPoints_compute_(CALLER (hamr_SW_CASE_Filter_AReq_thr_Impl_Bridge_EntryPoints) this); return;
    case Thamr_SW_CASE_Filter_LST_thr_Impl_Bridge_EntryPoints: hamr_SW_CASE_Filter_LST_thr_Impl_Bridge_EntryPoints_compute_(CALLER (hamr_SW_CASE_Filter_LST_thr_Impl_Bridge_EntryPoints) this); return;
    case Thamr_SW_CASE_AttestationGate_thr_Impl_Bridge_EntryPoints: hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_EntryPoints_compute_(CALLER (hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_EntryPoints) this); return;
    case Thamr_SW_CASE_AttestationManager_thr_Impl_Bridge_EntryPoints: hamr_SW_CASE_AttestationManager_thr_Impl_Bridge_EntryPoints_compute_(CALLER (hamr_SW_CASE_AttestationManager_thr_Impl_Bridge_EntryPoints) this); return;
    case Thamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_EntryPoints: hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_EntryPoints_compute_(CALLER (hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_EntryPoints) this); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}

Unit art_Bridge_EntryPoints_finalise_(STACK_FRAME art_Bridge_EntryPoints this) {
  switch (this->type) {
    case Thamr_SW_FlyZonesDatabase_thr_Impl_Bridge_EntryPoints: hamr_SW_FlyZonesDatabase_thr_Impl_Bridge_EntryPoints_finalise_(CALLER (hamr_SW_FlyZonesDatabase_thr_Impl_Bridge_EntryPoints) this); return;
    case Thamr_SW_UxAS_thr_Impl_Bridge_EntryPoints: hamr_SW_UxAS_thr_Impl_Bridge_EntryPoints_finalise_(CALLER (hamr_SW_UxAS_thr_Impl_Bridge_EntryPoints) this); return;
    case Thamr_SW_CASE_Filter_ARes_thr_Impl_Bridge_EntryPoints: hamr_SW_CASE_Filter_ARes_thr_Impl_Bridge_EntryPoints_finalise_(CALLER (hamr_SW_CASE_Filter_ARes_thr_Impl_Bridge_EntryPoints) this); return;
    case Thamr_SW_CASE_Monitor_Req_thr_Impl_Bridge_EntryPoints: hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge_EntryPoints_finalise_(CALLER (hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge_EntryPoints) this); return;
    case Thamr_SW_WaypointPlanManagerService_thr_Impl_Bridge_EntryPoints: hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge_EntryPoints_finalise_(CALLER (hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge_EntryPoints) this); return;
    case Thamr_SW_CASE_Filter_OR_thr_Impl_Bridge_EntryPoints: hamr_SW_CASE_Filter_OR_thr_Impl_Bridge_EntryPoints_finalise_(CALLER (hamr_SW_CASE_Filter_OR_thr_Impl_Bridge_EntryPoints) this); return;
    case Thamr_SW_CASE_Monitor_Geo_thr_Impl_Bridge_EntryPoints: hamr_SW_CASE_Monitor_Geo_thr_Impl_Bridge_EntryPoints_finalise_(CALLER (hamr_SW_CASE_Monitor_Geo_thr_Impl_Bridge_EntryPoints) this); return;
    case Thamr_Drivers_UARTDriver_Impl_Bridge_EntryPoints: hamr_Drivers_UARTDriver_Impl_Bridge_EntryPoints_finalise_(CALLER (hamr_Drivers_UARTDriver_Impl_Bridge_EntryPoints) this); return;
    case Thamr_SW_CASE_Filter_AReq_thr_Impl_Bridge_EntryPoints: hamr_SW_CASE_Filter_AReq_thr_Impl_Bridge_EntryPoints_finalise_(CALLER (hamr_SW_CASE_Filter_AReq_thr_Impl_Bridge_EntryPoints) this); return;
    case Thamr_SW_CASE_Filter_LST_thr_Impl_Bridge_EntryPoints: hamr_SW_CASE_Filter_LST_thr_Impl_Bridge_EntryPoints_finalise_(CALLER (hamr_SW_CASE_Filter_LST_thr_Impl_Bridge_EntryPoints) this); return;
    case Thamr_SW_CASE_AttestationGate_thr_Impl_Bridge_EntryPoints: hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_EntryPoints_finalise_(CALLER (hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_EntryPoints) this); return;
    case Thamr_SW_CASE_AttestationManager_thr_Impl_Bridge_EntryPoints: hamr_SW_CASE_AttestationManager_thr_Impl_Bridge_EntryPoints_finalise_(CALLER (hamr_SW_CASE_AttestationManager_thr_Impl_Bridge_EntryPoints) this); return;
    case Thamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_EntryPoints: hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_EntryPoints_finalise_(CALLER (hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_EntryPoints) this); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}