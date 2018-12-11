/*
Write a C code that will ask the user
to enter two values and print their
summation and multiplication.
*/

#include<stdio.h>
int main(int argc, char const *argv[])
{
	int x,y;
	printf("Enter 2 values\n");
	scanf("%d %d",&x,&y);
	printf("SUm = %d\n",x+y);
	printf("multiplication = %d\n",x*y);

	return 0;
}