/*
	5.6 Introducing the while statement
	
	Output:
	1
	2
	3
	4
	5

*/

#include <stdio.h>

int main(void)
{
	int count = 1;
	
	while ( count <= 5 ) 
	{
		printf ("%i\n", count);
		++count;
	}
	
	return 0;
}