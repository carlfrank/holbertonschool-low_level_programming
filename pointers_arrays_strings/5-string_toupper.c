#include "main.h"

/**
 * string_toupper - Write a function that changes all lowercase letters of a string to uppercase
 * @c: string
 * Return: return c
 */

char *string_toupper(char *)
{
	int c;
	int i;

	for (c = 0; c[i] != '\0'; c++)
	{
		if (c[i] >= 'a' && c[i] <= 'z')
			c[i] = c[i] - 'a' + 'A';
	}
	return (c);
}
