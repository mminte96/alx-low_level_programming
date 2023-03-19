#include <stdio.h>
/**
 * main - Prints the numbers beetwin 0 to 9 and betwin a to f
 * Return: Always (Success)
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	for (i = 97; i < 103; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
