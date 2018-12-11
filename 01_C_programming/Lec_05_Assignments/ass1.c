/*Write a C code that ask the user to enter 10 values and save them in an array
using a for loop. Then print the minimum and the maximum of the values.*/

#include <stdio.h>
// 1- ask the user to enter 10 values 
// 2- sort the array and get arr[0] and length arr[length-1]

/*
* Swap function , swap 2 elements of array 
*
*/
void swap_elements(	int e1 ,// input :	1st element of the array 
					int e2 ,// input :	2nd element of the array
					int *arr, // input/output :pointer to the array that have swaped elements 
					int const size){//input:size of the array 
	int tmp=0;
	//int arr[size]=&a;
	tmp = arr[e1];
	arr[e1]=arr[e2];
	arr[e2]=tmp;

}

/**
* used to sort an array 
*/
void bubble_sort(int *arr ,// input/output	: takes ptr to array as input  
 				int size){ // input 		: size of the array 
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if((j+1) == size){
				break;
			}else if (arr[j] > arr[j+1]){
				swap_elements(j,j+1,arr,size);
			}else{

			}
		}
	}

}


int main(int argc, char const *argv[])
{
	// tst swap ele
	// int a[10]={2,3,20,3,92,2,1,4,8,5};
	// swap_elements(0,1,a,10);
	// printf("%d %d\n",a[0],a[1] );
	/// tst bubble sort 
	// bubble_sort(a,10);
	// for (int i = 0; i < 10; ++i)
	// {
	// 	printf("%d ", a[i]);
	// }
	int arr[10];
	// Algorithm 
	for (int i = 0; i < 10; ++i)
	{
		printf("Value : ");
		scanf("%d",&arr[i]);
	}
	// 2- sort the array and get arr[0] and  arr[length-1]
	bubble_sort(arr,10);
	printf("min is %d\n",arr[0] );
	printf("maximum is %d\n",arr[9] );
	
	return 0;
}