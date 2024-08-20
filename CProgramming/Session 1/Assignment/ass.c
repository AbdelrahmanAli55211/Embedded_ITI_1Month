#include "stdio.h"
void main(void)
{
	int x;
	printf("Enter the problem number: ");
	scanf("%d",&x);
	switch(x)
	{
	case 1: //Assignment 1:Drawing a pyramid
		{
			printf("     *\n    ***\n   *****\n  *******\n *********\n***********");
		}
		break; 
	case 2: //Assignment 2 scan and print in revese
		{
			int num1,num2,num3;
			printf("Please enter number 1: ");
			scanf("%d",&num1);
			printf("Please enter number 2: ");
			scanf("%d",&num2);
			printf("Please enter number 3: ");
			scanf("%d",&num3);

			printf("number 3: %d\nnumber 2: %d\nnumber 1: %d",num3,num2,num1);
		}
		break;
	case 3:	//Assignment 3: operations on 2 numbers
		{
			int a,b;
			printf("Please Enter number a: ");
			scanf("%d",&a);
			printf("Please Enter number b: ");
			scanf("%d",&b);

			printf("a + b = %d\n",a+b);
			printf("a - b = %d\n",a-b);
			printf("a & b = %d\n",a&b);
			printf("a | b = %d\n",a|b);
			printf("a + b = %d\n",a^b);
		}
	}
}