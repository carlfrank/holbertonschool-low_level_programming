#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include <string.h>

/**
 * malloc_checked - Write a function that allocates memory using malloc
 * @b: unsigned integer
 * Return: (98) if failed
 */

void *malloc_checked(unsigned int b)
{
	char *ptr;

	ptr = malloc(sizeof(char) * b);
	{
		if (ptr == NULL)
			exit(98);
	}
	return (ptr);
}
