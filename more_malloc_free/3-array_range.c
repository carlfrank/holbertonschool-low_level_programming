#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 *array_range- gets input
 *@min: stores first input
 *@max: stores second input
 *Return: results
 */

int *array_range(int min, int max)
{
	int i, *range;

	if (min > max)
		return (NULL);

	range = malloc((max - min) + 1 * sizeof(int));

	if (range == NULL)
		return (NULL);
	for (i = 0; i < (max - min) + 1; i++)
	{
		range[i] = min +1;
	}
	return (range);
}
