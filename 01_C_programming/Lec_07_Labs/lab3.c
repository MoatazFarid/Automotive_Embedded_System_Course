/*Use typedef keyword to define our new
types. Then print their size using the sizeof
operator to ensure that they are correctly
defined*/

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
#include <stdio.h>
int main(int argc, char const *argv[])
{
	printf("size of unsigned int is %d Bytes\n", (int)sizeof(unsigned int));
	printf("size of unsigned short int is %d Bytes\n", (int)sizeof(unsigned short int));
	printf("size of unsigned long int is %d Bytes\n", (int)sizeof(unsigned long int));
	printf("size of signed int is %d Bytes\n", (int)sizeof(signed int));
	printf("size of signed short int is %d Bytes\n", (int)sizeof(signed short int));
	printf("size of signed long int is %d Bytes\n", (int)sizeof(signed long int));
	printf("size of unsigned char is %d Bytes\n", (int)sizeof(unsigned char));
	printf("size of signed char is %d Bytes\n", (int)sizeof(signed char));
	printf("size of float is %d Bytes\n", (int)sizeof(float));
	printf("size of double is %d Bytes\n", (int)sizeof(double));
	printf("size of long double is %d Bytes\n", (int)sizeof(long double));

	printf("--------------------------\n");
	/*typedef unsigned int u32;
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
	*/
	printf("size of u32 is %d Bytes\n", (int)sizeof(u32));
	printf("size of u16 is %d Bytes\n", (int)sizeof(u16));
	printf("size of u64 is %d Bytes\n", (int)sizeof(u64));
	printf("size of s32 is %d Bytes\n", (int)sizeof(s32));
	printf("size of s16 is %d Bytes\n", (int)sizeof(s16));
	printf("size of s64 is %d Bytes\n", (int)sizeof(s64));
	printf("size of u8 is %d Bytes\n", (int)sizeof(u8));
	printf("size of s8 is %d Bytes\n", (int)sizeof(s8));
	printf("size of f32 is %d Bytes\n", (int)sizeof(f32));
	printf("size of f64 is %d Bytes\n", (int)sizeof(f64));
	printf("size of f128 is %d Bytes\n", (int)sizeof(f128));

	return 0;
}