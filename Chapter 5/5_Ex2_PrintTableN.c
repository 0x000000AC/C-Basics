/* 
	5 Ex 2 Print table of number and number squared
	
	Write a program to generate and display a table of 
	n and n2, for integer values of n ranging from 1 to 10. 
	Be certain to print appropriate column headings.
	
	Output:
	
	 n     n Squared
    ---    ---------
     1          1
	 2          4
	 3          9
	 4         16
	 5         25
	 6         36
	 7         49
	 8         64
	 9         81
	10        100
	
*/

#include <stdio.h>
#include <math.h> // for pow()

int main(void)
{
	int n;
	
	printf (" n     n Squared\n");
	printf ("---    ---------\n");
	for ( n = 1; n <= 10; ++n)
	{
		printf ("%i        %3.0f\n", n, pow(n, 2));
	}
	
	return 0;

}