#include "main.h"
/**
 * _islower - prints 1 or 0 depending on input
 * @c: first parameter
 * Description: prints checks if c is lowercase or uppercase
 * Return: Always(0).
 */
int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}