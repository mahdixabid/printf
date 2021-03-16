#include "holberton.h"
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
			else if (get_func(*(format + (i + 1)), arg) != 0)
			{
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