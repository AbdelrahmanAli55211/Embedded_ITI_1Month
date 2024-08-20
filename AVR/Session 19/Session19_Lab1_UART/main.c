/*
 * main.c
 *
 *  Created on: Aug 2, 2024
 *      Author: DELL
 */
#include"LIB/STD_Types.h"
#include"LIB/BIT_Math.h"
#include"MCAL/MDIO/DIO_Interface.h"
#include "MCAL/MDIO/DIO_Config.h"
#include "MCAL/MUART/UART_Interface.h"
#include "MCAL/MUART/UART_Config.h"
#include"util/delay.h"
int main()
{
	u8 L_u8RecievedData=0;
	MUART_voidUartInit();
	MDIO_void_SetDir(DIO_PORTA,PINA0,PIN_OUTPUT);
	MDIO_void_SetDir(DIO_PORTA,PINA1,PIN_OUTPUT);
	MDIO_void_SetDir(DIO_PORTD,PIND0,PIN_INPUT);
	MDIO_void_SetDir(DIO_PORTD,PIND1,PIN_OUTPUT);
	MUART_voidUartSendString("Ahmed");
	while(1)
	{
		L_u8RecievedData=MUART_u8UartRecieve();
		if(L_u8RecievedData=='a')
			MDIO_void_PinToggle(DIO_PORTA,PINA0);
		else if(L_u8RecievedData=='b')
			MDIO_void_PinToggle(DIO_PORTA,PINA1);
	}
	return 0;
}
