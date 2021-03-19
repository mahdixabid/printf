#include "holberton.h"
/**
* get_func - return the correct function
* @s: array to check
* @ap: va_list
* Return: return a function
*/
int get_func(char s, va_list ap)
{
	op_t ops[] = {
		{'c', print_c},
		{'s', print_s},
		{'d', print_d},
		{'i', print_i},
		{'R', print_rot13},
		{0, NULL}
	};

	int i, count = 0;

	for (i = 0; ops[i].c != 0; i++)
	{
		if (ops[i].c == s)
		{
			count += ops[i].f(ap);
			return (count);


		}
	}
	return (0);
}
