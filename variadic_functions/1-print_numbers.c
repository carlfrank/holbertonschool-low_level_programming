#include "variadic_functions.h"

/**
 *
 *
 *
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int val = 0;
	unsigned int i;
	va_list args;

	va start(args, n);

	for (i = 0; i < n; i++)
	{
		val = va_arg(args, int);
		printf 
