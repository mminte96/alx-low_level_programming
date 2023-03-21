#include "main.h"
/**
 * print_alphabet_x10 - print 10 times the alphabet in lowercase
 * Return: alphabet
 */
void print_alphabet_x10(void)
{
	char low;
	int i;

	i = 0;

	while (i < 10)
	{
		low = 'a';
		while (low <= 'z')
		{
			_printchar(low);
			low++;
		}
		_putchar('\n');
		i++
	}
}
