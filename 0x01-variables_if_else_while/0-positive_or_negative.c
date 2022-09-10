#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main function is the entry point
 * Contains a random number generator
 * Contains if else statements to check the nature of number
 * Return: Success always (0)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}

	return (0);
}
