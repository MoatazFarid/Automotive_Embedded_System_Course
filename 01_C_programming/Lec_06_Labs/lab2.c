/*Write a C code that ask the user to enter 2
values and save them in two variables, then
the program sends these variables by address
to a function that returns the summation of
them. The program then prints the result.*/

#include<stdio.h>
int sum(int *a , int *b){
	return *a + *b;
}
int main(int argc, char const *argv[])
{
	int a,b;
	printf("ENter the 2 numbers \n");
	scanf("%d %d",&a,&b);
	int sumv = sum(&a,&b);
	printf("%d\n", sumv );
	return 0;
}