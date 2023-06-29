#include "main.h"

/**
 * string_toupper - Write a function that changes all lowercase letters of a string to uppercase
 * @c: string
 * Return: return c
 */

char *string_toupper(char *)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] >= 'a' && c[i] <= 'z')
			c[i] = c[i] - 32;
	}
	return (c);
}
