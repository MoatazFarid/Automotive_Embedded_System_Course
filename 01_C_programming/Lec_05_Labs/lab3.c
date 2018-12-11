/*Write a C code that ask the user to enter 10
values and save them in an array using a for
loop. The code then apply the bubble sorting
algorithm and then print the values after
sorting.*/

// 1. get the data from user and put them in an array
// 2. apply bubble sort 
	
// bubble sort algorithm 
// 1. loop for the total length  of the array 
// 2. if arr[i] > arr[i+1]  then swap 

#define LENGTH 10
#include <stdio.h>
int arr[LENGTH];

void swap_elements (int a , int b){
	int temp = arr[a];
	arr[a]=arr[b];
	arr[b]=temp;
}
void bubble_sort(){
	for(int j=0 ; j<LENGTH ;j++){
		for (int i=0; i<LENGTH ;i++)
		{
			if( (i+1) == LENGTH){
				break;
			}
			else if(arr[i] > arr[i+1]){
				swap_elements(i,i+1);
			}else{

			}
		}
	}
}

int main(int argc, char const *argv[])
{
	int val;
	for (int i = 0; i < LENGTH; ++i)
	{
		printf("element-> ");
		scanf("%d",&val) ;
		arr[i] = val ;

	}
	bubble_sort();
	for (int i = 0; i < LENGTH; ++i)
	{
		printf("out > %d\n",arr[i] );
	}
	return 0;
}