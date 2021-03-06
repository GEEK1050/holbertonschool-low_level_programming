#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "3-calc.h"

/**
 * get_op_func - get the operator function
 * @s: operator in string
 * Return: operator function if exist or NULL otherwise
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

		while (ops[i].op)
		{
			if (ops[i].op[0] == *s && strlen(s) == 1)
				return (ops[i].f);

			i++;

		}
	EXIT_WITH_ERROR(99);
}
