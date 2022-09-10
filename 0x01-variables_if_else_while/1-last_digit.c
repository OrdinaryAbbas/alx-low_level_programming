#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - is the entry point of the program
 * It creates a random number each time it runs
 * It contains selection statements
 * Return:(0) success
 */

int main(void)
{
	int n, last_Digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_Digit = n % 10;

	printf("The last digit of %d is %d", n, last_Digit);

	if (last_Digit > 5)
	{
		printf("and is greater than 5\n");
	}
	else if (!(last_Digit == 0) && (last_Digit < 6))
	{
		printf("and is less than 6 and not 0\n");
	}
	else
	{
		printf("and is 0\n");
	}

	return (0);
}
