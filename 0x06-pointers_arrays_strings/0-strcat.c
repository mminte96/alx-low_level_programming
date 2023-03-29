#include "main.h"
/**
 * char *_strcat - a function that concatenates two strings
 * @dest: input string by user
 * @src: input srting by user
 * Return: Always (Success)
 */
char *_strcat(char *dest, char *src)
{
	int a, b;

	a = 0;
	b = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	while (src[src] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
