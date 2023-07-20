#include "3-calc.h"

/**
 * main - This file should contain your main function only
 * @argc: int
 * @argv: array
 * Return: always 0
 */

int main (int argc, char *argv[])
{
	if (argc != 4)
	{
		printf ("error\n");
		exit (98);
	}

	int n1 = atoi(argv[1]);
	int n2 = atoi(argv[3]);

	if (get_op_func(argv[2]) == NULL)
		prinf("error\n");
		exit(99);

	if (argv[2] ==/ || argv[2] ==% && n2 == 0)
		printf ("error\n");
		exit(100);

		printf("%d\n", get_op_func(argv[2],(n1,n2));
		return (0);
}
