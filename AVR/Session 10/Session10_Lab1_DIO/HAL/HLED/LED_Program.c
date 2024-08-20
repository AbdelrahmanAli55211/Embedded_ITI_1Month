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
#include"util/delay.h"
void HLED_void_ToggleLed(u8 A_u8_PortNum,u8 A_u8_PinNum)
{
	MDIO_void_SetDir(A_u8_PortNum,A_u8_PinNum,PIN_OUTPUT);
	while(HIGH)
	{
	switch (A_u8_PortNum)
	{
	case DIO_PORTA:
	{
		MDIO_void_PinToggle(DIO_PORTA,A_u8_PinNum);
		_delay_ms(1000);
		break;
	}
	case DIO_PORTB:
	{
		MDIO_void_PinToggle(DIO_PORTB,A_u8_PinNum);
		_delay_ms(1000);
		break;
	}
	case DIO_PORTC:
	{
		MDIO_void_PinToggle(DIO_PORTC,A_u8_PinNum);
		_delay_ms(1000);
		break;
	}
	case DIO_PORTD:
	{
		MDIO_void_PinToggle(DIO_PORTD,A_u8_PinNum);
		_delay_ms(1000);
		break;
	}
	}
	}
}

