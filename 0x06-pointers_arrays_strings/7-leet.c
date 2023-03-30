#include "main.h"
/**
 * char *leet - a function that encodes a string into 1337
 * @v: pointer
 * Return: Always (Success)
 */
char *leet(char *v)
{
	int c;
	int f;
	char carac[] = "aAeEoOtTlL";
	char num[] = "4433007711";

	for (c = 0; v[c] != '\0'; c++)
	{
		for (f = 0; f < 10; f++)
		{
			if (v[c] == carac[f])
			{
				v[c] = num[f];
			}
		}
	}
	return (v);
}
