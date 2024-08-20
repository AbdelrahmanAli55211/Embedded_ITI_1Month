/*
 * LED_Program.c
 *
 *  Created on: Aug 2, 2024
 *      Author: DELL
 */
#include"../../LIB/STD_Types.h"
#include"../../LIB/BIT_Math.h"
#include"../../MCAL/MDIO/DIO_Config.h"
#include"../../MCAL/MDIO/DIO_Interface.h"
#include "LED_Interface.h"
#include "LED_Config.h"
#include"util/delay.h"
void HLED_void_LedAnimation1(void)
{
	while(1)
	{
		MDIO_void_PinWrite(DIO_PORTA,PINA0,HIGH);
		_delay_ms(1000);
		MDIO_void_PinWrite(DIO_PORTA,PINA1,HIGH);
		_delay_ms(1000);
		MDIO_void_PinWrite(DIO_PORTA,PINA2,HIGH);
		_delay_ms(1000);
		MDIO_void_PinWrite(DIO_PORTA,PINA3,HIGH);
		_delay_ms(1000);
		MDIO_void_PinWrite(DIO_PORTA,PINA4,HIGH);
		_delay_ms(1000);
		MDIO_void_PinWrite(DIO_PORTA,PINA5,HIGH);
		_delay_ms(1000);
		MDIO_void_PinWrite(DIO_PORTA,PINA6,HIGH);
		_delay_ms(1000);
		MDIO_void_PinWrite(DIO_PORTA,PINA7,HIGH);
		_delay_ms(1000);
		MDIO_void_PinWrite(DIO_PORTA,PINA0,HIGH);
		_delay_ms(1000);
		MDIO_void_PinWrite(DIO_PORTA,PINA1,LOW);
		MDIO_void_PinWrite(DIO_PORTA,PINA2,LOW);
		MDIO_void_PinWrite(DIO_PORTA,PINA3,LOW);
		MDIO_void_PinWrite(DIO_PORTA,PINA4,LOW);
		MDIO_void_PinWrite(DIO_PORTA,PINA5,LOW);
		MDIO_void_PinWrite(DIO_PORTA,PINA6,LOW);
		MDIO_void_PinWrite(DIO_PORTA,PINA7,LOW);
	}
}
void HLED_void_LedAnimation2(void)
{
	while(1)
	{
		MDIO_void_PinWrite(DIO_PORTA,PINA0,HIGH);
		_delay_ms(1000);
		MDIO_void_PinWrite(DIO_PORTA,PINA0,LOW);
		_delay_ms(1000);
		MDIO_void_PinWrite(DIO_PORTA,PINA1,HIGH);
		_delay_ms(1000);
		MDIO_void_PinWrite(DIO_PORTA,PINA1,LOW);
		_delay_ms(1000);
		MDIO_void_PinWrite(DIO_PORTA,PINA2,HIGH);
		_delay_ms(1000);
		MDIO_void_PinWrite(DIO_PORTA,PINA2,LOW);
		_delay_ms(1000);
		MDIO_void_PinWrite(DIO_PORTA,PINA3,HIGH);
		_delay_ms(1000);
		MDIO_void_PinWrite(DIO_PORTA,PINA3,LOW);
		_delay_ms(1000);
		MDIO_void_PinWrite(DIO_PORTA,PINA4,HIGH);
		_delay_ms(1000);
		MDIO_void_PinWrite(DIO_PORTA,PINA4,LOW);
		_delay_ms(1000);
		MDIO_void_PinWrite(DIO_PORTA,PINA5,HIGH);
		_delay_ms(1000);
		MDIO_void_PinWrite(DIO_PORTA,PINA5,LOW);
		_delay_ms(1000);
		MDIO_void_PinWrite(DIO_PORTA,PINA6,HIGH);
		_delay_ms(1000);
		MDIO_void_PinWrite(DIO_PORTA,PINA6,LOW);
		_delay_ms(1000);
		MDIO_void_PinWrite(DIO_PORTA,PINA7,HIGH);
		_delay_ms(1000);
		MDIO_void_PinWrite(DIO_PORTA,PINA7,LOW);
		_delay_ms(1000);
	}
}


