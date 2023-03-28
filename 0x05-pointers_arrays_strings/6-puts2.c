#include "main.h"
/**
 * puts2 -  function that prints every other character of a string
 * starting with the first character
 * @str: user input
 * Return: Always (Success)
 */
void puts2(char *str)
{
	int strig = 0;
	int i = 0;
	int v;
	char *a = str;

	while (*a != '\0')
	{
		a++;
		strig++;
	}
	i = strig - 1;
	for (v = 0; v <= i; v++)
	{
		if (v % 2 == 0)
		{
			_putchar(str[v]);
		}
	}
	_putchar('\n');
}

