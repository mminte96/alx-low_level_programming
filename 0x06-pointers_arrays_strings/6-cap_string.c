#include "main.h"
/**
 * char *cap_string - a function that capitalizes all words of a string
 * @v: the pointer
 * Return: Return (Success)
 */
char *cap_string(char *v)
{
	int point = 0;

	while (v[point])
	{
		while (!(v[point] >= 'a' && v[point] <= 'z'))
		{
			point++;
		}
		if (v[point - 1] == ' ' || v[point - 1] == '\t' || v[point - 1] == '\n' || v[point - 1] == ',' || v[point - 1] == ';' || v[point - 1] == '.' || v[point - 1] == '!' || v[point - 1] == '?' || v[point - 1] == '"' || v[point - 1] == '(' || v[point - 1] == ')' || v[point - 1] == '{' || v[point - 1] == '}')
		{
			v[point] -= 32;
		}
		point++;
	}
	return (v);
}
