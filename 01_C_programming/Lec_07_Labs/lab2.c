/*Write a C code to print the size of all basic
data types; char, int, float and double.*/

#include <stdio.h>
int main(int argc, char const *argv[])
{
	printf("size of int is %d Bytes\n", (int)sizeof(int));
	printf("size of char is %d Bytes\n", (int)sizeof(char));
	printf("size of float is %d Bytes\n", (int)sizeof(float));
	printf("size of double is %d Bytes\n", (int)sizeof(double));
	return 0;
}