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

/**
* print_rot13 - print a string how rot13
* @a: args passed
* Return: str
*/
int print_rot13(va_list arg)
{
	char *str;
	int i, j;
	char ch1[] = "ABCDEFGHIJKLMabcdefghijklmNOPQRSTUVWXYZnopqrstuvwxyz";
	char ch2[] = "NOPQRSTUVWXYZnopqrstuvwxyzABCDEFGHIJKLMabcdefghijklm";

	str = va_arg(arg, char *);
	if (str == NULL)
	{
		str = "(ahyy)";
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j <= 52; j++)
		{
			if (str[i] == ch1[j])
			{
				_putchar(ch2[j]);
				break;
			}
		}
		if (j == 53)
		_putchar(str[i]);
	}
	return (i);
}

#include "holberton.h"
/**
 * print_r - prints a string in reverse
 * @rev: string to print
 * Return: number of chars printed
 */
int print_r(va_list rev)
{
	char *str;
	int i, count = 0;

	str = va_arg(rev, char *);
	if (str == NULL)
		str = ")llun(";
	for (i = 0; str[i]; i++)
		;
	for (i = i - 1; i >= 0; i--)
	{
		_putchar(str[i]);
		count++;
	}
	return (count);
}