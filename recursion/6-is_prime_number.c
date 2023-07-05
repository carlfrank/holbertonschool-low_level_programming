#include <stdio.h>
#include "main.h"
/**
 * is_prime - Write a function that returns 1, otherwise return 0
 * @divisor: divisor1
 * @n: string
 * Return: 1 if prime, 0 otherwise
 */

int is_prime(int n, int divisor)
{
	if (n <= 1)
		return (0);
	if (n == 2 || n == 3)
		return (1);
	if (n % divisor == 0)
		return (0);
	if (divisor * divisor > n)
		return (1);
	return (is_prime(n, divisor + 2));
}

/**
 * is_prime_number - write a fucntion that returns 0 if the input integer
 * @n: string
 * Return: 1 if prime, 0 otherwise
 */

int is_prime_number(int n)
{
	if (n == 2 || n == 3)
		return (1);
	if (n % 2 == 0)
		return (0);
	return (is_prime(n, 3));
}
