#include "main.h"

/**
 * _strncat - concatenate two strings
 * @src: string
 * @dest: string
 * @n: number of elements to concatenate in
 * Return: pointer to resulting dest
 */

char *_strncat(char *dest, char *src, int n)

{
	int i, c;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (c = 0; src[c] != '\0' && n > 0; c++, n--, i++)
	{
		dest[i] = src[c];
	}
	return (dest);
}
