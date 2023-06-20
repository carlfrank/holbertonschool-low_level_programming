#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - Print all the letters except q and e
 *Return: Always return 0
*/

int main(void)
{
char alpha;

for (alpha = 'a'; alpha <= 'z'; alpha++)
{
if (alpha != 'e' && alpha != 'q')
	putchar(alpha);

}
putchar('\n');
return (0);
}
