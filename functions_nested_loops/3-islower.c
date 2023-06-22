#include "main.h"

/**
 * _islower - check for lowercase character
 *@c: The character to be checked
 * Return: 1 for lowercase character or 0 for anything else
 */
int _islower(char c)
{
	if ((c >= 97) && (c <= 122))
	{
	return (1);
	}
	else
	return (0);
}
