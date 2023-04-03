#include "main.h"
/**
 * char *_strstr - a function that locates a substring
 * @haystack: input value
 * @needle: nut value
 * Return: 0
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *m = haystack;
		char *th = needle;

		while (*m == *th && *th != '\0')
		{
			m++;
			th++;
		}
		if (*th == '\0')
		{
			return (haystack);
		}
	}
	return (0);
}
