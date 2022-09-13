#include "main.h"
/**
* main-is the entry point
* it prints the word _putchar to the screen
* Return: Success(0)
*/
int main(void)
{
	char word[8] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
		_putchar(word[i]);

	_putchar('\n');

	return (0);
}
