// Solve these examples in a paper and confirm the that your
// answers are correct by writing a code printing the result
// x = 7 , y = 4 
// z = x & y 
// k = x | y 
// L = x ^ y
// M = x>>1

#include <stdio.h>
void main(){
	int x,y;
	printf("Enter X\n");
	scanf("%d",&x);
	printf("Enter Y\n");
	scanf("%d",&y);

	printf("x & y = %d \n",x&y);
	printf("x | y = %d \n",x|y);
	printf("x ^ y = %d \n",x^y);
	printf("x >> 1 = %d \n",x>>1);

}