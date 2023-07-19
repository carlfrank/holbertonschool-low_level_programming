#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - Write a function that executes a function given as a parameter on each element of an array.
 * @array: int
 * @action: int
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}

