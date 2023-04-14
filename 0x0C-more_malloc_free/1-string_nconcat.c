#include <stdio.h>
#include "main.h"
/**
 * char *string_nconcat - a function that concatenates two strings
 * @s1: input value
 * @s2: input value
 * @n: input value
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *pointe;
	unsigned int a = 0, b = 0, tail = 0, lng = 0;

	while (s1 && s1[tail])
	{
		tail++;
	}
	while (s2 && s2[lng])
	{
		lng++;
	}
	if (n < lng)
	{
		pointe = malloc(sizeof(char) * (tail + n + 1));
	}
	else
	{
		pointe = malloc(sizeof(char) * (lng + n + 1))
	}
	if (!pointe)
		return (NULL);
	while (a < tail)
	{
		pointe[a] = s1[a];
		a++;
	}
	while (n < lng && a < (tail + n))
	{
		pointe[a++] = s2[b++];
	}
	while (n >= lng && i < (tail + lng))
		pointe[a++] = s2[b++];
	pointe[a] = '\0';
	return (pointe);
}
