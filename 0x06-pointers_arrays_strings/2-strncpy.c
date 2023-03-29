#include "main.h"
/**
 * char *_strncpy -  a function that copies a string
 * @dest: character to input by user
 * @src: character to input by user
 * @n: another character to input
 * Return: Always (Success)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int m;

	m = 0;
	while (m < n && src[m] != '\0')
	{
		dest[m] = src[m];
		m++;
	}
	while (m < n)
	{
		dest[m] = '\0';
		m++;
	}
	return (dest);
}
