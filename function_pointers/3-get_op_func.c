#include "3-calc.h"

/**
 * get_op_func -This file should contain the function
 * @s: char
 * @int: int
 * Return: returns a pointer to the function
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] =
	{
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };
    int i;

	i = 0;

	while (i < 5)
	{
		if (s == ops[i].op)
			return (op[i].f);
			i++;
	}
	return (NULL);
}

