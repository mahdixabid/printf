#include "holberton.h"


/**
* print_c - Print character
* @ap: argument pointer
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
* @ap: argument po0inter
* Return: num of parameters printed
*/
int print_s(va_list ap)
{
	int i;
	char *str;

	str = va_arg(ap, char *);
	if (str == NULL)
		str = "(null)";

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
		

	return (i);
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

#include "holberton.h"

/**
*print_rot13 - prints the rot13'ed string
*@str: char to be written
*@args: argument
*
*Return: int
*/
int rot13_format(char **str, va_list args)
{
	char *s;
	char *rot;
	int i;

	s = va_arg(args, char *);
	rot = rot13(s);
	for (i = 0; rot[i]; i++)
	{
		**str = rot[i];
		(*str)++;
	}
	return (0);
}