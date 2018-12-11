// a pointer to typedef struct 
 // #include <stdio.h>

// typedef struct {
// 	int a ;
// 	int b;
// }ahmed_type;
// int main(int argc, char const *argv[])
// {
// 	ahmed_type *ahmed;
// 	ahmed_type maged ;

// 	maged.a=10;
// 	maged.b=20;
// 	ahmed = &maged;
// 	printf("%d %d \n",(*ahmed).a,ahmed->b );
// 	// printf("%d %d \n", maged.a , maged.b);
// 	return 0;

// }
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
struct test 
{ 
   unsigned int x: 2; 
   unsigned int y: 2; 
   unsigned int z: 2; 
}; 

typedef union{
	struct 
	{
		u8 b1:1;
		u8 b2:1;
		u8 b3:1;
		u8 b4:1;
		u8 b5:1;
		u8 b6:1;
		u8 b7:1;
		u8 b8:1;
	}Bit;
	u8 Byte;
}Register;

int main() 
{ 
   struct test t; 
   t.x = 1; 
   // printf("%d", t.x); 

   Register x;
   x.Byte=0b00000010;
   // x.Bit.b1=0;
   printf("%d\n",x.Byte );
   return 0; 
} 
