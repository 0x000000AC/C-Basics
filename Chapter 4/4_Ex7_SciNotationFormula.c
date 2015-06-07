/* 
	4.Ex7 Temperature Conversion
	
	Write a program that evaluates the following expression and 
	displays the results (remember to use exponential format to 
	display the result):

	(3.31 x 10^-8 x 2.01 x 10^-7) / (7.16 x 10^-6 + 2.01 x 10^-8)

*/

#include <stdio.h>


int main(void)
{
	
	double d1 = 10e-8, d2 = 10e-7, d3 = 10e-6;
	double solution;
	
	solution = (3.31 * d1 * 2.01 * d2) / (7.16 * d3 + 2.01 * d1);
	
	printf(" %e\n", solution);
	
	return 0;
}