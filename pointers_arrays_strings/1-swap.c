#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a:  an integer to swap
 * @b:  another integer to swap
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
