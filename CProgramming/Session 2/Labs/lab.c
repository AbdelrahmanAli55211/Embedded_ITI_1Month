#include "stdio.h"
void main(void)
{
	int x;
	printf("Enter the problem number: ");
	scanf("%d",&x);
	switch(x)
	{
	case 1:
		{
			int num1=15,num2=20;
			printf("z=%d\n",num1&num2);
			printf("k=%d\n",num1|num2);
			printf("l=%d\n",num1^num2);
			printf("m=%d\n",num1>>3);
			printf("n=%d\n",num2<<4);
		}
		break;
	case 2:
		{
			int age;
			printf("Welcome to driving check system\n");
			printf("Please enter your age to check if you can drive or not: ");
			scanf("%d",&age);
			if(age>=16)
			{
				printf("Yes, you can drive");
			}
			else
			{
				printf("No, You can't drive");
			}
		}
		break;
	case 3:
		{
			int grade;
			printf("Please enter your grades: ");
			scanf("%d",&grade);
			if (grade>0 && grade<50)
				printf("failed");
			else if(grade>=50 && grade<65)
				printf("Pass");
			else if(grade>=65 && grade<75)
				printf("Good");
			else if(grade>=75 && grade<85)
				printf("Very Good");
			else
				printf("Excellent");
		}
		break;
	case 4:
		{
			int id;
			printf("Please enter your id: ");
			scanf("%d",&id);
			switch(id)
			{
			case 1234:
				{
					printf("Welcome Ahmed");
				}
				break;
			case 5677:
				{
					printf("Welcome Yousef");
				}
				break;
			case 1145:
				{
					printf("Welcome Mina");
				}
				break;
			default:
				{
					printf("Wrong ID");
				}
			}
		
		}
		break;
	case 5:
		{
			int num1,num2;
			char op;
			printf("Enter two values: ");
			scanf("%d%d",&num1,&num2);
			fflush(stdin);
			printf("Enter operation: ");
			scanf (" %c" , &op);
			switch(op)
			{
			case '+':
				{
				printf("result=%d",num1+num2);
				}
				break;
			case '-':
				{
					printf("result=%d",num1-num2);
				}
				break;
			case '*':
				{
					printf("result=%d",num1*num2);
				}
				break;
			case '/':
				{
					printf("result=%d",num1/num2);
				}
				break;
			default:
				printf("Error");
			}
		}
		break;
	case 6:
		{
			for(int i=0;i<=20;i++)
			{
				if(i%2==0)
					printf("%d\n",i);
			}
		}
		break;
	case 7:
		{
			int num,sum=0;
			for(int i=0;i<10;i++)
			{
				printf("Enter number %d: ",i+1);
				scanf("%d",&num);
				sum+=num;
			}
			printf("%d",sum);
		}
		break;
	case 8:
		{
			//assignment -> factorial + triangle nested loop
			

		}
		break;
		}
		
}