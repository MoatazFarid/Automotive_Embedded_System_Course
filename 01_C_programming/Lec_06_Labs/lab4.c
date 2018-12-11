/*Write a C code that calculates the summation of an array using a pointer on its first
element.*/

#include<stdio.h>

int main(int argc, char const *argv[])
{
	int m[10]={10,10,101,1,10,101,61,51,10,3};
	int sum=0;
	for (int i = 0; i < 10; ++i)
	{
		sum+=*(m+i);
	}
	printf("sum = %d\n",sum );
	return 0;
}