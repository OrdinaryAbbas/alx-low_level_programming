#include <stdio.h>
#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)

	if (a >= b && a >= c)
	{
		int max = a;
	}
	else if (b >= a && b >= c)
	{
		int max = b;
	}
	else
	{
		int max = c;
	}
	return (max);
}
