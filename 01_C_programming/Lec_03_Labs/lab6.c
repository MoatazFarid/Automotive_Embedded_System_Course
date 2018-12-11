/**
Write a program in C to calculate the
factorial of an integer entered by the
user using while loop
*/

/*
factorial of 8 is 8*7*6*5*4*3*2*1
*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
	int no,fac=1;
	printf("Enter the # :");
	scanf("%d",&no);

	for (int i = 1; i <= no; ++i)
	{
		fac *=i;
	}
	printf("Factorial %d is %d \n",no,fac );
	return 0;
}