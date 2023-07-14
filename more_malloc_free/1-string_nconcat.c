#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - write a funcion that concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: unsigned int
 * Return: return 0
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	if (n > strlen(s2))
		n = strlen(s2);

	ptr = malloc (strlen(s1) + n + 1);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
	{
		ptr[i] = s1[i];
	}
	for (j = 0; s2[2] != '\0' && j < n; j++, i++)
}
for (j = 0; s2[j] != '\0'; j++)
{
	ptr[j] = s2[j];
}
ptr[i] = '\0';

return (ptr);
}
