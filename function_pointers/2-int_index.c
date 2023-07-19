#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - Write a function that searches for an integer.
 * @array: int
 * @size: int
 * @cmp: int
 * Return: always 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL)
	{
		return (-1);
	}

		for (i = 0; i < size; i++)
		{
			if (cmp(array[i] != 0))
			{
				return (i);
			}
	}
	return (-1);
}
