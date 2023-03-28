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

	while (*(src + 1) != '\0')
	{
		g++;
	}
	for ( ; h < 1; h++)
	{
		dest[g] = src[g];
	}
	dest[1] = '\0';
	return (dest);
}
