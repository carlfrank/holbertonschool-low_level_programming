#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - allocated memory of an array
 * @nmemd: n of bytes in mem block
 * @size: size
 * Return: pointer with allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	array = malloc(nmemb * size);
	if (array == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * seze); i++)
			array[i] = 0;

	return (array);
}
