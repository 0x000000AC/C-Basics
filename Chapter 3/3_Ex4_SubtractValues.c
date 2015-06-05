/* From programming in C by Kochan
	Exercise 4 on page 19
	
	"Write a program that subtracts the value 
	15 from 87 and displays the result, together
	with an appropriate message, at the terminal."
*/

#include <stdio.h>

int main (void)
{	
	int sum;
	sum = 87 - 15;
	printf(" 15 subtracted from 87 is %i\n", sum);
}