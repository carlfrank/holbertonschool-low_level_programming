#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main- Print a text according number
*Return: Always return 1
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
    lastd = n% 10;
	if (lastd > 5)
	{
	printf("Last digit of %d is 5\n", n, lastd);
	}
	else if (lastd == 0)
	{
	printf("Last digit of %d is 0\n", n, lastd);
	}
	else if (lastd < 6 && lastd != 0)
	{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastd);
	}
	return (0);

}
