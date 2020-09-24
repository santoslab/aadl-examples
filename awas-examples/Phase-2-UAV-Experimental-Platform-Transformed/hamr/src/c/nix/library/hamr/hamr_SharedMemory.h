#ifndef SIREUM_H_hamr_SharedMemory
#define SIREUM_H_hamr_SharedMemory
#include <types.h>

void hamr_SharedMemory_receive(STACK_FRAME art_DataContent result, Z port);

void hamr_SharedMemory_receiveAsync(STACK_FRAME Option_8E9F45 result, Z port);

Z hamr_SharedMemory_create(STACK_FRAME Z id);

B hamr_SharedMemory_sendAsync(STACK_FRAME Z id, Z port, art_DataContent d);

Unit hamr_SharedMemory_remove(STACK_FRAME Z id);

#endif