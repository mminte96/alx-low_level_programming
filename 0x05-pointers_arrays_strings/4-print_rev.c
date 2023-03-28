#include "main.h"
/**
 * print_rev -  a function that prints a string, in reverse
 * @s: printing string
 * Return: Always (Success)
 */
void print_rev(char *s)
{
	int str = 0;
	int v;

	while (*s != '\0')
	{
		str++;
		s++;
	}
	s--;
	for (V = str; v > 0; v--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
