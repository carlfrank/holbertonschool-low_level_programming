#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - print the alphabet in lower case
 *Return: Always print 0
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
