#include "main.h"

/**
 * flip_bits- get input
 * @n: stores input
 * @m: stores input
 * Return: results
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int value;
	unsigned int count = 0;

	value = n ^ m;

	while (value != 0)
	{
		if ((value & 1) == 1)
			count++;
		value = value >> 1;
	}
	return (count);
}
