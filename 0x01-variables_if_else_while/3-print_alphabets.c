#include <stdio.h>
/**
 * main - print alphabetin lowercase and then in uppercase
 * Return: Always (Success)
 */
int main(void)
{
	char low;
	char upp;

	for (low = 'a'; low <= 'z', low++ && upp = 'A'; upp <= 'Z'; upp++)
	{
		putchar(low);
		putchar(upp);
	}
	putchar('\n')
	return (0);
}
