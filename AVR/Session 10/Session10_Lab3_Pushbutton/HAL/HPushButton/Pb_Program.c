/*
 * Pb_Program.c
 *
 *  Created on: Aug 3, 2024
 *      Author: DELL
 */
#include "../../LIB/STD_Types.h"
#include "../../LIB/BIT_Math.h"
#include "../../MCAL/MDIO/DIO_Interface.h"
#include "../../MCAL/MDIO/DIO_Config.h"
#include "Pb_Interface.h"
#include "Pb_Private.h"
#include "Pb_Config.h"
#include "util/delay.h"

u8 HPushButton_void_PinStat(u8 A_u8_PortNum,u8 A_u8_PinPbNum)
{
	u8 L_u8_PinStat;
	MDIO_void_SetDir(A_u8_PortNum,A_u8_PinPbNum,PIN_INPUT);
	if (Internal_Pull_Up==Activated)
	{
		MDIO_void_PinWrite(A_u8_PortNum,A_u8_PinPbNum,HIGH);
		if(MDIO_u8_PinRead(A_u8_PortNum,A_u8_PinPbNum)==LOW)
		{
			_delay_ms(1);
			if(MDIO_u8_PinRead(A_u8_PortNum,A_u8_PinPbNum)==LOW)
			{
				L_u8_PinStat= Pushed;
			}
		}
		else if(MDIO_u8_PinRead(A_u8_PortNum,A_u8_PinPbNum)==HIGH)
		{
			_delay_ms(1);
			if(MDIO_u8_PinRead(A_u8_PortNum,A_u8_PinPbNum)==HIGH)
			{
				L_u8_PinStat= Non_Pushed;
			}
		}
		else
		{

		}

	}
	else
	{
		if(Pull_Stat==Pull_Up)
		{
			if(MDIO_u8_PinRead(A_u8_PortNum,A_u8_PinPbNum)==LOW)
			{
				_delay_ms(1);
				if(MDIO_u8_PinRead(A_u8_PortNum,A_u8_PinPbNum)==LOW)
				{
					L_u8_PinStat= Pushed;
				}
			}
			else if(MDIO_u8_PinRead(A_u8_PortNum,A_u8_PinPbNum)==HIGH)
			{
				_delay_ms(1);
				if(MDIO_u8_PinRead(A_u8_PortNum,A_u8_PinPbNum)==HIGH)
				{
					L_u8_PinStat= Non_Pushed;
				}
			}
			else
			{

			}
		}
		else
		{
			if(MDIO_u8_PinRead(A_u8_PortNum,A_u8_PinPbNum)==LOW)
			{
				_delay_ms(1);
				if(MDIO_u8_PinRead(A_u8_PortNum,A_u8_PinPbNum)==LOW)
				{
					L_u8_PinStat= Non_Pushed;
				}
			}
			else if(MDIO_u8_PinRead(A_u8_PortNum,A_u8_PinPbNum)==HIGH)
			{
				_delay_ms(1);
				if(MDIO_u8_PinRead(A_u8_PortNum,A_u8_PinPbNum)==HIGH)
				{
					L_u8_PinStat= Pushed;
				}
			}
			else
			{

			}
		}
	}
	return L_u8_PinStat;
}
