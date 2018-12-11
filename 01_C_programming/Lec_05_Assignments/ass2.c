/*Write C code that manage a small school. The school has 3 classes each class
contains 10 students. Define three arrays for the three classes each one with a
length of 10. Save a random numbers in all array elements to indicate the
students grade. The program will calculate and display the following statistics:
1- Number of passed students
2- Number of Failed students
3- Highest grade
4- Lowest grade
5- Average grade
Knowing that the total grade is from 100 and the minimum passing grade is 50.*/

// 1- define 3 arrays class1 , class2 ,class3 with random data 
// 2- calculate the number of passed/failed students
//	2.1- loop on the 3 classes if grade > 50 then passed+=1
//	2.2-	else failed +=1
// 3- get the highest/lowest gardes of the 3 classes
//	3.1- add the 3 classes to 1 big school[30]using for loop
//	3.2- sort the big array and get school[0] as lowest and school[29] as highest
// 4- calculate the average grade 
//	4.1- loop on the big array and sum the grades of all students then divide by 30

#include <stdio.h>

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
	// 1- define 3 arrays class1 , class2 ,class3 with random data 
	int class1[10]={12,14,20,60,88,90,50,86,35,10},
		class2[10]={43,22,78,54,89,43,98,47,61,40},
		class3[10]={90,92,34,5,88,76,11,58,99,43};
	// 2- calculate the number of passed/failed students
//	2.1- loop on the 3 classes if grade > 50 then passed+=1
//	2.2-	else failed +=1
	int passed=0 , failed=0;
	for (int i = 0; i < 10; ++i)
	{
		if (class1[i] >50)
		{
			passed+=1;
		}else{
			failed+=1;
		}
		if (class2[i] >50)
		{
			passed+=1;
		}else{
			failed+=1;
		}
		if (class3[i] >50)
		{
			passed+=1;
		}else{
			failed+=1;
		}
	}
	printf("Number of passed students = %d \n",passed );
	printf("Number of failed students = %d \n",failed );

	// 3- get the highest/lowest gardes of the 3 classes
//	3.1- add the 3 classes to 1 big school[30]using for loop
//	3.2- sort the big array and get school[0] as lowest and school[29] as highest
	int school[30];
	for (int i = 0; i < 10; ++i)
	{
		// printf("%d %d %d ",class1[i],class2[i],class3[i] );
		school[i]=class1[i];
		school[i+10]=class2[i];
		school[i+20]=class3[i];
	}
	//sorting the school array 
	bubble_sort(school,30);
	printf("lowest grade in school is = %d\n",school[0] );
	printf("highest grade in school is = %d\n",school[29] );
	return 0;
}
