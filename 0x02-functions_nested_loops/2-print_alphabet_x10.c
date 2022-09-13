#include "main.h"
/**
 * print_alphabet_x10 - prints alphabets 10
 * Description: prints 10 times
 * Return: Always(0).
 */
void print_alphabet_x10(void)
{
	int count;
	char ch;

	for (count = 0; count < 10; count++)
	{
		for (ch = 'a'; ch < 'z'; ch++)
			_putchar(ch);

		_putchar('\n');
	}
}
