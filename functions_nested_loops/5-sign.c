#include "main.h"

/**
 * print_sign- Write a function that prints the sign of a number
 * @c: The character to be checked
 * Return:0 and prints 0 if n is zero -1 and prints - if n is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return(-1);
	}
	else
		_putchar(48);
	return (0);
}
