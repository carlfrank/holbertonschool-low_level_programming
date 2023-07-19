#include "calc.h"

/**
 *
 *
 *
 */

int main (int argc, * argv[])
{
	if (argc = 4)
	{
		printf ("error\n");
		exit (98);
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);

	if (set_op_func(argv[2], (n1, n2)) == NULL)
		prinf("error\n");
		exit(99);

	if (argv[2] ==/ || argv[2] ==% && n2 == 0)
		printf ("error\n");
		exit(100);

		return (printf("%d\n", get_op_func(argv[2],(n1,n2));
}
