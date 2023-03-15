/*
 * Bleutooth_Implement.c
 *
 * Created: 12/03/2023 02:52:12 م
 *  Author: HP
 */ //

#include "Bleutooth_Interface.h"

void BT_Init(void)
{
	UART_Init(_8_BIT_DATA, NO_PARITY, _1_END_BIT);
	USART_Send_String("Ready 2 Communicate, Sir");
}

void BT_Send(U8 Data)
{
	USART_Send(Data);
}

void BT_Send_String(char *Data)
{
	USART_Send_String(Data);
}

U8 BT_Receive(void)
{
	U8 Val = USART_Receive();
	return (Val);
}
