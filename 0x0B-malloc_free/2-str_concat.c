#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * char *str_concat - a function that concatenates two strings
 * @s1: input value
 * @s2: input value
 * Return: NULL
 */
char *str_concat(char *s1, char *s2)
{
	int a;
	int m;
	char *rune;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	a = 0;
	m = 0;
	while (s1[a] != '\0')
		a++;
	while  (s2[m] != '\0')
		m++;
	rune = malloc(sizeof(char) * (a + m + 1));
	if (rune == NULL)
	{
		return (NULL);
	}
	a = m = 0;
	while (s1[a] != '\0')
	{
		rune[a] = s1[a];
		a++;
	}
	while (s2[m] != '\0')
	{
		rune[a] = s2[m];
		a++;
		m++;
	}
	rune[a] = '\0';
	return (rune);
}

