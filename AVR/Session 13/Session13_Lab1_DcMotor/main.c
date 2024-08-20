/*
 * main.c
 *
 *  Created on: Aug 2, 2024
 *      Author: DELL
 */
#include"LIB/STD_Types.h"
#include"LIB/BIT_Math.h"
#include"MCAL/MDIO/DIO_Interface.h"
#include"util/delay.h"
int main()
{
	MDIO_void_SetDir(DIO_PORTA,PINA0,PIN_OUTPUT);
	MDIO_void_SetDir(DIO_PORTA,PINA1,PIN_OUTPUT);

	while(1)
	{
		MDIO_void_PinWrite(DIO_PORTA,PINA0,HIGH);
		MDIO_void_PinWrite(DIO_PORTA,PINA1,LOW);
		_delay_ms(3000);
		MDIO_void_PinWrite(DIO_PORTA,PINA0,LOW);
		MDIO_void_PinWrite(DIO_PORTA,PINA1,LOW);
		_delay_ms(3000);
		MDIO_void_PinWrite(DIO_PORTA,PINA0,LOW);
		MDIO_void_PinWrite(DIO_PORTA,PINA1,HIGH);
		_delay_ms(3000);
		MDIO_void_PinWrite(DIO_PORTA,PINA0,LOW);
		MDIO_void_PinWrite(DIO_PORTA,PINA1,LOW);
		_delay_ms(3000);


	}
}
