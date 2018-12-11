/*
Write a code that will ask the user to enter 3
numbers, the program will print the maximum
number of them.
*/

/*
Algorithm 

1. get the numbers from the user as a,b,c
2. if a > b 
	1.1 then if b > c then max is b
	1.2 else if c > a  then max is c else max is a
*/
#include <stdio.h>
int main(int argc, char const *argv[])
{
	int a,b,c,max;
	printf("Enter 3 numbers separated by space : \n");
	scanf("%d %d %d",&a,&b,&c);

	if(a>b && a>c){
		max =a;
	}else if(b>a && b>c){
		max =b;
	}else if(c>a && c>b){
		max=c;
	}
	printf("Max is : %d\n", max);
	return 0;
}
