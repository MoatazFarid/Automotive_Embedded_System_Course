/*
Write a C code that ask the user to enter his ID, if the ID is valid it will
ask the user to enter his password, if the password is correct the
program will print the user name, if the password is incorrect the
program will print Incorrect Password.
In case of not existing ID, the program will print Incorrect ID
*/

/*
	Algorithm 

	1. get the id from the user 
	2. use switch case to match ids
		2.1 if id matches it will ask for a password and compare it with the password
			2.1.1 if password_entered = PASS then print username
			2.1.2 else print incorrect password 
		2.2 else the default will print Incorrect ID 


*/

#include <stdio.h>
void main(void)
{
	char name[20]; //for string
	int id,pass;
	printf("write ur id : ");
	scanf("%d",&id);
	// 2. use switch case to match ids
	// 		2.1 if id matches it will ask for a password and compare it with the password
	// 			2.1.1 if password_entered = PASS then print username
	// 			2.1.2 else print incorrect password 
	// 		2.2 else the default will print Incorrect ID 

	switch (id){
		case 1:
			printf("Enter your password :\n");
			scanf("%d",&pass);
			if (pass == 11234)
			{
				printf("Id is -> ahmed\n");
			}else{
				printf("Incorrect Password\n");
			}
			break;
		case 2:
			printf("Enter your password :\n");
			scanf("%d",&pass);
			if (pass == 21234)
			{
				printf("Id is -> meme\n");
			}else{
				printf("Incorrect Password\n");
			}
			break;
		case 3:
			printf("Enter your password :\n");
			scanf("%d",&pass);
			if (pass == 31234)
			{
				printf("Id is -> bondo2\n");
			}else{
				printf("Incorrect Password\n");
			}
			break;
		default :
			printf("Incorrect ID\n");
			break;
	}

}
