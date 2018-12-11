/*
Write C code implement a function to swap 2
global variables.
*/

#include <stdio.h>
void Swap(int a , int b);
int x,y;
int main(int argc, char const *argv[])
{
	x=3;
	y=5;
	printf("%d  %d\n",x,y );
	Swap(x,y);
	printf("%d  %d\n",y,x );

	return 0;
}
void Swap(int a, int b){
	int temp;
	temp = a;
	a=b;
	b=temp;
}