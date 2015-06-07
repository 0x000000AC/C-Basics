/* 
	4.Ex8 Next Largest Even Multiple
	
	To round off an integer i to the next largest even multiple of 
	another integer j, the following formula can be used:

	Next_multiple = i + j - i % j
	
	For example, to round off 256 days to the next largest number 
	of days evenly divisible by a week, values of i = 256 and j = 7 
	can be substituted into the pre- ceding formula as follows:

	Next_multiple = 256 + 7 - 256 % 7 = 256 + 7 - 4 = 259

	Write a program to find the next largest even multiple for the 
	following values of i and j:
	
	i	     j
	365      7 
	12,258   23 
	996      4

*/

#include <stdio.h>


int main(void)
{
	
	int r1, r2, r3;
	
	r1 = 365 + 7 - 365 % 7;
	r2 = 12258 + 23 - 12258 % 23;
	r3 = 996 + 4 - 996 % 4;
	printf(" 365 + 7 - 365 %% 7 = %i\n", r1);
	printf(" 12258 + 23 - 12258 %% 23 = %i\n", r2);
	printf(" 996 + 4 - 996 %% 4 = %i\n", r3);
	
	return 0;
}