/*
Write a C code to calculate employee
salary in a week based on the his
working hours, hour rate is 50.
The program will ask the user to enter
the working hours, then it will print his
salary.
But if the working hours are less than 40
hours, a 10% deduction will be applied.
*/

/*Algorithm 
1- get the no of hrs 
2- calcaulate deducted value 
	2.1- if # hrs >= 40 then deducted_value = 0
	2.2- else deducted_value = (hrs * RATE) / 10
3- calculate the weekly salary based on the equation weekly_salary = (hrs * RATE) - deducted_value  ;

*/

#include <stdio.h>

#define RATE 50

void main(int argc, char const *argv[])
{
	//Used varialbles 
	int hrs , weekly_salary ,deducted_value ;
	// 1- get the no of hrs 
	printf("ENter the # of hours : ");
	scanf("%d",&hrs);

	// 2- calcaulate deducted value 
	if(hrs >= 40 ){
	// 2.1- if # hrs >= 40 then deducted_value = 0
		deducted_value = 0;
	}else{
		// 2.2- else deducted_value = (hrs * RATE) / 10
		deducted_value = (hrs * RATE) / 10;
	}
	// 3- calculate the weekly salary based on the equation weekly_salary = (hrs * RATE) - deducted_value  ;
	weekly_salary = (hrs * RATE) - deducted_value  ;

	printf("Your weekly salary is = %d\n",weekly_salary);



	
}

