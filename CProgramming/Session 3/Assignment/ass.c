#include "stdio.h"
void read(int arr[],int size);
int max(int arr[],int size);
int min(int arr[],int size);
int pass(int arr[],int size);
int sum(int arr[],int size);
void main(void)
{
	int prob_num;
	printf("Enter problem number: ");
	scanf("%d",&prob_num);
	switch(prob_num)
	{
	case 1: //Assignment 1: printing min and max of array
		{
			int arr[10],mini,maxi;
			read(arr,10);
			mini=min(arr,10);
			maxi=max(arr,10);
			printf("%d\n%d",mini,maxi);
		}
		break;
	case 2: //Assignment 2: Small School
		{
			int class1[10];
			int class2[10];
			int class3[10],grades[3];
			int passed,npassed,maxgrade,lowestgrade,avg,sumi;
			printf("Reading Class1\n");
			read(class1,10);
			printf("Reading Class2\n");
			read(class2,10);
			printf("Reading Class3\n");
			read(class3,10);
			passed=pass(class1,10)+pass(class2,10)+pass(class3,10);
			npassed=30-passed;
			grades[0]=max(class1,10);
			grades[1]=max(class2,10);
			grades[2]=max(class3,10);
			maxgrade=max(grades,3);
			grades[0]=min(class1,10);
			grades[1]=min(class2,10);
			grades[2]=min(class3,10);
			lowestgrade=min(grades,3);
			sumi=sum(class1,10)+sum(class2,10)+sum(class3,10);
			avg=sumi/30;
			printf("%d %d %d %d %d",passed,npassed,maxgrade,lowestgrade,avg);
		}
	}
}

void read(int arr[],int size)
{
	for(int i=0;i<size;i++)
	{
		printf("Enter element %d: ",i+1);
		scanf("%d",arr+i);
	}
}
int max(int arr[],int size)
{
	int max=arr[0];
	for(int i=0;i<size;i++)
	{
		if (arr[i]>max)
			max=arr[i];
	}
	return max;
}
int min(int arr[],int size)
{
	int min=arr[0];
	for(int i=0;i<size;i++)
	{
		if (arr[i]<min)
			min=arr[i];
	}
	return min;
}
int pass(int arr[],int size)
{
	int passed=0;
	for(int i=0;i<size;i++)
	{
		if(arr[i]>50)
			passed+=1;
	}
	return passed;
}
int sum(int arr[],int size)
{
	int sumi=0;
	for (int i=0;i<size;i++)
	{
		sumi+=arr[i];
	}
	return sumi;
}
