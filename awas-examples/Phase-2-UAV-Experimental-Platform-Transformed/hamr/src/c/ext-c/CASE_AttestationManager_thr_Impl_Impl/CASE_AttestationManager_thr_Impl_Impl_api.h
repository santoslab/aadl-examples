#ifndef CASE_ATTESTATIONMANAGER_THR_IMPL_IMPL_API_H
#define CASE_ATTESTATIONMANAGER_THR_IMPL_IMPL_API_H

#include <all.h>

// This file was auto-generated.  Do not edit

Unit api_send_trusted_ids__hamr_SW_CASE_AttestationManager_thr_Impl_Impl(
  hamr_SW_CASE_AttestationManager_thr_Impl_Impl this,
  IS_C4F575 value);

Unit api_send_trusted_ids__alt__hamr_SW_CASE_AttestationManager_thr_Impl_Impl(
  hamr_SW_CASE_AttestationManager_thr_Impl_Impl this,
  Z numBits,
  U8 *byteArray);

Unit api_send_attestation_request__hamr_SW_CASE_AttestationManager_thr_Impl_Impl(
  hamr_SW_CASE_AttestationManager_thr_Impl_Impl this,
  IS_C4F575 value);

Unit api_send_attestation_request__alt__hamr_SW_CASE_AttestationManager_thr_Impl_Impl(
  hamr_SW_CASE_AttestationManager_thr_Impl_Impl this,
  Z numBits,
  U8 *byteArray);

B api_get_attestation_response__hamr_SW_CASE_AttestationManager_thr_Impl_Impl(
  hamr_SW_CASE_AttestationManager_thr_Impl_Impl this,
  IS_C4F575 value);

B api_get_attestation_response__alt__hamr_SW_CASE_AttestationManager_thr_Impl_Impl(
  hamr_SW_CASE_AttestationManager_thr_Impl_Impl this,
  Z *numBits,
  U8 *byteArray);

Unit api_logInfo__hamr_SW_CASE_AttestationManager_thr_Impl_Impl(
  hamr_SW_CASE_AttestationManager_thr_Impl_Impl this,
  String str);

Unit api_logDebug__hamr_SW_CASE_AttestationManager_thr_Impl_Impl(
  hamr_SW_CASE_AttestationManager_thr_Impl_Impl this,
  String str);

Unit api_logError__hamr_SW_CASE_AttestationManager_thr_Impl_Impl(
  hamr_SW_CASE_AttestationManager_thr_Impl_Impl this,
  String str);

#endif
