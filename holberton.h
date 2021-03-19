#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
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
int validate(char s);
int _printf(const char *format, ...);
int _putchar(char c);
int print_c(va_list ap);
int get_func(char s, va_list ap);
int print_s(va_list ap);
int print_percent(va_list arg);
int print_d(va_list args);
int print_i(va_list args);
int print_rot13(va_list arg);
int print_r(va_list r);
#endif
