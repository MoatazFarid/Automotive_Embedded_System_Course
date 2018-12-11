#include<stdio.h>
void main(int argc, char const *argv[])
{
	//      *
	//     ***
	//    *****
	//   *******
	//  *********
	// ***********

	//x = 0 : 5 spaces and 1 astrisks
	//x = 1 : 4 spaces and 3 astrisks
	//x = 2 : 3 spaces and 5 astrisks
	//x = 3 : 2 spaces and 7 astrisks
	//x = 4 : 1 spaces and 9 astrisks
	//x = 5 : 0 spaces and 11 astrisks
	int spaces=5 , astrisks=1;
	for(int x=0;x<=5;x++){
		for(int s=spaces; s >=0 ; s--){
			printf(" ");
		}
		for(int a=astrisks; a>0 ; a--){
			printf("*");
		}
		spaces -=1;
		astrisks +=2;
		printf("\n");
	}

}