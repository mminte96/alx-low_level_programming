#include "main.h"
/**
 * rev_string - a function that reverses a string
 * @s: string in reverse
 * Return: Always (Success)
 */
void rev_string(char *s)
{
	int i;
	int c = 0;
	char revs = s[0];

	while (s[c] != '\0')
	{
		c++;
	}
	for (i = 0; i < C; i++)
	{
		c--;
		revs = s[i];
		s[i] = s[c];
		s[c] = revs;
	}
}
