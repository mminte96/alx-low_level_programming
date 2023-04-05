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
	_putchar(*s);
	s++;
	_strlen_recursion(s);
}
