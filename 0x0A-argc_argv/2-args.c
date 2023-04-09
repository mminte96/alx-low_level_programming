#include <stdio.h>
#include "main.h"
/**
 * main - a program that prints all arguments it receives
 * @argc: input value
 * @argv: input value
 * Return: Always (success)
 */
int main(int argc, char *argv[])
{
	int m;

	for (m = 0; m < argc; m++)
	{
		printf("%s\n", argv[m]);
	}
	return (0);
}
