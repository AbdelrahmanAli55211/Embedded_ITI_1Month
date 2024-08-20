/*
 * 7SEG_Interface.h
 *
 *  Created on: Aug 3, 2024
 *      Author: DELL
 */

#ifndef HAL_H7SEG_7SEG_INTERFACE_H_
#define HAL_H7SEG_7SEG_INTERFACE_H_

#define COMMON_ANODE 0
#define COMMON_CATHODE 1

#define zero 0x3f
#define one 0x06
#define two 0x5b
#define three 0x4f
#define four 0x66
#define five 0x6d
#define six 0x7d
#define seven 0x07
#define eight 0x7f
#define nine 0x6f

void H7SEG_void_NumbersDisplay(u8 A_u8_PortNum);
void H7SEG_void_SingleNumberDisplay(u8 A_u8_PortNum,u8 A_u8_Number);
#endif /* HAL_H7SEG_7SEG_INTERFACE_H_ */
