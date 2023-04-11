#include <stdio.h>
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
 * main - a program that multiplies two numbers
 * @argc: input value
 * @argv: input value
 * Return: Always 0 (Success) 1 Error
 */
int main(int argc, char *argv[])
{
	int i;
	int m;
	int result;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
		i = _atoi(argv[1]);
		m = _atoi(argv[2]);
		result = (i * m);

		printf("%d\n", result);

	return (0);
}
