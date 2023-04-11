#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#define UNUSED(x)(void)(x)
#include "main.h"
/**
 * _atoi - convert a string
 * @s: input
 * Return: Always 0
 */
int _atoi(char *s)
{
	int opert = 1;
	int i = 0;
	unsigned int result = 0;

	while (!(s[i] <= '9' && s[i] >= '0') && s[i] != '\0')
	{
		if (s[i] == '-')
		{
			opert *= -1;
		}
		i++;
	}
	while (s[i] <= '9' && (s[i] >= '0' && s[i] != '\0'))
	{
		result = (result * 10) + (s[i] - '0');
		i++;
	}
	result *= opert;
	return (result);
}

/**
 * main - a program that adds positive numbers
 * @argc: input value
 * @argv: input value
 * Return: Always 0 (Success) 1 Error
 */
int main(int argc, char *argv[])
{
	int a, b, c, s;
	char *v;

	s = 0;
	c = 0;
	a = 1;
	while (a < argc)
	{
		v = argv[a];
		b = 0;
		while (v[b] != '\0')
		{
			if (v[b] < '0' || v[b] > '9')
			{
				printf("Error\n");
				return (1);
			}
			b++;
		}
		a++;
	}
	for (a = 1; a < argc; a++)
	{
		c = _atoi(argv[a]);
		s = s + c;
	}
	printf("%d\n", s);
	return (0);
}

