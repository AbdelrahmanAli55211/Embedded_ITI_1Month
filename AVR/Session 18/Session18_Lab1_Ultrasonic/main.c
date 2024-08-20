/*
 * main.c

 *
 *  Created on: Aug 13, 2024
 *      Author: DELL
 */
#include "LIB/STD_Types.h"
#include "LIB/BIT_Math.h"
#include "HAL/HUS/HUS_Interface.h"
#include "HAL/HLCD/LCD_Interface.h"
#include "HAL/HLCD/LCD_Config.h"
#include "MCAL/MTIMER1/TIMER1_Interface.h"
#include "MCAL/MTIMER1/TIMER1_Config.h"
#include "stdlib.h"
#include "util/delay.h"
void main(void)
{
	HLCD_voidInit();
	HUS_voidUsInit();
	MTIMER1_voidTimer1Init();
	MTIMER1_voidOvCallBack(HUS_voidOvCounter);
	MTIMER1_voidOvIntEnable();
	u8 temp[10];
	while(1)
	{
		u16 result=HUS_u16CalcDistancd();
		itoa(result,temp,10);
		HLCD_voidSendString(temp);

		_delay_ms(500);
		HLCD_voidSetCursor_DDRAM(1,1);
	}
}

