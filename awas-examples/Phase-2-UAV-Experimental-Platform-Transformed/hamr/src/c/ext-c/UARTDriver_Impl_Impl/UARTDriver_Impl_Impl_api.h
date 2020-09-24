#ifndef UARTDRIVER_IMPL_IMPL_API_H
#define UARTDRIVER_IMPL_IMPL_API_H

#include <all.h>

// This file was auto-generated.  Do not edit

B api_get_recv_data__hamr_Drivers_UARTDriver_Impl_Impl(
  hamr_Drivers_UARTDriver_Impl_Impl this,
  IS_C4F575 value);

B api_get_recv_data__alt__hamr_Drivers_UARTDriver_Impl_Impl(
  hamr_Drivers_UARTDriver_Impl_Impl this,
  Z *numBits,
  U8 *byteArray);

B api_get_MissionCommand__hamr_Drivers_UARTDriver_Impl_Impl(
  hamr_Drivers_UARTDriver_Impl_Impl this,
  IS_C4F575 value);

B api_get_MissionCommand__alt__hamr_Drivers_UARTDriver_Impl_Impl(
  hamr_Drivers_UARTDriver_Impl_Impl this,
  Z *numBits,
  U8 *byteArray);

Unit api_send_send_data__hamr_Drivers_UARTDriver_Impl_Impl(
  hamr_Drivers_UARTDriver_Impl_Impl this,
  IS_C4F575 value);

Unit api_send_send_data__alt__hamr_Drivers_UARTDriver_Impl_Impl(
  hamr_Drivers_UARTDriver_Impl_Impl this,
  Z numBits,
  U8 *byteArray);

Unit api_send_AirVehicleState__hamr_Drivers_UARTDriver_Impl_Impl(
  hamr_Drivers_UARTDriver_Impl_Impl this,
  IS_C4F575 value);

Unit api_send_AirVehicleState__alt__hamr_Drivers_UARTDriver_Impl_Impl(
  hamr_Drivers_UARTDriver_Impl_Impl this,
  Z numBits,
  U8 *byteArray);

Unit api_logInfo__hamr_Drivers_UARTDriver_Impl_Impl(
  hamr_Drivers_UARTDriver_Impl_Impl this,
  String str);

Unit api_logDebug__hamr_Drivers_UARTDriver_Impl_Impl(
  hamr_Drivers_UARTDriver_Impl_Impl this,
  String str);

Unit api_logError__hamr_Drivers_UARTDriver_Impl_Impl(
  hamr_Drivers_UARTDriver_Impl_Impl this,
  String str);

#endif
