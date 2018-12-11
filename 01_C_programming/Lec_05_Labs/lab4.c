/*
Write a C code that ask the user to enter 10 values and save them in an array
using a for loop. Then ask the user to enter a value to search about, if the value
existing in the 10 values, the program will print “Value Exists x times” where x
defines how many times the value exists. If the value is not exist, the program
will print “Value Not Exist”. Use Linear Searching Algorithm.
*/
#include <stdio.h>
#define ARRSIZE 10
int linearSearch(int x , int * arr){
	// search for the value x in the for loop 
	//if found increase found_flag by 1 else do nothing 
	int found_flag=0;

	for (int i =0;i<ARRSIZE ; i++){
		if (x== arr[i])
		{
			found_flag+=1;

		}
	}
	if (found_flag >0)
	{
		return found_flag;
	}
	return 0;
}

int main(int argc, char const *argv[])
{
	int a[ARRSIZE]={10,10,10,3,3,4,5,6,7,8};
	int *ptr = &a[0];
	printf("found state : %d\n", linearSearch(10,ptr));
	return 0;
}