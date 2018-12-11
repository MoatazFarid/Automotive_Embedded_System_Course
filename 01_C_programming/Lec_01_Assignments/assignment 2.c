#include <stdio.h>
void main(void)
{
	///// 1st way
	// int x,y,z;
	// scanf("%d %d %d",&x,&y,&z);
	// printf("%d\n%d\n%d\n",z,y,x );

	///////2nd way 
	int arr[3];
	for(int i=0 ; i<3 ; i++){
		printf("Enter the no =");
		scanf("%d",&arr[i]);	
	}
	for (int j = 2; j >= 0; j--)
	{
		printf("%d\n",arr[j] );
	}
	

}