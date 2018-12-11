/*Write a header file that provides the following functions like macros:
1- Set_Bit(Var,BitNo) -> This macro will set the bit number (BitNo) in the variable (Var) to 1
2- Clr_Bit(Var,BitNo)
-> This macro will set the bit number (BitNo) in the variable (Var) to 0
3- Toggle_Bit(Var,BitNo) -> This macro will toggle the bit number (BitNo) in the variable (Var)
*/
#include <stdio.h>

// set bit will occure when ORing the var with 1 at the exact level
// assuming bit no is 7 6 5 4 3 2 1 0 
// the Equation may be  (00000001 << BitNo ) then Oring with value var 
#define Set_Bit(Var,BitNo) Var|(1<<BitNo)

//2- Clr_Bit(Var,BitNo)-> This macro will set the bit number (BitNo) in the variable (Var) to 0
// clearing a bit will occure when we &  the var with 2's complement of 1<<bitno
// it would be like var & (~(1<<BitNo)) , or even XOR it with 1 instead of ~
#define Clr_Bit(Var,BitNo) Var & ( ~(1<<BitNo))

//3- Toggle_Bit(Var,BitNo) -> This macro will toggle the bit number (BitNo) in the variable (Var)
//can be done by ^ the bit with 1 
#define Toggle_Bit(Var,BitNo) Var ^ (1<<BitNo)

int main(int argc, char const *argv[])
{
	int var = 20 ; //  0 0 0 1 0 1 0 0
	int res = Set_Bit(var , 1); // 00010110 //22
	printf("%d\n",res);
	res = Clr_Bit(var , 4); // 00000010 //4
	printf("%d\n",res);
	res = Toggle_Bit(var , 3); // 00011100 //28
	printf("%d\n",res);
	return 0;
}