#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - Write a function that returns the length of a string.
 * @s: string
 * Return: always 0
 */

int _strlen_recursion(char *s)
{

	int c;

	c = 0;

	if (*s == '\0')
		return (0);


	c = 1 + _strlen_recursion(s + 1);

	return (c);
}
