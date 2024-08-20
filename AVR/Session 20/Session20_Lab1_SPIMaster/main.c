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

void main(void)
{
	MDIO_void_SetDir(DIO_PORTA,PINA0,PIN_INPUT);
	MDIO_void_SetDir(DIO_PORTA,PINA1,PIN_INPUT);
	MDIO_void_SetDir(DIO_PORTA,PINA2,PIN_INPUT);

	MDIO_void_PinWrite(DIO_PORTA,PINA0,HIGH);
	MDIO_void_PinWrite(DIO_PORTA,PINA1,HIGH);
	MDIO_void_PinWrite(DIO_PORTA,PINA2,HIGH);

	MSPI_voidInit();

	while(1)
	{
		if(MDIO_u8_PinRead(DIO_PORTA,PINA0)==0)
		{
			MSPI_voidMasterSendData('A');
			while(MDIO_u8_PinRead(DIO_PORTA,PINA0)==0);
		}
		else if(MDIO_u8_PinRead(DIO_PORTA,PINA1)==0)
		{
			MSPI_voidMasterSendData('B');
			while(MDIO_u8_PinRead(DIO_PORTA,PINA1)==0);
		}
		else if(MDIO_u8_PinRead(DIO_PORTA,PINA2)==0)
		{
			MSPI_voidMasterSendData('C');
			while(MDIO_u8_PinRead(DIO_PORTA,PINA2)==0);
		}
		else
		{

		}
	}

}
