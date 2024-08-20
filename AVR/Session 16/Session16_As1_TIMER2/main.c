/*
 * main.c
 *
 *  Created on: Aug 12, 2024
 *      Author: DELL
 */
#include "LIB/STD_Types.h"
#include "LIB/BIT_Math.h"
#include "MCAL/MDIO/DIO_Interface.h"
#include "MCAL/MDIO/DIO_Config.h"
#include "MCAL/MGINT/GINT_Interface.h"
#include "MCAL/MTIMER2/TIMER2_Config.h"
#include "MCAL/MTIMER2/TIMER2_Interface.h"
void voidToggleLed(void);
void main(void)
{
	MDIO_void_SetDir(DIO_PORTA,PINA0,PIN_OUTPUT);
	TMR2_VoidInit();
	TMR2_OFV_SetCallBack(voidToggleLed);
	TMR2_VoidOVFInterruptEnable();
	TMR2_VoidSetPreload(192);
	MGINT_voidGlobalIntEnable();
	while(1)
	{

	}

}
void voidToggleLed(void)
{
	static u32 L_u32Count=0;
	L_u32Count++;
	if(L_u32Count==3907)
	{
		MDIO_void_PinToggle(DIO_PORTA,PINA0);
		L_u32Count=0;
		TMR2_VoidSetPreload(192);
	}
}
