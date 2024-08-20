/*
 * main.c
 *
 *  Created on: Aug 3, 2024
 *      Author: DELL
 */
#include "LIB/STD_Types.h"
#include "LIB/BIT_Math.h"
#include "HAL/HPushButton/Pb_Interface.h"
#include "HAL/HPushButton/Pb_Config.h"
#include "MCAL/MDIO/DIO_Interface.h"
#include "MCAL/MDIO/DIO_Config.h"

int main(void)
{
	MDIO_void_SetDir(DIO_PORTA,PINA0,PIN_OUTPUT);
	while(HIGH)
	{
		if(HPushButton_void_PinStat(Switch_Port,Switch_Pin)==Pushed)
		{
			MDIO_void_PinWrite(DIO_PORTA,PINA0,HIGH);
		}
		else
		{
			MDIO_void_PinWrite(DIO_PORTA,PINA0,LOW);
		}
	}
	return 0;
}

