/*
	8.4 Calculating the nth Triangular Number
	
	Function to calculate the nth triangular number

*/

#include <stdio.h>

// Function Prototype declaration.  Tells the compiler
// that calculateTriangularNumber is a function that returns no
// value.
void calculateTriangularNumber (int n)
{
	// Variables defined inside a function are known
	// as automatic local variables because they're
	// created each time the function is called and they're
	// local to the function.  When defining a local variable
	// inside a function, it is more precise in C to use the 
	// keyword auto before the definition of the variable.
	// auto int i, triangularNumber = 0; auto seldom used.
	int i, triangularNumber = 0;
	
	for ( i = 1; i <= n; ++i )
		triangularNumber += i;
		
	printf ("Triangular number %i is %i\n", n, triangularNumber);
}

int main (void)
{
	calculateTriangularNumber (10); 
	calculateTriangularNumber (20);
	calculateTriangularNumber (50);
	
	return 0;
}