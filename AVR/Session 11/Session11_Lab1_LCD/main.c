/*
 * main.c
 *
 *  Created on: Aug 4, 2024
 *      Author: DELL
 */


#include "LIB/STD_Types.h"
#include "LIB/BIT_Math.h"
#include "HAL/HLCD/LCD_Config.h"
#include "HAL/HLCD/LCD_Interface.h"
#include "util/delay.h"
u8 G_u8FirstSpChar[]={0b00100, 0b00100, 0b11111, 0b00000, 0b00000, 0b00000, 0b00000, 0b00000};
u8 G_u8SecondSpChar[]={0b00100, 0b00100, 0b11111, 0b00000, 0b00000, 0b11111, 0b00000, 0b00000};
u8 G_u8ThirdSpChar[]={0b00100, 0b00100, 0b11111, 0b00000, 0b00000, 0b11111, 0b11111, 0b00000};

void main(void)
{
	HLCD_voidInit();
	//HLCD_voidSendString("Abdelrahman");
	HLCD_voidSendSpecial(G_u8FirstSpChar,LCD_CgramBlock1,LCD_ROW1,LCD_COL1);
	HLCD_voidSendSpecial(G_u8SecondSpChar,LCD_CgramBlock2,LCD_ROW1,LCD_COL2);
	HLCD_voidSendSpecial(G_u8ThirdSpChar,LCD_CgramBlock3,LCD_ROW1,LCD_COL3);

	while(1)
	{

	}
}
