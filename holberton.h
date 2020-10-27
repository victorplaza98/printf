#ifndef PRINTF_H
#define PRINTF_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * struct print_format - Define a structure with a string format
 * and function for print it.
 * @str_format: String of format.
 * @fun_print: Function for print.
 */
typedef struct print_format
{
	char *str_format;
	int (*fun_print)(va_list);
} print_format;

/*Helper fuctions*/
int _putchar(char c);

int _printf(const char *format, ...);
int print_c(va_list list);
int print_s(va_list list);
int print_por(__attribute__((unused))va_list list);
int print_integer(va_list list);
int print_number(int n);

#endif
