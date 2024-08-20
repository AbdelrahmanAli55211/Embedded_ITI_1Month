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
void HLED_void_ToggleLed1(void)
{
	MDIO_void_PinToggle(DIO_PORTA,PINA0);
}
void HLED_void_ToggleLed2(void)
{
	MDIO_void_PinToggle(DIO_PORTA,PINA1);
}


