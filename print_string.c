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
* Return: lenght of string
*/
int print_R(char *a)
{
	int count = 0;
	int x = 0;
	int s = 0;
	char z[52] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char b[52] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (x = 0; a[x] != '\0'; x++)
	{
		for (s = 0; z[s] != '\0'; s++)
		{
			if (a[x] == z[s])
			{
				count += _putchar(b[s]);
				break;
			}
		}
		if (s > 51)
		{
			count += _putchar(a[x]);
		}
	}
	return (count);
}
