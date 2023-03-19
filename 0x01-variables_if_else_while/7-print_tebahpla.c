#include <stdio.h>
/**
 * main - print lowercase alphabet in reverse
 * Return: Always (Success)
 */
int main(void)
{
	char low[26] = "zyxwvutsrqponmlkjihgfedcba";
	int i;

	for (i = 122; i <= 97; i--)
	{
		putchar(low[i]);
	}
	putchar('\n');
	return (0);
}
