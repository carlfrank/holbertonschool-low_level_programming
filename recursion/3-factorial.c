#include "main.h"
#include <stdio.h>

/**
 * factorial - Write a function that returns the factorial of a given number
 * @n: string
 *Return: Always 0
 */

int factorial(int n)

{
	if  (n < 0)
		return (-1);
	else if (n < 2)
		return (n);
	else
		return (n * factorial(n - 1));
}
