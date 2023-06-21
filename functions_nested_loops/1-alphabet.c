#include "main.h"

/**
 * print_alphabet - the alphabet, in lowercase
 *
 * Return: Always (Success)
 */

void print_alphabet(void)
{
char low;
	for (low = 'a'; low <= 'z'; low++)
	{
	_putchar(low);
	}
	_putchar('\n');
}
