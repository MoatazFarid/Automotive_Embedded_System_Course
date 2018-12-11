/*
Write a login program in C that ask the
user to enter his ID and his password, if
the ID is correct the system will ask the
user to enter his password up to 3 times,
if he enters the password right the
systems welcomes him, if the three times
are incorrect, the system print No more
tries. If the user ID is incorrect the
system print You are not registered
*/

// 1. ask the user to enter his id 
//	1.1  loop through switch case block for the given IDs
//	1.1 if the id is incoorect print " ID not correct "
// 2. ask the user for the password 
// 	2.2 do if not correct ask to enter the password 
//	2.3 if correct print welcome "hamada" 
//	2.3 else repeat for another 2 times then print not registered

#include <stdio.h>
int main(int argc, char const *argv[])
{
	int id , // user input id
		password, // user input password
		time_limit =0 ; // used to trace the no of times the user tried to enter the password
	printf("Enter ur ID : ");
	scanf("%d",&id);
	// matching user-id
	switch(id){
		case 1234 :
			printf("Enter ur password : ");		
			scanf("%d",&password);		
			if (password == 7788){
				break;
			}else{
				while(time_limit <2){
					time_limit++;
					printf("Wrong password!! try again :");
					scanf("%d",&password);
					if (password == 7788){
						printf("Welcome Ahmed\n");
						break;
					}else if(time_limit == 2){
						printf("NO MORE tries\n");
									
					}
				}
				
			}
			break;  
		case 5678 :
			printf("Enter ur password : ");		
			scanf("%d",&password);		
			if (password == 5566){
				break;
			}else{
				while(time_limit <2){
					time_limit++;
					printf("Wrong password!! try again :");
					scanf("%d",&password);
					if (password == 5566){
						printf("Welcome Amr\n");
						break;
					}else if(time_limit == 2){
						printf("NO MORE tries\n");
									
					}
				}
				
			}
			break;  
		case 9870 :
			printf("Enter ur password : ");		
			scanf("%d",&password);		
			if (password == 1122){
				break;
			}else{
				while(time_limit <2){
					time_limit++;
					printf("Wrong password!! try again :");
					scanf("%d",&password);
					if (password == 1122){
						printf("Welcome Wael\n");
						break;
					}else if(time_limit == 2){
						printf("NO MORE tries\n");
									
					}
				}
				
			}
			break;  
		default :
			printf("You are not Registered\n");
			break;
	}

	return 0;
}
