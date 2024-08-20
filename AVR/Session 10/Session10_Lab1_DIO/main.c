/*
 * main.c
 *
 *  Created on: Aug 2, 2024
 *      Author: DELL
 */
#include"LIB/STD_Types.h"
#include"LIB/BIT_Math.h"
#include"HAL/HLED/LED_Interface.h"
#include"HAL/HLED/LED_Config.h"
#include"MCAL/MDIO/DIO_Interface.h"
#include"util/delay.h"
int main()
{
	HLED_void_ToggleLed(PORT_NUM,PIN_NUM);
	return 0;
}
