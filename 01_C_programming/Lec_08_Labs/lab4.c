/*
Could you expect the size of this struct ... ?
Write a C code to print the size of this structure
and verify that it meets your expectations.
After that modify the structure to achieve the a
minimum size. Can you see the difference ... ?
Note that:
Your tool chain consider that the memory width
is 4 byte.
*/

// 16 - 32 - 16 - 32 
// <---width-32--------->
// <-- 16 -- ><-padding-> 
// <-- 32 -------------->
// <-- 16 -- ><-padding->
// <-- 32 -------------->

// the size should be 16 bytes
#include <stdio.h>
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

struct ah{
	u16 a;
	u32 b;
	u16 c;
	u32 d;
};
int main(int argc, char const *argv[])
{
	struct ah aa;
	printf("size of struct %d\n",(int)sizeof(struct ah));
	return 0;
}