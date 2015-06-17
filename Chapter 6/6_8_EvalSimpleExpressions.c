/*

	6.8 Evaluating Simple Expressions
	
	Program to evaluate simple expressions of the form
		number operator number
		
	Note: It's typically better to use islower and isupper
	to avoid the internal representation issue.  Those methods
	are in ctype.h library

	Note: This obviously doesn't allow crazy characters
	for the operator and must include whitespace between
	the numbers and operators.
*/

#include <stdio.h>

int main (void)
{
	float value1, value2;
	char operator;
	
	printf ("Type in your expression.\n");
	scanf ("%f %c %f", &value1, &operator, &value2);
	
	if ( operator == '+' )
		printf ("%.2f\n", value1 + value2);
	else if (operator == '-' )
		printf ("%.2f\n", value1 - value2);
	else if ( operator == '*' )
		printf ("%.2f\n", value1 * value2);
	else if ( operator == '/' )
		printf ("%.2f\n", value1 / value2);
		
	return 0;

}