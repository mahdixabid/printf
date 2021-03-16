#include "holberton.h"
#include <stdarg.h>

/**
 * print_d - prints a decimal
 * @args: decimal argument
 * Return: counter
 */
int print_d(va_list args)
{

	unsigned int d, x, countnum, count = 0;
	int n;

	n = va_arg(args, int);

		if (n < 0)
		{
			d = (n * -1);
			count = count + _putchar(45);
		}
		else
			d = n;

	x = d;
	countnum = 1;
	while (x > 9)
	{
		x = x / 10;
		countnum = countnum * 10;
	}
	while (countnum >= 1)
	{
		count = count + _putchar(((d / countnum) % 10) + '0');
		countnum = countnum / 10;
	}
	return (count);
}
/**
 * print_i - prints integer
 * @args: integer argument
 * Return: the decimal function
 */

int print_i(va_list args)
{
	return (print_d(args));
}
