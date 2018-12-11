/*
Write a C code to ask the user to enter his
grade and the program will print his rating.
0 <= grade < 50
50 <= grade < 65
65 <= grade < 75
75 <= grade < 85
85 <= grade
------> Failed
------> Normal
------> Good
------> Very Good
------> Excellent
*/

/*
Algorithm 

1- get the grade from the user 
2- if grade >= 0 && grade < 50 ==> print failed
3- if grade >= 50 && grade < 65 ==> print normal
3- if grade >= 65 && grade < 75 ==> print Good
3- if grade >= 75 && grade < 85 ==> print very Good
3- if grade >= 85 ==> print Excellent

*/

//used variable 
#include <stdio.h>
int grade ;
void main(){
	//1- get the grade from the user 
	printf("Enter ur grade :");
	scanf("%d",&grade);
	//2- if grade >= 0 && grade < 50 ==> print failed
	if(grade >= 0 && grade < 50){
		printf("your rate is Failed\n");
	}else if(grade >= 50 && grade < 65){
	//3- if grade >= 50 && grade < 65 ==> print normal	
		printf("your rate is Normal\n");

	}else if(grade >= 65 && grade < 75){
	//3- if grade >= 65 && grade < 75 ==> print Good	
		printf("your rate is Good\n");

	}else if(grade >= 75 && grade < 85){
	//3- if grade >= 50 && grade < 65 ==> print very Good
		printf("your rate is Very Good\n");

	}else if(grade >= 85){
	//3- if grade >= 85 ==> print Excellent
		printf("your rate is Excellent\n");
	}else{

	}
}