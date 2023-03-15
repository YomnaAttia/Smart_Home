/*
 * Bleutooth_Interface.h
 *
 * Created: 12/03/2023 02:51:51 م
 *  Author: HP
 */ 


#ifndef BLEUTOOTH_INTERFACE_H_
#define BLEUTOOTH_INTERFACE_H_

#include "Type_Definitions.h"
#include "BitMath.h"
#include "Bluetooth_Config.h"
#include "USART_Interface.h"

void BT_Init(void);
void BT_Send(U8 Data);
void BT_Send_String(char *Data);
  U8 BT_Receive(void);



#endif /* BLEUTOOTH_INTERFACE_H_ */