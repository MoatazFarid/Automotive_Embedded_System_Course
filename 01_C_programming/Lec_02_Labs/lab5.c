/*
Login System:
Write a C code that ask the user to enter his ID and
then the program will print his name.
Available IDs are:
1234-> Ahmed
5678 -> Youssef
1145 -> Mina
Any other number, the program will print Wrong ID
*/

/*
Algorithm 

1- ask user for id
2- switch between ids in switch case form 
	2.1- 1234-> Ahmed
	2.2- 5678 -> Youssef
	2.3- 1145 -> Mina
3. if any other no then Wrong ID
*/

#include <stdio.h>
int main(int argc, char const *argv[])
{
	int id;
	printf ("enter ur ID : ");
	scanf("%d",&id);

	switch(id){
		case 1234:
			printf("AHmed\n");
			break;
		case 5678:
			printf("Youssef\n");
			break;
		case 1145:
			printf("Mina\n");	
			break;
		default:
			printf("WrongID\n");
	}
	return 0;
}