#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * main is the entry point of the program
 * It creates a random number each time it runs
 * It contains selection statements
 */

int main(void)
{
	int n, last_Digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_Digit = n % 10;

	if (last_Digit > 5)
	{
		printf("The last digit of %d is %d and is greater than 5", n, last_Digit);
	}
	else if (!(last_Digit == 0) && (last_Digit < 6))
	{
		printf("The last digit of %d is %d and is less than 6 and not 0"
								, n, last_Digit);
	}
	else
	{
		printf("The last digit of %d is %d and is 0", n, last_Digit);
	}

	return (0);
}
