
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
