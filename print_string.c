#include "holberton.h"

/**
* print_c - Print character
* @ar_list: Store the a list of characters
* Return: num of parameters printed
*/
int print_c(va_list ap)
{
	char c = va_arg(ap, int);

	_putchar(c);
	return (1);

}

/**
* print_s - print string
* @ar_list: Store the a list of characters
* Return: num of parameters printed
*/
int print_s(va_list ap)
{
	int i, count = 0;
	char *str;

	str = va_arg(ap, char *);
	if (str == NULL)
		str = "(null)";

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
		count = count + 1;

	return (count);
}
/**
 *print_percent - print_percent
 *@arg:argument
 * Return:1
 */
int print_percent(va_list arg)
{
	(void)arg;

	_putchar('%');
	return (1);
}