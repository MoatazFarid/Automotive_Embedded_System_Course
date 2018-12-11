/*
Write a C code that will ask the
user to enter a value then print it.
*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
	int x;
	printf("Enter a #\n");
	scanf("%d",&x);
	printf("%d\n", x);
	return 0;
}