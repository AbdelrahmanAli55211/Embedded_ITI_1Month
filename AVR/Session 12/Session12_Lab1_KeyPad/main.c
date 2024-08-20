/*
 * main.c
 *
 *  Created on: Aug 6, 2024
 *      Author: DELL
 */
#include "LIB/STD_Types.h"
#include "HAL/HKP/KP_Interface.h"
#include "HAL/HKP/KP_Config.h"
#include "HAL/HLCD/LCD_Interface.h"
#include "HAL/HLCD/LCD_Config.h"
#include <stdlib.h>
#include "util/delay.h"

#define InitialValue 0
#define AsciiNumbersStart 48
#define NumberIsEntered	1
#define DECIMAL	10
extern u8 G_u8PressedValue;
int main(void)
{
	HKP_voidKpInit();
	HLCD_voidInit();
	u8 L_u8Data1=InitialValue,L_u8Data2=InitialValue,L_u8Op,L_u8PressedValue=NoValueEntered,L_u8Data1Flag=InitialValue,L_u8Data2Flag=InitialValue,L_u8Result=InitialValue;
	u8 L_u8ResultSt[10];
while(1)
{
	HLCD_voidSetCursor_DDRAM(LCD_ROW1,LCD_COL1);
	HLCD_voidSendString("                ");//clearing
	//restoring defaults
	L_u8PressedValue=NoValueEntered;
	L_u8Data1=InitialValue;L_u8Data2=InitialValue;
	L_u8Data1Flag=InitialValue;L_u8Data2Flag=InitialValue;
	L_u8Result=InitialValue;
	HLCD_voidSetCursor_DDRAM(LCD_ROW1,LCD_COL1);
	//starts to get numbers and printing
	while(L_u8PressedValue != '+' && L_u8PressedValue != '-' && L_u8PressedValue != 'x' && L_u8PressedValue != '/' )
	{
		L_u8PressedValue=HKP_u8GetPressedValue();
		G_u8PressedValue=NoValueEntered;
		if(L_u8PressedValue!=NoValueEntered && L_u8PressedValue != '+' && L_u8PressedValue != '-' && L_u8PressedValue != 'x' && L_u8PressedValue != '/')
		{
			L_u8Data1=10*L_u8Data1+L_u8PressedValue-AsciiNumbersStart;
			L_u8Data1Flag=NumberIsEntered;
			HLCD_voidSendData(L_u8PressedValue);
		}
		else if(L_u8PressedValue == '+' || L_u8PressedValue == '-' || L_u8PressedValue == 'x' || L_u8PressedValue == '/' )
		{
			L_u8Op=L_u8PressedValue;
			HLCD_voidSendData(L_u8PressedValue);
		}

	}

	L_u8PressedValue=NoValueEntered;
	while(L_u8PressedValue != '=')
	{
		L_u8PressedValue=HKP_u8GetPressedValue();
		G_u8PressedValue=NoValueEntered;
		if(L_u8PressedValue!=NoValueEntered && L_u8PressedValue != '+' && L_u8PressedValue != '-' && L_u8PressedValue != 'x' && L_u8PressedValue != '/' && L_u8PressedValue != '=')
		{
			L_u8Data2=10*L_u8Data2+L_u8PressedValue-AsciiNumbersStart;
			L_u8Data2Flag=NumberIsEntered;
			HLCD_voidSendData(L_u8PressedValue);
		}
		else if(L_u8PressedValue =='=')
		{
			HLCD_voidSendData('=');
			itoa(L_u8Result,L_u8ResultSt,DECIMAL);
			HLCD_voidSendString(L_u8ResultSt);
			if(L_u8Data1Flag==NumberIsEntered)
			{
				if(L_u8Data2Flag==NumberIsEntered)
				{
					switch(L_u8Op)
					{
					case '+':L_u8Result=L_u8Data1+L_u8Data2;break;
					case '-':L_u8Result=L_u8Data1-L_u8Data2;break;
					case 'x':L_u8Result=L_u8Data1*L_u8Data2;break;
					case '/':L_u8Result=L_u8Data1/L_u8Data2;break;
					}
					itoa(L_u8Result,L_u8ResultSt,DECIMAL);
					HLCD_voidSendString(L_u8ResultSt);
				}
				else
				{
					itoa(L_u8Data1,L_u8ResultSt,10);
					HLCD_voidSendString(L_u8ResultSt);
				}
			}
			else
			{
				HLCD_voidSetCursor_DDRAM(LCD_ROW1,LCD_COL1);
				HLCD_voidSendString("Error");
			}

		}
		else if(L_u8PressedValue!=NoValueEntered)
		{
			L_u8Op=L_u8PressedValue;
			HLCD_voidSendData(L_u8PressedValue);
		}

	}
	_delay_ms(5000); //Waiting 5 seconds and then starts calculating again
}





	return 0;
}

