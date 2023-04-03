#include "main.h"
/**
 * char *_strchr - a function that locates a character in a string
 * @s: pointer
 * @c: input
 * Return: Always (Success)
 */
char *_strchr(char *s, char c)
{
	int m = 0;

	for (; s[m] >= '\0'; m++)
	{
		if (s[m] == c)
		{
			return (&s[m]);
		}
	}
	return (0);
}
