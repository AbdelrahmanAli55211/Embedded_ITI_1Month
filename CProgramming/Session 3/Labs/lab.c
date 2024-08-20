#include "stdio.h"
void lab1(int x,int y);
int max(int n1,int n2,int n3);
int mini(int n1,int n2,int n3);
int sum(int num);
int sum2(int num);
void main(void)
{
	int x;
	printf("Enter problem number: ");
	scanf("%d",&x);
	switch(x)
	{
	case 1:
		int num1,num2;
		printf("Enter two numbers: ");
		scanf("%d%d",&num1,&num2);
		lab1(num1,num2);
		break;
	case 2:
		{
			int n1,n2,n3;
			printf("Enter 3 numbers: ");
			scanf("%d%d%d",&n1,&n2,&n3);
			printf("The max: %d\n",max(n1,n2,n3));
			printf("The min=%d\n",mini(n1,n2,n3));
		}
		break;
	case 3:
		{
			int num;
			printf("Enter a number: ");
			scanf("%d",&num);
			printf("%d",sum2(num));
		}
		break;
	case 4:
		{
			int arr[10];
			for (int i=0;i<10;i++)
			{
				printf("Please Enter a number: ");
				scanf("%d",arr+i);
			}
			for (int i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
			{
				printf("%d\n",*(arr+i));
			}
		}
		break;
	case 5:
		{
			int arr[10],sum=0;
			for (int i=0;i<10;i++)
			{
				printf("Please Enter a number: ");
				scanf("%d",arr+i);
			}
			for (int i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
			{
				sum+=arr[i];
			}
			printf("the sum=%d\nthe avg=%d",sum,sum/10);
		}

	}
	
}

void lab1(int x,int y)
{
	printf("num1+num2=%d\n",x+y);
	printf("num1*num2=%d\n",x*y);
	printf("num1 %% num2=%d\n",x%y);
}
int max(int n1,int n2,int n3)
{
	if (n1>n2)
	{
		if(n1>n3)
			return n1;
		else
			return n3;
	}
	else
	{
		if(n2>n3)
			return n2;
		else
			return n3;
	}
}
int mini(int n1,int n2,int n3)
{
	int result;
	if (n1<n2)
	{
		if(n1<n3)
			result=n1;
		else
			result= n3;
	}
	else
	{
		if(n2<n3)
			result=n2;
		else
			result=n3;
	}
	return result;
}
int sum(int n)
{
//we can make it using a static var (look at sum2)
	if(n==0)
		return 0;
	else
		return n+sum(n-1);
}
int sum2(int n)
{
	static int sum=0;
	if(n==0)
		return sum;
	else
		sum+=n;
		n--;
		sum2(n);
}