/*
 * main.c
 *
 *  Created on: Aug 12, 2024
 *      Author: DELL
 */
#include "LIB/STD_Types.h"
#include "LIB/BIT_Math.h"
#include "MCAL/MTIMER0/TIMER0_Interface.h"
#include "MCAL/MTIMER0/TIMER0_Config.h"
#include "MCAL/MDIO/DIO_Interface.h"
#include "MCAL/MDIO/DIO_Config.h"
#include "MCAL/MGINT/GINT_Interface.h"
#include "util/delay.h"
void main(void)
{
	MDIO_void_SetDir(DIO_PORTB,PINB3,PIN_OUTPUT);
	TMR0_VoidInit();
	while(1)
	{
		for(u16 i=0;i<255;i+=10)
		{
			TMR0_VoidSetOCMValue(i);
			_delay_ms(100);
		}
	}

}

