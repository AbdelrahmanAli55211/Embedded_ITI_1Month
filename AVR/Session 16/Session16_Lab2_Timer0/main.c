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
void voidToggleLed(void);
void main(void)
{
	MDIO_void_SetDir(DIO_PORTA,PINA0,PIN_OUTPUT);
	TMR0_VoidInit();
	TMR0_OCM_SetCallBack(voidToggleLed);
	TMR0_VoidOCMInterruptEnable();
	TMR0_VoidSetOCMValue(200);
	MGINT_voidGlobalIntEnable();
	while(1)
	{

	}

}
void voidToggleLed(void)
{
	static u32 L_u32Count=0;
	L_u32Count++;
	if(L_u32Count==5000)
	{
		MDIO_void_PinToggle(DIO_PORTA,PINA0);
		L_u32Count=0;
		TMR0_VoidSetPreload(192);
	}
}
