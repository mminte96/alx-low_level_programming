#include "main.h"
/**
 * _strlen_recursion - returns the length of a string
 * @s: input value
 * Return: Always 0
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	int i, n = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		n++,
		_putchar(n);
		_strlen_recursion(i);
	}
	return (0);
}
