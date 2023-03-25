#include "main.h"
/**
 * print_most_numbers -  prints the numbers, from 0 to 9
 * Return: void
 */
void print_most_numbers(void)
{
	char n;

	if (n != 2 && n != 4)
	{
		for (n = 0; n <= 9; n++)
		{
			_putchar(n);
		}
	}
	_putchar('\n');
}
