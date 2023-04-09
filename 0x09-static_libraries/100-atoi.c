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
