/*
Write a C code that ask the user to enter 2
values and save them in two variables, then
the program sends these variables to
function that calculates the summation and
subtraction of them, the function returns the
2 results and return them in two pointers
received as input arguments . The program
then print the 2 results.
*/

#include<stdio.h>
void sum_diff(int x , int y , int * sum , int * diff){
	*sum = x+y;
	*diff = x-y;
}
int main(int argc, char const *argv[])
{
	int x,y,sum,diff;
	printf("ENter 2 numbers : ");
	scanf("%d %d",&x,&y);
	sum_diff(x,y,&sum,&diff);
	printf("Sum = %d\n",sum );
	printf("Diff = %d\n", diff);
	return 0;
}