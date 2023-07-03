#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - Write a function that prints a string, followed by a new line.
 * @s:
 *
 * Return: always 0
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
		putchar("\n");
	else
	{
		putchar(*s);
		_puts_recursion(++s);
	}
}
