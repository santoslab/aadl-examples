#ifndef CASE_FILTER_AREQ_THR_IMPL_IMPL_API_H
#define CASE_FILTER_AREQ_THR_IMPL_IMPL_API_H

#include <all.h>

// This file was auto-generated.  Do not edit

B api_get_filter_in__hamr_SW_CASE_Filter_AReq_thr_Impl_Impl(
  hamr_SW_CASE_Filter_AReq_thr_Impl_Impl this,
  IS_C4F575 value);

B api_get_filter_in__alt__hamr_SW_CASE_Filter_AReq_thr_Impl_Impl(
  hamr_SW_CASE_Filter_AReq_thr_Impl_Impl this,
  Z *numBits,
  U8 *byteArray);

Unit api_send_filter_out__hamr_SW_CASE_Filter_AReq_thr_Impl_Impl(
  hamr_SW_CASE_Filter_AReq_thr_Impl_Impl this,
  IS_C4F575 value);

Unit api_send_filter_out__alt__hamr_SW_CASE_Filter_AReq_thr_Impl_Impl(
  hamr_SW_CASE_Filter_AReq_thr_Impl_Impl this,
  Z numBits,
  U8 *byteArray);

Unit api_logInfo__hamr_SW_CASE_Filter_AReq_thr_Impl_Impl(
  hamr_SW_CASE_Filter_AReq_thr_Impl_Impl this,
  String str);

Unit api_logDebug__hamr_SW_CASE_Filter_AReq_thr_Impl_Impl(
  hamr_SW_CASE_Filter_AReq_thr_Impl_Impl this,
  String str);

Unit api_logError__hamr_SW_CASE_Filter_AReq_thr_Impl_Impl(
  hamr_SW_CASE_Filter_AReq_thr_Impl_Impl this,
  String str);

#endif
