/*
 * main.c
 *
 *  Created on: Aug 12, 2024
 *      Author: DELL
 */
#include "LIB/STD_Types.h"
#include "LIB/BIT_Math.h"
#include "MCAL/MTIMER2/TIMER2_Interface.h"
#include "MCAL/MTIMER2/TIMER2_Config.h"
#include "MCAL/MDIO/DIO_Interface.h"
#include "MCAL/MDIO/DIO_Config.h"
#include "MCAL/MGINT/GINT_Interface.h"
#include "util/delay.h"
void main(void)
{
	MDIO_void_SetDir(DIO_PORTD,PIND7,PIN_OUTPUT);
	TMR2_VoidInit();
	while(1)
	{
		for(u16 i=0;i<255;i+=10)
		{
			TMR2_VoidSetOCMValue(i);
			_delay_ms(100);
		}
	}

}

