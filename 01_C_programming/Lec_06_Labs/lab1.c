/*Write a C code defines an int initialized with
10, then print it, then define a pointer that
points to that int and change the value of the
int through the pointer to be 20, then print it
again.*/
#include <stdio.h>
int main(int argc, char const *argv[])
{
	int a = 10 ;
	printf("%d\n",a );
	int *ptr;
	ptr = &a;
	*ptr = 20;
	printf("after %d\n", *ptr);
	return 0;
}