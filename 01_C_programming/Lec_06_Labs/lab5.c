/*
Write a C code that define 2 arrays, and send them
to a function that apply scalar multiplication
between the two arrays and return the result, the
main function then will print the result.
*/

// scalar multiblication between 2 arrays is a1*b1+a2*b2+a3*b3+...+an*bn

#include <stdio.h>
void scalar_mul(int *a , int *b , int *h){
	
	for (int i = 0; i < 10; ++i)
	{
		h[i]=a[i] * b[i];
		//another way is 
		//h[i]=*(a+i) * *(b+i);
	}
	
}

int main(int argc, char const *argv[])
{
	
	int ar[10]={10,20,20,20,20,2304,4,4,5,10};
	int ar2[10]={22,334,56,78,12,123,456,33,566,223};
	int ar_res[10] ;
	scalar_mul(ar,ar2,ar_res);
	for (int i = 0; i < 10; ++i)
	{
		printf("%d ",ar_res[i] );
	}
	return 0;
}