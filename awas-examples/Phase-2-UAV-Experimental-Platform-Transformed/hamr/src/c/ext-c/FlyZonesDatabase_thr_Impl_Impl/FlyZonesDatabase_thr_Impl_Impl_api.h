#ifndef FLYZONESDATABASE_THR_IMPL_IMPL_API_H
#define FLYZONESDATABASE_THR_IMPL_IMPL_API_H

#include <all.h>

// This file was auto-generated.  Do not edit

Unit api_send_keep_in_zones__hamr_SW_FlyZonesDatabase_thr_Impl_Impl(
  hamr_SW_FlyZonesDatabase_thr_Impl_Impl this,
  IS_C4F575 value);

Unit api_send_keep_in_zones__alt__hamr_SW_FlyZonesDatabase_thr_Impl_Impl(
  hamr_SW_FlyZonesDatabase_thr_Impl_Impl this,
  Z numBits,
  U8 *byteArray);

Unit api_send_keep_out_zones__hamr_SW_FlyZonesDatabase_thr_Impl_Impl(
  hamr_SW_FlyZonesDatabase_thr_Impl_Impl this,
  IS_C4F575 value);

Unit api_send_keep_out_zones__alt__hamr_SW_FlyZonesDatabase_thr_Impl_Impl(
  hamr_SW_FlyZonesDatabase_thr_Impl_Impl this,
  Z numBits,
  U8 *byteArray);

Unit api_logInfo__hamr_SW_FlyZonesDatabase_thr_Impl_Impl(
  hamr_SW_FlyZonesDatabase_thr_Impl_Impl this,
  String str);

Unit api_logDebug__hamr_SW_FlyZonesDatabase_thr_Impl_Impl(
  hamr_SW_FlyZonesDatabase_thr_Impl_Impl this,
  String str);

Unit api_logError__hamr_SW_FlyZonesDatabase_thr_Impl_Impl(
  hamr_SW_FlyZonesDatabase_thr_Impl_Impl this,
  String str);

#endif
