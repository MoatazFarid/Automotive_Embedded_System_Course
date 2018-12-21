/*Write a C code that ask the user to enter 10 values and save them in an array
using a for loop. Then ask the user to enter a value to search about, if the
value existing in the 10 values, the program will print “Value Found”. If the
value is not exist, the program will print “Value Not Exist”. Use Binary
Searching Algorithm.*/

// 1- save values in array using for loop 
// 2- get the # to search about from the user 
// 3- search for the # , if found prind value found , else print value not found 
// 	3.1 -

// binary search algorith , 
// 1- sort the array 1st 
// 2- if n/2 (n is the size of the array ) < the requested no 
// 4- then if (n/2)/2 

#include<stdio.h>
/************************************************************************/
/* Name: Binary Search function											*/
/* function: used to find a certain value val from array arr			*/
/* Inputs   :1-int *arr -> pointer to array element that array should	*/
/* 			               be sorted array 								*/
/* 			2-int size -> size of that array 							*/
/*			3-int val -> value to search for in the array 				*/
/* output   :-1 if not found and index of it if found					*/
/************************************************************************/
int binarySearch(int *arr , int size , int val){
	int found = 0,
		high = size-1,
		low =0,
		m = (high/2)+1;
	while(!found){
		if((high == low)){
			if(val == arr[m]){	//case arr={1} and size =1 and val =1 
				return m;
			}else if(!found){
				break; // no value was found in the array 
			}
			
		}else if(val == arr[m]){ //found
			found=1;
		}else if(val < arr[m]){
			high=m;
			m=(high-low)/2;
			
		}else if(val > arr[m]){
			low=m+1;
			m=((high - low)/2)+low;
		}else{
			
		}
		
	}
	
	if(found==1){
		return m;
	}else{
		return -1;
	}
}
void main(void){
	int arr[6]={0,1,2,3,4,5};
	//test cases 
	//case -1 
	printf("index (-1)= %d\n",binarySearch(arr,6,-1));
	//case -10
	printf("index (-10)= %d\n",binarySearch(arr,6,-10));
	// case 10 
	printf("index (10)= %d\n",binarySearch(arr,6,10));
	//case 0
	printf("index (0)= %d\n",binarySearch(arr,6,0));
	
	printf("index = %d\n",binarySearch(arr,6,0));
	printf("index = %d\n",binarySearch(arr,6,1));
	printf("index = %d\n",binarySearch(arr,6,2));
	printf("index = %d\n",binarySearch(arr,6,3));
	printf("index = %d\n",binarySearch(arr,6,4));
	printf("index = %d\n",binarySearch(arr,6,5));
}