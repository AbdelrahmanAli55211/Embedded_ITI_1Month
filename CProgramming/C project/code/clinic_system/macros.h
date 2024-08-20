/*
 * macros.h
 *
 *  Created on: Jul 31, 2024
 *      Author: DELL
 */

#ifndef MACROS_H_
#define MACROS_H_
#define Dprintf(...); { fflush(stdin);\
					fflush(stdout);\
					printf(__VA_ARGS__);\
					fflush(stdin);\
					fflush(stdout);}

typedef struct
{
	u8 name[50];
	u32 age;
	u8 gender;
	u32 id;
	u32 slot_num;
}patient;

typedef struct
{
	char name[50];
	u32 slot_num;
}slot;


#define Add_new_patient 1
#define Edit_Patient 2
#define Reserve_Slot 3
#define Cancel_Slot 4
#define View_All_Patients 5
#define Exit_Admin 6

#define View_Patient 1
#define View_Reservations 2
#define Exit_User 3

#define slots_number 5
#define max_patient_size 50
#define Loop_True 1
#define Loop_False 0
#define Loop_Start 0
#define Didnt_Reserve 0
#define Not_Found 500
#define Cancel_Res 0
#define Slot_Now_Available 0
#define Count_Initial 0
#define All_Counted 0

#endif /* MACROS_H_ */
