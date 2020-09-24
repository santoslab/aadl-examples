#ifndef WAYPOINTPLANMANAGERSERVICE_THR_IMPL_IMPL_API_H
#define WAYPOINTPLANMANAGERSERVICE_THR_IMPL_IMPL_API_H

#include <all.h>

// This file was auto-generated.  Do not edit

B api_get_AutomationResponse__hamr_SW_WaypointPlanManagerService_thr_Impl_Impl(
  hamr_SW_WaypointPlanManagerService_thr_Impl_Impl this,
  IS_C4F575 value);

B api_get_AutomationResponse__alt__hamr_SW_WaypointPlanManagerService_thr_Impl_Impl(
  hamr_SW_WaypointPlanManagerService_thr_Impl_Impl this,
  Z *numBits,
  U8 *byteArray);

B api_get_AirVehicleState__hamr_SW_WaypointPlanManagerService_thr_Impl_Impl(
  hamr_SW_WaypointPlanManagerService_thr_Impl_Impl this,
  IS_C4F575 value);

B api_get_AirVehicleState__alt__hamr_SW_WaypointPlanManagerService_thr_Impl_Impl(
  hamr_SW_WaypointPlanManagerService_thr_Impl_Impl this,
  Z *numBits,
  U8 *byteArray);

Unit api_send_MissionCommand__hamr_SW_WaypointPlanManagerService_thr_Impl_Impl(
  hamr_SW_WaypointPlanManagerService_thr_Impl_Impl this,
  IS_C4F575 value);

Unit api_send_MissionCommand__alt__hamr_SW_WaypointPlanManagerService_thr_Impl_Impl(
  hamr_SW_WaypointPlanManagerService_thr_Impl_Impl this,
  Z numBits,
  U8 *byteArray);

B api_get_ReturnHome__hamr_SW_WaypointPlanManagerService_thr_Impl_Impl(
  hamr_SW_WaypointPlanManagerService_thr_Impl_Impl this);

Unit api_logInfo__hamr_SW_WaypointPlanManagerService_thr_Impl_Impl(
  hamr_SW_WaypointPlanManagerService_thr_Impl_Impl this,
  String str);

Unit api_logDebug__hamr_SW_WaypointPlanManagerService_thr_Impl_Impl(
  hamr_SW_WaypointPlanManagerService_thr_Impl_Impl this,
  String str);

Unit api_logError__hamr_SW_WaypointPlanManagerService_thr_Impl_Impl(
  hamr_SW_WaypointPlanManagerService_thr_Impl_Impl this,
  String str);

#endif
