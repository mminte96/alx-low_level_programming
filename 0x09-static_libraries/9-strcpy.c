#include "main.h"
/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @dest: pointed to by dest
 * @src: copies the string pointed to by src
 * Return: Always (Success)
 */
char *_strcpy(char *dest, char *src)
{
	int h = 0;
	int g = 0;

	while (*(src + g) != '\0')
	{
		g++;
	}
	for ( ; h < g; h++)
	{
		dest[h] = src[h];
	}
	dest[g] = '\0';
	return (dest);
}
