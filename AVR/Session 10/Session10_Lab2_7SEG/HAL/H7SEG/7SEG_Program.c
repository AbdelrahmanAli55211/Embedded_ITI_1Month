/*
 * 7SEG_Program.c
 *
 *  Created on: Aug 3, 2024
 *      Author: DELL
 */
#include "../../LIB/STD_Types.h"
#include "../../LIB/BIT_Math.h"
#include "../../MCAL/MDIO/DIO_Interface.h"
#include "../../MCAL/MDIO/DIO_Config.h"
#include "7SEG_Interface.h"
#include "7SEG_Private.h"
#include "7SEG_config.h"
#include "util/delay.h"
u8 R_u8_7SEG_NumbersDisplay[10]={zero,one,two,three,four,five,six,seven,eight,nine};
void H7SEG_void_NumbersDisplay(u8 A_u8_PortNum)
{
	u8 L_u8_7SegMode=MODE;
	u32 L_u32_LoopIteration;
	MDIO_void_PortSetDir(A_u8_PortNum,PORT_OUT);
	if(L_u8_7SegMode==COMMON_CATHODE)
	{
		while(1)
		{
			for(L_u32_LoopIteration=0;L_u32_LoopIteration<10;L_u32_LoopIteration++)
			{
				MDIO_void_PortWrite(A_u8_PortNum,R_u8_7SEG_NumbersDisplay[L_u32_LoopIteration]);
				_delay_ms(1000);
			}
		}
	}
	else if(L_u8_7SegMode==COMMON_ANODE)
	{
		while(1)
		{
			for(L_u32_LoopIteration=0;L_u32_LoopIteration<10;L_u32_LoopIteration++)
			{
				MDIO_void_PortWrite(A_u8_PortNum,~R_u8_7SEG_NumbersDisplay[L_u32_LoopIteration]);
				_delay_ms(1000);
			}
		}
	}
	else
	{

	}
}

void H7SEG_void_SingleNumberDisplay(u8 A_u8_PortNum,u8 A_u8_Number)
{
	MDIO_void_PortSetDir(A_u8_PortNum,PORT_OUT);
	if(MODE==COMMON_CATHODE)
	{
		MDIO_void_PortWrite(A_u8_PortNum,A_u8_Number);
	}
	else
	{
		MDIO_void_PortWrite(A_u8_PortNum,~A_u8_Number);
	}
}
