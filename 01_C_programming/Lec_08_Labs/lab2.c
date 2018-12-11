#include<stdio.h>

typedef unsigned int u32;
typedef unsigned short int u16;
typedef unsigned long int u64;
typedef signed int s32;
typedef signed short int s16;
typedef signed long int s64;
typedef unsigned char u8;
typedef signed char s8;
typedef float f32;
typedef double f64;
typedef long double f128;

typedef struct EmployeeStruct
{
	u16 salary;
	u16 bonus;
	u16 deductions;
}Employee;

void main(void)
{
	Employee ahmed,amr,waleed;
	printf("Ahmed Salary is = ");
	scanf("%d",&ahmed.salary);
	printf("\nAhmed bonus is = ");
	scanf("%d",&ahmed.bonus);
	printf("\nAhmed deductions are = ");
	scanf("%d",&ahmed.deductions);
	
	printf("Amr Salary is = ");
	scanf("%d",&amr.salary);
	printf("\nAmr bonus is = ");
	scanf("%d",&amr.bonus);
	printf("\nAmr deductions are = ");
	scanf("%d",&amr.deductions);

	printf("Waleed Salary is = ");
	scanf("%d",&waleed.salary);
	printf("\nWaleed bonus is = ");
	scanf("%d",&waleed.bonus);
	printf("\nWaleed deductions are = ");
	scanf("%d",&waleed.deductions);

	u16 sum = amr.salary + amr.bonus + waleed.salary + waleed.bonus + ahmed.salary + ahmed.bonus - (ahmed.deductions + amr.deductions + waleed.deductions);
	printf("Total = %d\n",sum );


}