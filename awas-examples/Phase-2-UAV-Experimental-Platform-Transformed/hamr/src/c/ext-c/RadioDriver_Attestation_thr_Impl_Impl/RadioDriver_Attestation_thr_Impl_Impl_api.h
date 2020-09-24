#ifndef RADIODRIVER_ATTESTATION_THR_IMPL_IMPL_API_H
#define RADIODRIVER_ATTESTATION_THR_IMPL_IMPL_API_H

#include <all.h>

// This file was auto-generated.  Do not edit

B api_get_recv_data__hamr_SW_RadioDriver_Attestation_thr_Impl_Impl(
  hamr_SW_RadioDriver_Attestation_thr_Impl_Impl this,
  IS_C4F575 value);

B api_get_recv_data__alt__hamr_SW_RadioDriver_Attestation_thr_Impl_Impl(
  hamr_SW_RadioDriver_Attestation_thr_Impl_Impl this,
  Z *numBits,
  U8 *byteArray);

Unit api_send_send_data__hamr_SW_RadioDriver_Attestation_thr_Impl_Impl(
  hamr_SW_RadioDriver_Attestation_thr_Impl_Impl this,
  IS_C4F575 value);

Unit api_send_send_data__alt__hamr_SW_RadioDriver_Attestation_thr_Impl_Impl(
  hamr_SW_RadioDriver_Attestation_thr_Impl_Impl this,
  Z numBits,
  U8 *byteArray);

Unit api_send_AutomationRequest__hamr_SW_RadioDriver_Attestation_thr_Impl_Impl(
  hamr_SW_RadioDriver_Attestation_thr_Impl_Impl this,
  IS_C4F575 value);

Unit api_send_AutomationRequest__alt__hamr_SW_RadioDriver_Attestation_thr_Impl_Impl(
  hamr_SW_RadioDriver_Attestation_thr_Impl_Impl this,
  Z numBits,
  U8 *byteArray);

Unit api_send_OperatingRegion__hamr_SW_RadioDriver_Attestation_thr_Impl_Impl(
  hamr_SW_RadioDriver_Attestation_thr_Impl_Impl this,
  IS_C4F575 value);

Unit api_send_OperatingRegion__alt__hamr_SW_RadioDriver_Attestation_thr_Impl_Impl(
  hamr_SW_RadioDriver_Attestation_thr_Impl_Impl this,
  Z numBits,
  U8 *byteArray);

Unit api_send_LineSearchTask__hamr_SW_RadioDriver_Attestation_thr_Impl_Impl(
  hamr_SW_RadioDriver_Attestation_thr_Impl_Impl this,
  IS_C4F575 value);

Unit api_send_LineSearchTask__alt__hamr_SW_RadioDriver_Attestation_thr_Impl_Impl(
  hamr_SW_RadioDriver_Attestation_thr_Impl_Impl this,
  Z numBits,
  U8 *byteArray);

B api_get_am_request__hamr_SW_RadioDriver_Attestation_thr_Impl_Impl(
  hamr_SW_RadioDriver_Attestation_thr_Impl_Impl this,
  IS_C4F575 value);

B api_get_am_request__alt__hamr_SW_RadioDriver_Attestation_thr_Impl_Impl(
  hamr_SW_RadioDriver_Attestation_thr_Impl_Impl this,
  Z *numBits,
  U8 *byteArray);

Unit api_send_am_response__hamr_SW_RadioDriver_Attestation_thr_Impl_Impl(
  hamr_SW_RadioDriver_Attestation_thr_Impl_Impl this,
  IS_C4F575 value);

Unit api_send_am_response__alt__hamr_SW_RadioDriver_Attestation_thr_Impl_Impl(
  hamr_SW_RadioDriver_Attestation_thr_Impl_Impl this,
  Z numBits,
  U8 *byteArray);

Unit api_logInfo__hamr_SW_RadioDriver_Attestation_thr_Impl_Impl(
  hamr_SW_RadioDriver_Attestation_thr_Impl_Impl this,
  String str);

Unit api_logDebug__hamr_SW_RadioDriver_Attestation_thr_Impl_Impl(
  hamr_SW_RadioDriver_Attestation_thr_Impl_Impl this,
  String str);

Unit api_logError__hamr_SW_RadioDriver_Attestation_thr_Impl_Impl(
  hamr_SW_RadioDriver_Attestation_thr_Impl_Impl this,
  String str);

#endif
