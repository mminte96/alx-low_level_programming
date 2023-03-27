#include "main.h"
/**
 * _strlen - a function that returns the length of a string
 * @s: check length
 * Return: Always (Success)
 */
int _strlen(char *s)
{
	int str;

	while (*s != '\0')
	{
		str++;
		s++
	}
	return (str);
}
