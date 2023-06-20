#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - prints the alphabet in lowercase, and then in uppercase
 *Return: Always return 0
*/

int main(void)
{
char alpha;
for (alpha = 'a'; alpha <= 'z'; alpha++)
{
putchar(alpha);
if (alpha == 'z')
{
	char ALPHA;
for (ALPHA = 'A'; ALPHA <= 'Z'; ALPHA++)
	putchar(ALPHA);
}
}
putchar('\n');
return (0);
}
