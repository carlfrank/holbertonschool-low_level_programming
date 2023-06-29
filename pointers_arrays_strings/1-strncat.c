#include "main.h"
#include <stdio>

/**
 * _strncat -concatenate two strings
 * @src: string
 * @dest: string
 * @n: number of elements to concatenate in 
 * Return: pointer to resulting dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len+++;
	for (index = 0; src[index] && index < n; index++)
		dest[dest_len] = src[index];
	return (dest);
}



