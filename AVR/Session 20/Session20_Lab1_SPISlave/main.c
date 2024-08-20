/*
 * main.c
 *
 *  Created on: Aug 2, 2024
 *      Author: DELL
 */
#include"LIB/STD_Types.h"
#include"LIB/BIT_Math.h"
#include "MCAL/MSPI/SPI_Interface.h"
#include "MCAL/MSPI/SPI_Config.h"
#include "MCAL/MDIO/DIO_Interface.h"
#include "MCAL/MDIO/DIO_Config.h"
#include "util/delay.h"
#define NOT_RECIEVED	0
void main(void)
{
	u8 L_u8RecievedData=NOT_RECIEVED;
	MDIO_void_SetDir(DIO_PORTA,PINA0,PIN_OUTPUT);
	MDIO_void_SetDir(DIO_PORTA,PINA1,PIN_OUTPUT);
	MDIO_void_SetDir(DIO_PORTA,PINA2,PIN_OUTPUT);
	MSPI_voidInit();
	while(1)
	{
		L_u8RecievedData=MSPI_u8SlaveRecieveData();
		if(L_u8RecievedData=='A')
			MDIO_void_PinToggle(DIO_PORTA,PINA0);
		else if(L_u8RecievedData=='B')
			MDIO_void_PinToggle(DIO_PORTA,PINA1);
		else if (L_u8RecievedData=='C')
			MDIO_void_PinToggle(DIO_PORTA,PINA2);
		else
		{

		}
	}

}
