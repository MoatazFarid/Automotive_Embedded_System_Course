/*Write a C code to manage a class of 10
students. Each student studies 4 subjects
Math, Language, Physics and Chemistry.
First define an array of 10 elements and assign
random grades for students. The system will
ask the user to enter the student ID then the
system will show its grades. The software shall
manage wrong IDs.*/

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

typedef struct {
	u16 Math;
	u16 Language;
	u16 Physics;
	u16 Chemistry;
}Student;


void main(void)
{
	Student students[10];
	// setting random grades
	for (u16 i = 0; i < 10; ++i)
	{
		students[i].Math = i * 7;
		students[i].Language = i * 3;
		students[i].Physics = i * 6;
		students[i].Chemistry = i * 8;

	}

	printf("Enter the student ID\n");
	u16 id ;
	scanf("%d",&id);
	if(id>=0 && id <10){
		printf("Grade in Math :%d\n", students[id].Math);
		printf("Grade in Chemistry :%d\n", students[id].Chemistry);
		printf("Grade in Language :%d\n", students[id].Language);
		printf("Grade in Physics :%d\n", students[id].Physics);
	}else{
		printf("Invaled ID \n");
	}

}