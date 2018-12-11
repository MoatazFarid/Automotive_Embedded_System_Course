/*Write a C code that defines a function which takes an array as input argument and
apply the bubble sorting algorithm on it, then print the result*/
#include <stdio.h>
void swap(int a ,int b,int *ar){
	int temp = ar[a];
	ar[a]=ar[b];
	ar[b]=temp;
}
void bubble_sort(int *a,int size){
	for (int i = 0; i < size; ++i)
	{
		for (int j = 0; j < size; ++j)
		{
			if((j+1) == size){
				break;
			}else if(a[j]>a[j+1]){
				swap(j,j+1,a);
			}else{

			}
		}
	}
}
void main(int argc, char const *argv[])
{
	int a[10] = {12,123,334,4,42,1,123,456,7,888};
	bubble_sort(a,10);
	for (int i = 0; i < 10; ++i)
	{
		printf("%d ",a[i] );
	}
	
}