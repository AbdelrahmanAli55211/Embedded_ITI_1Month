/*
 * Pb_Interface.h
 *
 *  Created on: Aug 3, 2024
 *      Author: DELL
 */

#ifndef HAL_HPUSHBUTTON_PB_INTERFACE_H_
#define HAL_HPUSHBUTTON_PB_INTERFACE_H_

#define Pushed 1
#define Non_Pushed 0
#define Activated 1
#define Not_Activated 0
u8 HPushButton_void_PinStat(u8 A_u8_PortNum,u8 A_u8_PinPbNum);

#endif /* HAL_HPUSHBUTTON_PB_INTERFACE_H_ */
