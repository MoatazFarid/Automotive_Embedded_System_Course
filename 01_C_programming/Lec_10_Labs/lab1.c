/*Write a C code that apply the bubble
sorting algorithm on a set of numbers
entered by the user. The code shall ask
the user to enter the number of values
to be sorted, then the code shall ask the
user to enter the values then print them
in ascending order.*/
#include <stdio.h>
#include <stdlib.h>

typedef unsigned int u32;
typedef unsigned short int u16;
typedef unsigned long int u64;
typedef signed int s32;
typedef signed short int s16;
typedef signed long int s64;
typedef unsigned char u8;
typedef signed char s8;
typedef float f32;
typedef double f64;
typedef long double f128;

void swap_elements(u16 *arr , u16 n1 , u16 n2){
	u16 tmp = arr[n1];
	arr[n1]=arr[n2];
	arr[n2]=tmp;
}
void bubble_sort(u16 *arr , u16 size){
	

	for (u16 j = 0; j < size; j++)
	{
		for (u16 i = 0; i < size; ++i)
		{
			// inner loop to size of array
			// if (i+1 ==size) then  break
			// else if arr[i] > arr[i+1] >>> swap 
			// else go for another iteration
			// end loop
			if ((i+1) == size){
				break;
			}else if(arr[i]>arr[i+1]){
				//swap
				swap_elements(arr,i,i+1);
			}else{

			}
		}
	}
}

void main(void){
	// get the size of the array from the user 
	
	u16 size,element;
	printf("Enter the size of the Array : ");
	scanf("%hu",&size);
	// get elements of array from user using loop
	u16 *arr = (u16 *)malloc(size*sizeof(u16)); // defining array of var size 
	for (u16 i = 0; i < size; ++i)
	{
		printf("Enter Element no. %hu :",i );
		scanf("%hu",&element);
		arr[i] = element;
	}
	// apply bubble_sort the print result 
	bubble_sort(arr,size);
	printf("Arr =");
	for (int i = 0; i < size; ++i)
	{
		printf(" %hu",arr[i] );
	}
	printf("\n");

	// freeeing the memory allocated 
	free(arr);
}