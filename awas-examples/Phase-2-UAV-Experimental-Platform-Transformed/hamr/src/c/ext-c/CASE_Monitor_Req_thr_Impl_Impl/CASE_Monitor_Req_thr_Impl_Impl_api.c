#include <CASE_Monitor_Req_thr_Impl_Impl_api.h>

// This file was auto-generated.  Do not edit

B api_get_observed__hamr_SW_CASE_Monitor_Req_thr_Impl_Impl(
  hamr_SW_CASE_Monitor_Req_thr_Impl_Impl this,
  IS_C4F575 value){
  // Option_30119F = Option[IS[Z, B]]
  // Some_8D03B1 = Some[IS[Z, B]]
  DeclNewOption_30119F(t_0);
  hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge_Api_getobserved_(
    SF
    (Option_30119F) &t_0,
    hamr_SW_CASE_Monitor_Req_thr_Impl_Impl_api_(this));

  if(t_0.type == TSome_8D03B1){
    Type_assign(value, &t_0.Some_8D03B1.value, sizeof(struct IS_C4F575));
    return T;
  } else {
    return F;
  }
}

B api_get_observed__alt__hamr_SW_CASE_Monitor_Req_thr_Impl_Impl(
  hamr_SW_CASE_Monitor_Req_thr_Impl_Impl this,
  Z *numBits,
  U8 *byteArray){
  // Option_30119F = Option[IS[Z, B]]
  // Some_8D03B1 = Some[IS[Z, B]]
  DeclNewOption_30119F(t_0);
  hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge_Api_getobserved_(
    SF
    (Option_30119F) &t_0,
    hamr_SW_CASE_Monitor_Req_thr_Impl_Impl_api_(this));

  if(t_0.type == TSome_8D03B1){
    *numBits = t_0.Some_8D03B1.value.size;
    memcpy(byteArray, &t_0.Some_8D03B1.value.value, (*numBits / 8) + 1);
    return T;
  } else {
    return F;
  }
}

B api_get_reference_1__hamr_SW_CASE_Monitor_Req_thr_Impl_Impl(
  hamr_SW_CASE_Monitor_Req_thr_Impl_Impl this,
  IS_C4F575 value){
  // Option_30119F = Option[IS[Z, B]]
  // Some_8D03B1 = Some[IS[Z, B]]
  DeclNewOption_30119F(t_0);
  hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge_Api_getreference_1_(
    SF
    (Option_30119F) &t_0,
    hamr_SW_CASE_Monitor_Req_thr_Impl_Impl_api_(this));

  if(t_0.type == TSome_8D03B1){
    Type_assign(value, &t_0.Some_8D03B1.value, sizeof(struct IS_C4F575));
    return T;
  } else {
    return F;
  }
}

B api_get_reference_1__alt__hamr_SW_CASE_Monitor_Req_thr_Impl_Impl(
  hamr_SW_CASE_Monitor_Req_thr_Impl_Impl this,
  Z *numBits,
  U8 *byteArray){
  // Option_30119F = Option[IS[Z, B]]
  // Some_8D03B1 = Some[IS[Z, B]]
  DeclNewOption_30119F(t_0);
  hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge_Api_getreference_1_(
    SF
    (Option_30119F) &t_0,
    hamr_SW_CASE_Monitor_Req_thr_Impl_Impl_api_(this));

  if(t_0.type == TSome_8D03B1){
    *numBits = t_0.Some_8D03B1.value.size;
    memcpy(byteArray, &t_0.Some_8D03B1.value.value, (*numBits / 8) + 1);
    return T;
  } else {
    return F;
  }
}

Unit api_logInfo__hamr_SW_CASE_Monitor_Req_thr_Impl_Impl(
  hamr_SW_CASE_Monitor_Req_thr_Impl_Impl this,
  String str) {
  hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge_Api_logInfo_(
    SF
    hamr_SW_CASE_Monitor_Req_thr_Impl_Impl_api_(this),
    str);
}

Unit api_logDebug__hamr_SW_CASE_Monitor_Req_thr_Impl_Impl(
  hamr_SW_CASE_Monitor_Req_thr_Impl_Impl this,
  String str) {
  hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge_Api_logDebug_(
    SF
    hamr_SW_CASE_Monitor_Req_thr_Impl_Impl_api_(this),
    str);
}

Unit api_logError__hamr_SW_CASE_Monitor_Req_thr_Impl_Impl(
  hamr_SW_CASE_Monitor_Req_thr_Impl_Impl this,
  String str) {
  hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge_Api_logError_(
    SF
    hamr_SW_CASE_Monitor_Req_thr_Impl_Impl_api_(this),
    str);
}
