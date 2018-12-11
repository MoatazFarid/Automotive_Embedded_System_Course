// 00000*00000
// 0000***0000
// 000*****000
// 00*******00
// 0*********0
// ***********

// h = 9
// 00000000*00000000    	h=0	space = 8 	asterisk= 1
// 0000000***0000000		h=1	space = 7 	asterisk= 3
// 000000*****000000		h=2	space = 6 	asterisk= 5
// 00000*******00000		h=3	space = 5 	asterisk= 7
// 0000*********0000		h=4	space = 4 	asterisk= 9
// 000***********000		h=5	space = 3 	asterisk= 11
// 00*************00		h=6	space = 2 	asterisk= 13
// 0***************0		h=7	space = 1 	asterisk= 15
// *****************		h=8	space = 0 	asterisk= 17

#include <stdio.h>
int main(int argc, char const *argv[])
{
	int height , space ,asterisk;
	printf("Enter Req height :");
	scanf("%d",&height);
	height-=1;
	space =height-1;
	asterisk = 1;
	for (int i = 0 ; i<=height ; i++)
	{
		for (int j = space; j >= 0 ; j--)// print sapce
		{
			printf(" ");
		}
		space -=1;
		for (int l = asterisk; l > 0; l--)
		{
			printf("*");
		}
		asterisk +=2;
		printf("\n");
	}
	return 0;
}