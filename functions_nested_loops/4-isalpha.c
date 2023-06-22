#include "main.h"

/**
 * _isalpha- function that checks for alphabetic character
 * @c: The character to be checked
 * Return: 1 for lowercase character or 0 for anything else
 */
int _isalpha(char c)
{
	if ((c >= 97) && (c <= 122))
	{
	return (1);
	}
	else if ((c >= 65) && (c <= 90))
	{
	return (1);
	}
	else
	return (0);
}
