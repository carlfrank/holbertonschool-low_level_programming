#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * _calloc - allocated memory of an array
 * @nmemb: n of bytes in mem block
 * @size: size
 * Return: pointer with allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i, j;
	char *call;

	if (nmemb == 0 || size == 0)
		return (NULL);

	j = (nmemb * size);
	call = malloc(j);
	if (call == NULL)
		return (NULL);

	for (i = 0; i < j; i++)

		call[i] = 0;

	return (call);
}
