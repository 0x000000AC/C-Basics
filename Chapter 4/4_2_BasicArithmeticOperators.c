/* 4.2
	
	Arithmetic Operations in C have left-to-right
	associativity.  Higher precedence operators.
	
	Note that the expression directly in the last 
	print statement terminates abnormally on some
	Unix based machines based on how gcc compiles.
*/

#include <stdio.h>

int main (void)
{
	int a = 100;
	int b = 2;
	int c = 25;
	int d = 4;
	int result;
	
	result = a - b; 
	printf("a - b = %i\n", result);
	
	result = b * c;
	printf ("b * c = %i\n", result);
	
	result = a / c;
	printf ("a / c = %i\n", result);
	
	result = a + b * c; //precedence
	printf ("a + b * c = %i\n", result);
	
	printf ("a * b + c * d = %i\n", a * b + c * d);
	
	return 0;
}