#include "main.h"
#include <stdio.h>

/**
 * _strcat - 
 *
 * Return:
 */
char *_strcat(char *dest, char *src)
{
	int i, c;

	for (i = 0; dest[i] != '\n'; i++)

	for (c = 0; src[c] != '\n'; c++)
	{
		dest[i] = src[c];
		i++;
	}
		dest[i] = '\0';
		return(dest);
}
