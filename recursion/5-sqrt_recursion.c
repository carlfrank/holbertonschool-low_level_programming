#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - Write a function that returns the natural square root of a number.
 * @n: not have a natural square
 * Return: return -1
 */

int _sqrt_recursion(int n)
{
	return (halp(n, 1));
}

/**
 * halp - helper function to solve _sqrt_recursion
 * @c: number to determine if square root
 * @i: increment to compare against 'c'
 * Return: square root if natural square root, or -1 if none found
 */

int halp(int c, int i)
{
	int square;

	square = i * i;
	if (square == c)
		return (i);
	else if (square < c)
		return (halp(c, i + 1));
	else
		return (-1);
}
