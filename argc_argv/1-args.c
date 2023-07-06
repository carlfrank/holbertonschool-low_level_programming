#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - print the name of the program
 * @argc: argument count
 * @argv: argument vector
 */

int main(int argc, char* argv[])
{
	int i;

	argv[0] = 0;
	for (i = 0; i < argc; i++)
	{}

	printf("%d\n", i - 1);
	return (0);
}
