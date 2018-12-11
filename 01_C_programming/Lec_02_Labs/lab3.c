/*
Write a C code that ask the user
to enter a number and check if it
is Even or Odd number
*/

/*
Algorithm 
1- get the # from the user 
2- if no%2==0 the its is even else it is Odd 
	2.1 - if no%2==0 --> print even 
	2.2 - else --> print Odd
*/

#include <stdio.h>
void main(){
	int no;
	// 1- get the # from the user 
	printf("Enter the # : ");
	scanf("%d",&no);
	// 2- if no%2==0 the its is even else it is Odd 
	if((no % 2) == 0){
	// 2.1 - if no%2==0 --> print even ]
		printf("The no is EVEN\n");
	}else{
	// 2.2 - else --> print Odd
		printf("The no is Odd\n");
	}
}