#include <stdio.h>
#include <stdlib.h>

/**
 * main - Write a program that prints its name, followed by a new line.
 * @argc: argument count
 * @argv: arguments passed to main as an array of strings
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
