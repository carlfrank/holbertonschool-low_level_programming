#include "main.h"

/**
 * _strlen -returns the length of a string
 * @s: the string to get the lengh of
 * Return: the lengh of @str
 */
int _strlen(char *s)

{
	int c = 0;

	for (; *s != '\0'; s++)
	{
		c++;
	}
	return (c);
}
