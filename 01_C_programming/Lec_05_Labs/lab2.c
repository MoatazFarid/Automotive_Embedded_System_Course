/*Write a C code that ask the user to enter 10
values and save them in an array using a for
loop. Then print the summation and the
average of the values entered.*/

// 1. enter the 10 numbers in arr[i] using a for loop summing the values entered in sum+=arr[i]
// 2. after the loop get the average by sum/10

#include <stdio.h>
int main(int argc, char const *argv[])
{
	int arr[10] ,sum=0 , val;
	for (int i = 0; i < 10; ++i)
	{
		printf("Enter the %d Number : \n", i+1);
		scanf("%d",&val);
		arr[i] = val;
		sum+=val;
	}

	printf("Average : %d\n",(sum/10) );
	return 0;
}