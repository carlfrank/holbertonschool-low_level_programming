#include "main.h"

/**
 * clear_bit - gets input
 * @n: stores input
 * @index: stores second input
 * Return: results
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(*n) * 8))
		return (-1);

	*n &= ~(1 << index);
	return (1);

}
