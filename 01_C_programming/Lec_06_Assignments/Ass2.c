/*Write a C code that define 3 int variables x, y and z and 3 pointers to int p, q
and r. Set x, y, z to three distinct values. Set p, q, r to the addresses of x, y, z
respectively.
a-
Print with labels the values of x, y, z, p, q, r, *p, *q, *r.
b-
Print the message: Swapping pointers.
c-
Execute the swap code: r = p; p = q; q = r;
d-
Print with labels the values of x, y, z, p, q, r, *p, *q, *r.

*/

#include<stdio.h>

void swap_ptr(int *a , int *b){
	int *tmp = &a;
	*a = &b;
	*b = &tmp;
}

int main(int argc, char const *argv[])
{
	int x=2,y=3,z=7;

	int *p=&x,*q=&y,*r=&z;
//Print with labels the values of x, y, z, p, q, r, *p, *q, *r.

	printf("x = %d\n",x );//2
	printf("y = %d\n", y);//3
	printf("z = %d\n",z );//7
	printf("p = %p\n",p );//&x
	printf("q = %p\n",q );//&y
	printf("r = %p\n",r );//&z
	printf("*p = %d\n",*p );//2
	printf("*q = %d\n",*q );//3	
	printf("*r = %d\n",*r );//7

// Print the message: Swapping pointers.
	printf("Swapping pointers\n");
	//Execute the swap code: r = p; p = q; q = r;
	swap_ptr(r,p); // r = p
	swap_ptr(p,q); // p = q
	swap_ptr(q,r); // q = r

	printf("x = %d\n",x );//2
	printf("y = %d\n",y);//3
	printf("z = %d\n",z );//7
	printf("p = %p\n",p );//&y
	printf("q = %p\n",q );//&z	
	printf("r = %p\n",r );//&x
	printf("*p = %d\n",*p );//3
	printf("*q = %d\n",*q );//7	
	printf("*r = %d\n",*r );//2

	return 0;
}
