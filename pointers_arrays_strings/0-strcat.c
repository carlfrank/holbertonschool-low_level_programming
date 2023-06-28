#include "main.h"
#include <stdio.h>

/**
 * _strcat - function that concatenates two strings
 * @dest: char string to concatenate to
 * @src: char string
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i, c;

	for (i = 0; dest[i] != '\n'; i++)

	for (c = 0; src[c] != 0; c++)
	{
		dest[i] = src[c];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
