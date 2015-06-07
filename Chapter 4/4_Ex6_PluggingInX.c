/* 
	4.Ex6 Temperature Conversion
	
	Write a program to evaluate the polynomial shown here:
	3x^3 - 5x^2 + 6 for x = 2.55.

*/

#include <stdio.h>
#include <math.h>

int main(void)
{
	
	float solution, x = 2.55;
	
	printf("Plugging 2.55 into 3x^3 - 5x^2 + 6 \n\n");
	
	solution = (3 * pow(x, 3)) - (5 * pow(x, 2)) + 6;
	
	printf("The solution is: %f\n", solution);
	
	return 0;
}