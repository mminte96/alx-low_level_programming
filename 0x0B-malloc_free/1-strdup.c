#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * char *_strdup - a function that returns a pointer allocated space
 * @str: input value
 * Return: NULL
 */
char *_strdup(char *str)
{
	char *ptr;
	int m;
	int v = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	m = 0;
	while (str[m] != '\0')
		m++;
	ptr = malloc(sizeof(char) * (m + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (v = 0; str[v]; v++)
	{
		ptr[v] = str[v];
	}
	return (ptr);
}
