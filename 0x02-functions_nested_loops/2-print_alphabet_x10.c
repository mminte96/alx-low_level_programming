#include "main.h"
/**
 * print_alphabet_x10 - print 10 times the alphabet in lowercase
 * Return: alphabet
 */
void print_alphabet_x10(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
	{
		if (low <= 10)
		{
			_putchar(low);
		}
		_putchar('\n');
	}
}
