/*
Write C code that will ask the user to enter 2
numbers, then the main function will call a
function named Get_Max that takes the 2
values entered by the user then return the
maximum of them.
The main function then will print the
returned value
*/

#include <stdio.h>
int Get_Max(int x, int y);
int main(int argc, char const *argv[])
{
	int x,y,max;
	printf("enter the 2 numbers \n");
	scanf("%d %d",&x,&y);
	max = Get_Max(x,y);
	printf("The Max is %d\n",max );
	return 0;
}
int Get_Max(int a , int b){
	if(a>b){
		return a;
	}
	return b;
}
