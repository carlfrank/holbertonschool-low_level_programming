#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string
 * Return: results
 */

char *_strdup(char *str)
{
	int i;
	char* new_str = (char*)malloc((length + 1) * sizeof(char));

	if (str == NULL)
	{
        return NULL;
	}

	if (new_str == NULL)
	{
        return NULL;
	}

	str(new_str, str);
    return new_str;
}
