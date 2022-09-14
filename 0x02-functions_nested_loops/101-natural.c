#include <stdio.h>
/**
 * main - sums the multplies of 3 or 5 below 1024
 * Description: multiples between 0 and 1024 only
 * Return: Always(0) Success
 */
int main(void)
{
	int start_num, end_num, total;

	end_num = 1024;
	total = 0;

	for (start_num = 0; start_num < end_num; start_num++)
	{
		if ((start_num % 3 == 0) || (start_num % 5 == 0))
		{
			total = total + start_num;
		}
		else
		{
			continue;
		}
	}
	printf("%d", total);
	printf("\n");
	return (0);
}
