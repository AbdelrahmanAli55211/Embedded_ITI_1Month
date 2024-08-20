/*
 * main.c

 *
 *  Created on: Aug 2, 2024
 *      Author: DELL
 */
#include"LIB/STD_Types.h"
#include"LIB/BIT_Math.h"
#include"MCAL/MDIO/DIO_Interface.h"
#include "MCAL/MDIO/DIO_Config.h"
#include "MCAL/MI2C/I2C_int.h"
#include "MCAL/MI2C/I2C_conf.h"
#include "HAL/HLCD/LCD_Interface.h"
#include "HAL/HLCD/LCD_Config.h"
#include"util/delay.h"
int main()
{
	u8 L_u8Data;
	MTWI_voidSlaveSetAddress(0x51);
	HLCD_voidInit();
	while(1)
	{
		L_u8Data=MTWI_voidSlaveReadData();
		HLCD_voidSendData(L_u8Data);
	}
	return 0;
}
