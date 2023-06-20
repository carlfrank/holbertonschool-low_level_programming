#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - prints all single digit numbers
 *Return: Always return 0
 */

int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar('0' + n);
	}

	putchar('\n');
	return (0);
}
