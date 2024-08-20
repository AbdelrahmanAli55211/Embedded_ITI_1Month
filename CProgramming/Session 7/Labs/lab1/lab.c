#include "stdio.h"
#include "stdint.h"

void main(void)
{
	int prob_num;
	printf("Enter the problem number: ");
	scanf("%d",&prob_num);
	switch(prob_num)
	{
	case 1:
		{
			union a
			{
				int i;
				char ch[2];
			};
			union a u;
			u.ch[0]=3;
			u.ch[1]=2;
			printf("%d,%d,%d\n",u.ch[0],u.ch[1],u.i); //3,2,515
			//when you write on a member of struct or union it will make the rest members or the rest bytes to be 0
		}
		break;
	case 2:
		{
			union var
			{
				int a,b;
			};
			union var v;
			v.a=10;
			v.b=20;
			printf("%d\n",v.a);
			//it will print 20 because the 10 has been overwritten
		}
		break;
	case 3:
		{
			struct value
			{
				int bit1:1;
				int bit3:4;
				int bit4:4;
			}bit={1,2,13};
			//bit 1 will take the first bit of 1 which will represent -1
			//bit 3 will take the first four bits of 2 which will represent 2
			//bit 4 will take the first four bits of 13 which will represent -3
			printf("%d %d %d",bit.bit1,bit.bit3,bit.bit4);
		}
		break;
	case 4:
		{
			struct value
			{
				int bit1:1;
				int bit3:4;
				int bit4:4;
			}bit;
			printf("%d",sizeof(bit));
		}
		break;
	case 5:
		{
			enum days {mon=-1,tue,wed=6,thu,fri,sat};
			printf("%d %d %d %d %d %d",mon,tue,wed,thu,fri,sat);
		}
	}
}