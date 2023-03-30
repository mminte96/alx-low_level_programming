#include "main.h"
/**
 * char *string_toupper - changes all lowercase letters to uppercase
 * @v: my pointer
 * Return: Always (Success)
 */
char *string_toupper(char *v)
{
	int c;

	c = 0;
	while (v[c] != '\0')
	{
		if (v[c] >= 'a' && v[c] <= 'z')
		{
			v[c] = v[c] - 32;
		}
		c++;
	}
	return (v);
}
