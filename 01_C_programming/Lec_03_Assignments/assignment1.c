/*
Write a C program that ask the user to
enter two numbers and print their
summation, this program should never
ends until the user close the window
*/

// 
// 1. do while loop ask the user to enter the 2 numbers and print their summtion 
	//1.1 do ask the user to enter 2 numbers
	//1.2 print their summetion 
	//1.3 ask user to say yes if he wants to add another 2 numbers
	//1.4 mark flag as done to end while

#include <stdio.h>
int main(int argc, char const *argv[])
{
	int loop_flag=1 ,x,y;
	do{
		printf("Enter 2 numbers u wanna sum \n");
		scanf("%d %d",&x,&y);

		printf("x + y =%d\n",x+y );
		printf("press 1 to add another numbers , 0 to exit : \n");
		scanf("%d",&x);
		if (x==0)
		{
			loop_flag=0;
		}
	}while(loop_flag);
	return 0;
}