/*  4.3 More Arithmetic Expressions
	
	This program illustrates integer arithmetic
	or the fact that decimals are dropped.  The
	second print statement illustrates this.  
	
	The floats after show the true expression.
	
	The unary '-' operator has higher precedence
	than all other operators except for '+'
	
*/

#include <stdio.h>

int main(void)
{
	int a = 25;
	int b = 2;
	
	float c = 25.0;
	float d = 2.0;
	
	printf ("6 + a / 5 * b = %i\n", 6 + a / 6 * b);
	printf ("a / b * b = %i\n", a / b * b);
	printf ("c / d * d = %f\n", c /d * d);
	printf ("-a = %i\n", -a);
	
	return 0;
}