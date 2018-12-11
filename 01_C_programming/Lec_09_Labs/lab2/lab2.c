/*Write C code to print the value of two
variables, each one of them is defined in a
header file structured as follow.*/
#include <stdio.h>
#include "../lab2-1.h"
#include "header2/lab2-2.h"
extern int var1,var2;
int main(int argc, char const *argv[])
{
	printf("%d %d\n",var1,var2 );
	return 0;
}
