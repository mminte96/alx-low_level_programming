#include "main.h"
/**
 * char *_strncat -  a function that concatenates two strings
 * @dest: input character by user
 * @src: input by user
 * @n: input by user
 * Return: Always (Success)
 */
char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (b < n && src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
