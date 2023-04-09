#include "main.h"
/**
 * _strcmp - a function that compares two strings
 * @s1: input character
 * @s2: another input character
 * Return: Always (Success)
 */
int _strcmp(char *s1, char *s2)
{
	int mnth;

	mnth = 0;
	while (s1[mnth] != '\0' && s2[mnth] != '\0')
	{
		if (s2[mnth] != s1[mnth])
		{
			return (s1[mnth] - s2[mnth]);
		}
		mnth++;
	}
	return (0);
}
