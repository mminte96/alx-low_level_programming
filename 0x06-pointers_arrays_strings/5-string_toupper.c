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
	while (v[i] != '\0')
	{
		if (v[i] >= 'a' && v[i] <= 'z')
		{
			v[i] = v[i] - 32;
		}
		v++;
	}
	return (v);
}
