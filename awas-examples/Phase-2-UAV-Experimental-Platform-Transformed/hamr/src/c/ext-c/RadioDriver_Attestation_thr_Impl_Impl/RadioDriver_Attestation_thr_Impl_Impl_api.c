#include <RadioDriver_Attestation_thr_Impl_Impl_api.h>

// This file was auto-generated.  Do not edit

B api_get_recv_data__hamr_SW_RadioDriver_Attestation_thr_Impl_Impl(
  hamr_SW_RadioDriver_Attestation_thr_Impl_Impl this,
  IS_C4F575 value){
  // Option_30119F = Option[IS[Z, B]]
  // Some_8D03B1 = Some[IS[Z, B]]
  DeclNewOption_30119F(t_0);
  hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_Api_getrecv_data_(
    SF
    (Option_30119F) &t_0,
    hamr_SW_RadioDriver_Attestation_thr_Impl_Impl_api_(this));

  if(t_0.type == TSome_8D03B1){
    Type_assign(value, &t_0.Some_8D03B1.value, sizeof(struct IS_C4F575));
    return T;
  } else {
    return F;
  }
}

B api_get_recv_data__alt__hamr_SW_RadioDriver_Attestation_thr_Impl_Impl(
  hamr_SW_RadioDriver_Attestation_thr_Impl_Impl this,
  Z *numBits,
  U8 *byteArray){
  // Option_30119F = Option[IS[Z, B]]
  // Some_8D03B1 = Some[IS[Z, B]]
  DeclNewOption_30119F(t_0);
  hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_Api_getrecv_data_(
    SF
    (Option_30119F) &t_0,
    hamr_SW_RadioDriver_Attestation_thr_Impl_Impl_api_(this));

  if(t_0.type == TSome_8D03B1){
    *numBits = t_0.Some_8D03B1.value.size;
    memcpy(byteArray, &t_0.Some_8D03B1.value.value, (*numBits / 8) + 1);
    return T;
  } else {
    return F;
  }
}

Unit api_send_send_data__hamr_SW_RadioDriver_Attestation_thr_Impl_Impl(
  hamr_SW_RadioDriver_Attestation_thr_Impl_Impl this,
  IS_C4F575 value) {

  hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_Api_sendsend_data_(
    hamr_SW_RadioDriver_Attestation_thr_Impl_Impl_api_(this),
    value);
}

Unit api_send_send_data__alt__hamr_SW_RadioDriver_Attestation_thr_Impl_Impl(
  hamr_SW_RadioDriver_Attestation_thr_Impl_Impl this,
  Z numBits,
  U8 *byteArray) {

  sfAssert((Z) numBits >= 0, "numBits must be non-negative for IS[Z, B].");
  sfAssert((Z) numBits <= MaxIS_C4F575, "numBits too large for IS[Z, B].");

  DeclNewIS_C4F575(t_0);

  t_0.size = numBits;
  if(numBits > 0) {
    memcpy(&t_0.value, byteArray, (numBits / 8) + 1);
  }

  hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_Api_sendsend_data_(
    hamr_SW_RadioDriver_Attestation_thr_Impl_Impl_api_(this),
    &t_0);
}

Unit api_send_AutomationRequest__hamr_SW_RadioDriver_Attestation_thr_Impl_Impl(
  hamr_SW_RadioDriver_Attestation_thr_Impl_Impl this,
  IS_C4F575 value) {

  hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_Api_sendAutomationRequest_(
    hamr_SW_RadioDriver_Attestation_thr_Impl_Impl_api_(this),
    value);
}

Unit api_send_AutomationRequest__alt__hamr_SW_RadioDriver_Attestation_thr_Impl_Impl(
  hamr_SW_RadioDriver_Attestation_thr_Impl_Impl this,
  Z numBits,
  U8 *byteArray) {

  sfAssert((Z) numBits >= 0, "numBits must be non-negative for IS[Z, B].");
  sfAssert((Z) numBits <= MaxIS_C4F575, "numBits too large for IS[Z, B].");

  DeclNewIS_C4F575(t_0);

  t_0.size = numBits;
  if(numBits > 0) {
    memcpy(&t_0.value, byteArray, (numBits / 8) + 1);
  }

  hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_Api_sendAutomationRequest_(
    hamr_SW_RadioDriver_Attestation_thr_Impl_Impl_api_(this),
    &t_0);
}

Unit api_send_OperatingRegion__hamr_SW_RadioDriver_Attestation_thr_Impl_Impl(
  hamr_SW_RadioDriver_Attestation_thr_Impl_Impl this,
  IS_C4F575 value) {

  hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_Api_sendOperatingRegion_(
    hamr_SW_RadioDriver_Attestation_thr_Impl_Impl_api_(this),
    value);
}

Unit api_send_OperatingRegion__alt__hamr_SW_RadioDriver_Attestation_thr_Impl_Impl(
  hamr_SW_RadioDriver_Attestation_thr_Impl_Impl this,
  Z numBits,
  U8 *byteArray) {

  sfAssert((Z) numBits >= 0, "numBits must be non-negative for IS[Z, B].");
  sfAssert((Z) numBits <= MaxIS_C4F575, "numBits too large for IS[Z, B].");

  DeclNewIS_C4F575(t_0);

  t_0.size = numBits;
  if(numBits > 0) {
    memcpy(&t_0.value, byteArray, (numBits / 8) + 1);
  }

  hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_Api_sendOperatingRegion_(
    hamr_SW_RadioDriver_Attestation_thr_Impl_Impl_api_(this),
    &t_0);
}

Unit api_send_LineSearchTask__hamr_SW_RadioDriver_Attestation_thr_Impl_Impl(
  hamr_SW_RadioDriver_Attestation_thr_Impl_Impl this,
  IS_C4F575 value) {

  hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_Api_sendLineSearchTask_(
    hamr_SW_RadioDriver_Attestation_thr_Impl_Impl_api_(this),
    value);
}

Unit api_send_LineSearchTask__alt__hamr_SW_RadioDriver_Attestation_thr_Impl_Impl(
  hamr_SW_RadioDriver_Attestation_thr_Impl_Impl this,
  Z numBits,
  U8 *byteArray) {

  sfAssert((Z) numBits >= 0, "numBits must be non-negative for IS[Z, B].");
  sfAssert((Z) numBits <= MaxIS_C4F575, "numBits too large for IS[Z, B].");

  DeclNewIS_C4F575(t_0);

  t_0.size = numBits;
  if(numBits > 0) {
    memcpy(&t_0.value, byteArray, (numBits / 8) + 1);
  }

  hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_Api_sendLineSearchTask_(
    hamr_SW_RadioDriver_Attestation_thr_Impl_Impl_api_(this),
    &t_0);
}

B api_get_am_request__hamr_SW_RadioDriver_Attestation_thr_Impl_Impl(
  hamr_SW_RadioDriver_Attestation_thr_Impl_Impl this,
  IS_C4F575 value){
  // Option_30119F = Option[IS[Z, B]]
  // Some_8D03B1 = Some[IS[Z, B]]
  DeclNewOption_30119F(t_0);
  hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_Api_getam_request_(
    SF
    (Option_30119F) &t_0,
    hamr_SW_RadioDriver_Attestation_thr_Impl_Impl_api_(this));

  if(t_0.type == TSome_8D03B1){
    Type_assign(value, &t_0.Some_8D03B1.value, sizeof(struct IS_C4F575));
    return T;
  } else {
    return F;
  }
}

B api_get_am_request__alt__hamr_SW_RadioDriver_Attestation_thr_Impl_Impl(
  hamr_SW_RadioDriver_Attestation_thr_Impl_Impl this,
  Z *numBits,
  U8 *byteArray){
  // Option_30119F = Option[IS[Z, B]]
  // Some_8D03B1 = Some[IS[Z, B]]
  DeclNewOption_30119F(t_0);
  hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_Api_getam_request_(
    SF
    (Option_30119F) &t_0,
    hamr_SW_RadioDriver_Attestation_thr_Impl_Impl_api_(this));

  if(t_0.type == TSome_8D03B1){
    *numBits = t_0.Some_8D03B1.value.size;
    memcpy(byteArray, &t_0.Some_8D03B1.value.value, (*numBits / 8) + 1);
    return T;
  } else {
    return F;
  }
}

Unit api_send_am_response__hamr_SW_RadioDriver_Attestation_thr_Impl_Impl(
  hamr_SW_RadioDriver_Attestation_thr_Impl_Impl this,
  IS_C4F575 value) {

  hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_Api_sendam_response_(
    hamr_SW_RadioDriver_Attestation_thr_Impl_Impl_api_(this),
    value);
}

Unit api_send_am_response__alt__hamr_SW_RadioDriver_Attestation_thr_Impl_Impl(
  hamr_SW_RadioDriver_Attestation_thr_Impl_Impl this,
  Z numBits,
  U8 *byteArray) {

  sfAssert((Z) numBits >= 0, "numBits must be non-negative for IS[Z, B].");
  sfAssert((Z) numBits <= MaxIS_C4F575, "numBits too large for IS[Z, B].");

  DeclNewIS_C4F575(t_0);

  t_0.size = numBits;
  if(numBits > 0) {
    memcpy(&t_0.value, byteArray, (numBits / 8) + 1);
  }

  hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_Api_sendam_response_(
    hamr_SW_RadioDriver_Attestation_thr_Impl_Impl_api_(this),
    &t_0);
}

Unit api_logInfo__hamr_SW_RadioDriver_Attestation_thr_Impl_Impl(
  hamr_SW_RadioDriver_Attestation_thr_Impl_Impl this,
  String str) {
  hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_Api_logInfo_(
    SF
    hamr_SW_RadioDriver_Attestation_thr_Impl_Impl_api_(this),
    str);
}

Unit api_logDebug__hamr_SW_RadioDriver_Attestation_thr_Impl_Impl(
  hamr_SW_RadioDriver_Attestation_thr_Impl_Impl this,
  String str) {
  hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_Api_logDebug_(
    SF
    hamr_SW_RadioDriver_Attestation_thr_Impl_Impl_api_(this),
    str);
}

Unit api_logError__hamr_SW_RadioDriver_Attestation_thr_Impl_Impl(
  hamr_SW_RadioDriver_Attestation_thr_Impl_Impl this,
  String str) {
  hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_Api_logError_(
    SF
    hamr_SW_RadioDriver_Attestation_thr_Impl_Impl_api_(this),
    str);
}
