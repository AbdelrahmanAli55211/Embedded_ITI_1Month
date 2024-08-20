#include "stdio.h"
struct emp
{
	float salary;
	float bonus;
	float deduction;
};
void main(void)
{
	float sum=0;
	struct emp emp1,emp2,emp3;
	struct emp arr[3]={emp1,emp2,emp3};
	char name[3][50]={"Ahmed","Amr","Waleed"};
	//put the names as an element inside struct will be better
	for (int i=0;i<3;i++)
	{
		printf("Enter %s Salary: ",name[i]);
		scanf("%f",&arr[i].salary);
		printf("Enter %s Bonus: ",name[i]);
		scanf("%f",&arr[i].bonus);
		printf("Enter %s Deduction: ",name[i]);
		scanf("%f",&arr[i].deduction);
	}
	for(int i=0;i<3;i++)
	{
		sum+=arr[i].salary+arr[i].bonus-arr[i].deduction;
	}
	printf("Total value needed: %0.0f",sum);
}