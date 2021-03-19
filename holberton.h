#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>

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
int print_percent(va_list arg);
int print_d(va_list args);
int print_i(va_list args);
int rot13_format(char **, va_list);
char *rot13(char *s);

#endif
