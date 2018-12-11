/*
Write a C code that ask the user to enter 10
numbers, then ask him to enter another number
to search on it in the 10 numbers and print its
location in case it is found.
In case the number is not found, it will print
number no exist
*/

/*
	--- Algorithm --- 
	1- get 10 numbers from user in an array 
		2.1 for loop if no_entered <10
			arr[no_entered] = value;
	2- search the array for the number
		2.1 get the no we are searching for value
		2.2 
			2.2.1 for loop if no_entered <10
			2.2.2 if value == arr[no_entered]
			2.2.3 then print no_entered
*/

#include <stdio.h>
int main(int argc, char const *argv[])
{
	int req_no ,found_flag=0;
	int value[10];


	// 1- get 10 numbers from user in an array 
	// 	2.1 for loop if no_entered <10
	// 		arr[no_entered] = value;
	for(int no_entered = 0 ; no_entered <10 ;no_entered++){
		printf("Enter ur no :");
		scanf("%d",&value[no_entered]);
	}
	// 2- search the array for the number
	// 	2.1 get the no we are searching for value
	// 	2.2 
	// 		2.2.1 for loop if no_entered <10
	// 		2.2.2 if req_no == arr[no_entered]
	// 		2.2.3 then print loaction of it aka. no_entered
	// 		2.2.4 else print not found

	printf("Write the no u are searching for : ");
	scanf("%d",&req_no);

	for (int no_entered=0 ; no_entered <10 ; no_entered++){
		if(req_no == value[no_entered]){
			//we got it then 
			printf("WE Got it , its location is the %d ",no_entered+1);
			found_flag = 1;
			break;
		}
		// printf("%d\n",no_entered ); //for debuging 
	}
	if(found_flag !=1){
		printf("NOT FOUND\n");
	}

	return 0;
}
