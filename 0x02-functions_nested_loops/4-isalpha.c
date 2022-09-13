#include "main.h"
/**
 * _isalpha - Check if a character is an alphabet character.
 * @c: type int
 * Return: 1 if letter, lowercase or uppercase, and 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
