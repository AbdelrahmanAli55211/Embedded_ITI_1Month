/*
 * main.c
 *
 *  Created on: Aug 2, 2024
 *      Author: DELL
 */
#include"LIB/STD_Types.h"
#include"LIB/BIT_Math.h"
#include "MCAL/MADC/ADC_Interface.h"
#include "MCAL/MADC/ADC_Config.h"
#include "MCAL/MGINT/GINT_Interface.h"
#include "MCAL/MGINT/GINT_Config.h"
#include "MCAL/MEXTI/EXTI_Interface.h"
#include "MCAL/MEXTI/EXTI_Config.h"
#include "HAL/HLCD/LCD_Interface.h"
#include "HAL/HLCD/LCD_Config.h"
#include "HAL/HLM35/LM35_Interface.h"
#include "HAL/HLM35/LM35_Config.h"
#include "util/delay.h"
#include "stdlib.h"

void HLM35_voidTempDisplay(void);
int main()
{
	//u16 L_u16ReadValue;
	//u8 L_u8TempChar[10];
	HLCD_voidInit();
	HLM35_voidInit();
	if(ADC_OuputMode==ADC_BOOLING)
	{
			while(1)
			{
			MADC_voidStartConv();
			HLCD_voidSetCursor_DDRAM(LCD_ROW1,LCD_COL1);
			HLM35_voidTempDisplay();
			//converting temp into ascii char
			/*
			itoa(L_u16ReadValue,L_u8TempChar,10);

			HLCD_voidSetCursor_DDRAM(LCD_ROW1,LCD_COL1);
			HLCD_voidSendString("Temp=");
			HLCD_voidSendString(L_u8TempChar);
			*/
			_delay_ms(10);
			}
	}
	else if (ADC_OuputMode==ADC_INTERRUPT)
	{
		//callback but outside the while 1 then start conv then delay
		MADC_voidAdcCallBack(HLM35_voidTempDisplay);
		MGINT_voidGlobalIntEnable();
		while(1)
		{
			HLCD_voidSetCursor_DDRAM(LCD_ROW1,LCD_COL1);
			MADC_voidStartConv();
			_delay_ms(10);
		}

	}
	return 0;
}

void HLM35_voidTempDisplay(void)
{
	u16 L_u16ReadVaule=MADC_u16ReadOut(),L_u16TempValue;
	if(ADC_RefVoltage==ADC_AVCC)
	{
		L_u16TempValue=0.4882*L_u16ReadVaule;
	}
	else if(ADC_RefVoltage==ADC_IntVoltage)
	{
		L_u16TempValue=0.25*L_u16ReadVaule;
	}
	else if (ADC_RefVoltage==ADC_AREF)
	{
		L_u16TempValue= ((LM35_VREF/1024)*L_u16ReadVaule)/10;
	}
	else
	{

	}
	HLCD_voidSendString("Temp=");
	HLCD_voidSendData(L_u16TempValue/100+48);
	HLCD_voidSendData((L_u16TempValue%100)/10+48);
	HLCD_voidSendData(L_u16TempValue%10+48);

	//Another Displaying method by converting the whole number into string usig itoa function
	//converting temp into ascii char
	/*
				itoa(L_u16ReadValue,L_u8TempChar,10);

				HLCD_voidSetCursor_DDRAM(LCD_ROW1,LCD_COL1);
				HLCD_voidSendString("Temp=");
				HLCD_voidSendString(L_u8TempChar);
	 */
	//You should first include stdlib.h and create an char array to save the string in it (L_u8TempChar)
}

