/**Write a c code that defines a structure for
employees that contains his salary, bonus and
deductions. The program shall ask the user to
enter these information for three employees (
Ahmed, Waleed and Amr). Then the program
will print the total value shall be supplied by
finance team.
*/

//			Algorithm
//	1.	define a structue employee withe elements salary,bonus,deductions
//	2.	create 3 objects for 3 employee Ahmed , Waleed , Amr
//	2.	make a loop to asking the user to fill the data
#include <stdio.h>

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

struct employee{
	u32 salary;
	u32 bonus;
	u32 deductions;
};

void main(int argc, char const *argv[])
{
	struct employee ahmed;
	struct employee amr;
	struct employee waleed;

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