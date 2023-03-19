#include <stdio.h>
/**
 * main - print alphabetin lowercase and then in uppercase
 * Return: Always (Success)
 */
int main(void)
{
	char low[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int l;

	for (i = 0; i < 52; i++)
	{
		putchar(low[i]);
	}
	putchar('\n');
	return (0);
}
