#include "holberton.h"
/**
* get_func - return the correct function
* @s: array to check
* Return: return a function
*/
int get_func(char s, va_list ap)
{
	op_t ops[] = {
		{'c', print_c},
		{'s', print_s},
		{'d', print_d},
		{'i', print_i},
		{0, NULL}
	};

	int i;

	for (i = 0; ops[i].c != 0; i++)
	{
		if (ops[i].c == s)
			return (ops[i].f(ap));
	}
	return (0);
}
