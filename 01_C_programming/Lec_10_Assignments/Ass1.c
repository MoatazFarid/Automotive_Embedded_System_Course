/*Write a C code that allow the user to add
a node to linked list by pressing 0 and to
print the linked list by pressing 1. The
software shall continue forever till the
user enters 2. If the user enters any
other numbers the software shall print
incorrect entry. See the following
scenarios for more details.*/
/*
Complete lab 2 by adding a new function that allow the user to delete certain
node. The user shall enter a value then the code shall delete any node that holds
this value
*/
// feature of required app 
// 1- create a linkedlist 
// 2- add a node to linkedlist (push)
// 3- print linkedlist
// ass 1 
// 4- delete node by matching data
// my extra features 
// 1* - get the last node (tail) 
// 2* - find a node with certain id 
// 3* - print data of certail node 
// 4* - free linkedlist elements from memory 
//new at ass1
// 5* - delete matching id 
#include <stdio.h>
#include <stdlib.h>

typedef unsigned int u32;
typedef unsigned short int u16;
typedef unsigned long int u64;
typedef signed int s32;
typedef signed short int s16;
typedef signed long int s64;
typedef unsigned char u8;
typedef signed char s8;
typedef float f32;
typedef double f64;
typedef long double f128;

struct Node{
	u16 data;
	struct Node *next;
};
typedef struct Node Node;

/** this function shall delete node matching its data */
void deleteNodebyData(Node* head , u16 data);

/** this function shall delete node matching its id */
void deleteNodebyID(Node* head , u16 id);


/**
	This function should push a node as a last element in the linked list
*/
void pushNode(Node *head, u16 data);

/**
	This function should print all elements in the linked list
*/
void printList(Node *head);

/**
	This function should find a certain node (using its id) in the linked list
	assuming that the nodes - without the head- starts from 1 
*/
Node* findNode(Node *head,u16 id);


/**
	This function should return the last element in the linked list 
	Note: if the linked list is empty the last will be same as the head 
*/
Node* getTail(Node* head);

/**
	This function should print the data of certail node 
*/
void printNode(Node* head , u16 id);

/*
This function will free all elements from memory heap
*/
void free_elements(Node* head);

u16 menu(){
	u16 choice;
	printf("add a node to linked list by pressing 0\n");
	printf("print the linkedlist by pressing 1\n");
	printf("Exit by pressing 2\n");
	printf("delete Node from the linkedlist by matching data press 3\n");
	printf("delete Node from the linkedlist by matching id press 4\n");

	printf("Your Choice : ");
	scanf("%hu",&choice);
	return choice;
}
int main(void)
{
	u16 data; // used to handle node data from user 
	/** algorithm **/
	//1-creating a head node 
	// 1.1 malloc for space 
	Node *head = (Node *)malloc(sizeof(Node));
	//	1.2 adding value 0 fas it is the head and next is NULL
	head->data=0;
	head->next = NULL;
	///////testing 
	// add a new node
	// printf("Enter new node data :");
	// scanf("%hu",&data); // getting new node data from user 
	// pushNode(head,data); // push data into a new node in linkedlist
	// printList(head);
	u16 choice;
	choice = menu();
	while( choice != 2){
		switch(choice){
			case 0:
				
				printf("Enter the value of the node u want :");
				scanf("%hu",&data);
				pushNode(head,data);
				printf("Node Added!! Thanks\n");
				break;
			case 1:
				printf("linkedlist :\n");
				printList(head);
				break;
			case 3:
				printf("Enter data to match : ");
				scanf("%hu",&data);
				deleteNodebyData(head,data);
				break;
			case 4:
				printf("Enter id to match : ");
				scanf("%hu",&data);
				deleteNodebyData(head,data);
				break;
			default:
				printf("Option is Wrong!!\n");
		}
		choice = menu();
	}
	free_elements(head);
	return 0;
}


/**
	This function should push a node as a last element in the linked list
*/
void pushNode(Node *head,u16 data){
	Node* Tail = getTail(head);
	// we assumed that his node is always node 1
	Node *new_node = (Node *)malloc(sizeof(Node));
	new_node->data=data;
	new_node->next=NULL;
	//set the previous node pointer to point to this node 
	Tail->next=new_node;
}
/**
	This function should print all elements in the linked list
*/
void printList(Node *head){
	Node * next = head;
	u16 i=0;
	while (next->next != NULL){
		printf("Node :%hu   -> data :%hu\n",i,next->data);
		next = next->next;
		i++;
	}
	if(i==0){
		printf("The List is empty\n");
	}else{
		printf("Node :%hu	-> data : %hu\n",i , next->data);	
	}
	
}
/**
	This function should find a certain node (using its id) in the linked list
	assuming that the nodes - without the head- starts from 1 
*/
Node* findNode(Node *head,u16 id){
	Node *tmp = head;
	if(id==0){
		printf("This is the head node!!\n");
	}else{
		for(u16 i=0;i<id;i++){
		tmp = tmp->next;
		}
	}
	return tmp;
}
/**
	This function should return the last element in the linked list 
	Note: if the linked list is empty the last will be same as the head 
*/
Node* getTail(Node* head){
	Node* temp = head;
	while(temp->next != NULL){
		temp = temp->next;
	}
	return temp;
}

/**
	This function should print the data of certail node 
*/
void printNode(Node* head , u16 id){
	Node* temp = head;
	if(id==0) printf("This is head node !!\n");
	else{
		for(u16 i=0;i<id;i++){
			temp = temp->next;
		}
		printf("Node :%hu	-> data : %hu\n",id , temp->data);
	}
		
}

/*
This function will free all elements from memory heap
*/
void free_elements(Node* head){
	Node* tmp;
	while (head != NULL)
    {
       tmp = head;
       head = head->next;
       free(tmp);
    }
}


/** this function shall delete node matching its data */
void deleteNodebyData(Node* head , u16 data){
	Node* temp = head;
	if(head->next == NULL) printf("This is an empty LinkedList !!\n");
	else{
		while(temp->next->data != data){ //ana keda weselt an al next hya aly 3ayez ashelha 
			temp = temp->next;
		}
		Node* t2=temp->next;
		temp->next = temp->next->next;
		free(t2);
	}
}

/** this function shall delete node matching its id */
////errror segmentation fault
void deleteNodebyID(Node* head , u16 id){
	Node* temp = head;
	if(head->next == NULL) printf("This is an empty LinkedList !!\n");
	else{
		for(u16 i =0;i<(id+1);i++){//ana keda weselt an al next hya aly 3ayez ashelha 
			temp = temp->next;
		}
		Node* t2=temp->next;
		temp = temp->next->next;
		free(t2);
	}
}

