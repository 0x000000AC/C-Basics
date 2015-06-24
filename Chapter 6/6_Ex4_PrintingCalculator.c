/*
	6.Ex4 Printing Calculator.
	
	Write a program that acts as a simple “printing” calculator.The 
	program should allow the user to type in expressions of the form
	
		number operator

	The following operators should be recognized by the program:

		+	-	*	/	S	E

	The S operator tells the program to set the “accumulator” to the 
	typed-in number. 
	
	The E operator tells the program that execution is to end.
	
	The arithmetic operations are performed on the contents of 
	the accumulator with the number that was keyed in acting as the 
	second operand.The following is a “sample run” showing how the 
	program should operate:
	
	Begin Calculations
	10 S 				Set Accumulator to 10
	= 10.000000			Contents of Accumulator
	2 /					Divide by 2
	= 5.000000			Contents of Accumulator
	55 -				Subtract 55
	-50.000000
	100.25 S			Set Accumulator to 100.25
	= 100.250000
	4*
	= 401.000000
	0 E


*/

#import <stdio.h>

int main (void)
{
	float value1, value2;
	char operator;
	
	printf ("Begin Calculations.\n");
	while (operator != 'e' && operator != 'E' )
	{
		scanf ("%f %c", &value1, &operator);
		
		switch (operator)
		{
			case 'S' :
				value2 = value1;
				printf ("= %f\n", value1);
				break;
			
			case 's' :
				value2 = value1;
				printf ("= %f\n", value1);
				break;
				
			case 'E' :
				break;
			
			case 'e' :
				break;
			
			case '+' :
				printf ("= %f\n", value2 = value2 + value1);
				break;
				
			case '-' :
				printf ("= %f\n", value2 = value2 - value1);
				break;
			
			case '*' :
				printf ("= %f\n", value2 = value2 * value1);
				break;
				
			case '/' :
				if (value1 == 0)
					printf ("Can't Divide by zero\n");
				else
					printf ("= %f\n", value2 = value2 / value1);
					break;	
			default:
				printf ("Unknown expression.\n");
		} // End switch	

	} // End while
		
	return 0;
}