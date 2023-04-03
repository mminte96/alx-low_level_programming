#include "main.h"
/**
 * char *_memcpy - a function that copies memory area
 * @dest: input
 * @src: input
 * @n: input
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int m = 0;
	int nth = n;

	for (; m < nth; m++)
	{
		dest[m] = src[m];
		n--;
	}
	return (dest);
}
