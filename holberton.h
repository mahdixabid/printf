#ifndef _HOLBERTON_
#define _HOLBERTON_
#include <limits.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
#include <string.h>


/**
* struct op - flag / function object
* @c: flag
* @f: function
*/

typedef struct op
{
	char c;
	int (*f)(va_list);
} op_t;

int _printf(const char *format, ...);
int _putchar(char c);
int print_c(va_list ap);
int get_func(char s, va_list ap);
int print_s(va_list ap);
int print_d(va_list n);
int print_i(int n);
int print_percent(va_list arg);

#endif
