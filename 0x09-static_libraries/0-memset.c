#include "main.h"
/**
 * char *_memset - a function that fills memory with a constant byte
 * @n: to fill
 * @b: constant byte
 * @s: the memory erea pointed
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int m = 0;

	for (; n > 0; m++)
	{
		s[m] = b;
		n--;
	}
	return (s);
}
