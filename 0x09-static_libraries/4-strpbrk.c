#include "main.h"
/**
 * char *_strpbrk - searches a string for any of a set of bytes
 * @s: pointer
 * @accept: input
 * Return: always 0
 */
char *_strpbrk(char *s, char *accept)
{
	int m;

	while (*s)
	{
		for (m = 0; accept[m]; m++)
		{
			if (*s == accept[m])
				return (s);
		}
		s++;
	}
	return ('\0');
}
