#include <stdio.h>
/**
 * main - print alphabetin lowercase and then in uppercase
 * Return: Always (Success)
 */
int main(void)
{
	char low[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int l;

	for (l = 0; l < 52; l++)
	{
		putchar(low[l]);
	}
	putchar('\n');
	return (0);
}
