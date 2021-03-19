#include "holberton.h"
#include <stdlib.h>
#include <stdarg.h>
/**
 * _printf - printing function.
 * @format: liste of arguments
 * Return: Always 0.
 */
int _printf(const char *format, ...)
{
	va_list arg;
	unsigned int i = 0, j = 0;

	va_start(arg, format);

	if (!format || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	for (i = 0; format != NULL && format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '%')
			{
				_putchar('%');
				j++;
				i++;
			}
			else if (validate(*(format + (i + 1))) == 1)
			{
				j += get_func(*(format + (i + 1)), arg);
				i++;
			}
		}
		else
		{
			_putchar(format[i]);
			j++;
		}
	}
	va_end(arg);
	return (j);
}
/**
 * validate - validate type and convertion
 * @s: to validate
 * Return: 1 if found 0 if not
 */
int validate(char s)
{
		op_t ops[] = {
		{'c', NULL},
		{'s', NULL},
		{'d', NULL},
		{'i', NULL},
		/**{"R", rot13_format},*/
		{0, NULL}
	};

	int i;

	for (i = 0; ops[i].c != 0; i++)
	{
		if (ops[i].c == s)
		{
			return (1);
		}
	}
	return (0);
}
