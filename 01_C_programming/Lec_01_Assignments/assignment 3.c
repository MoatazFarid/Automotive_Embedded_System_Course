#include<stdio.h>
int main(int argc, char const *argv[])
{
	
	int x,y;
	printf("Enter the 2 Numbers:");
	scanf("%d %d",&x,&y);
	printf("x+y = %d \n",x+y );
	printf("x-y = %d \n",x-y );
	printf("x&y = %d \n",x&y );
	printf("x|y = %d \n",x|y );
	printf("x^y = %d \n",x^y );
	return 0;
}