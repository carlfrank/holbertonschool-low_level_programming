#include "main.h"

/**
 * _abs- computes the absolute value of an integer
 * @n: The character to be checked
 * Return: absolute value of number of zero
 */
int _abs(int n)
{
	int absolute;

	if (n < 0)
	{
	absolute = n * (-1);
	}
	else
	absolute = n;
	return (absolute);
}
