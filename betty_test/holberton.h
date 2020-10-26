#ifndef PRINTF_H
#define PRINTF_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * struct struct_format - Define a structure with a string format
 * and function for print it.
 * @str_format: String of format.
 * @fun_print: Function for print.
 */
typedef struct struct_format
{
	char *str_format;
	int (*fun_print)(va_list);
} struct_format;


int _putchar(char c);
int _printf(const char *format, ...);
int check_funtion(const char *format, print_str list[], va_list arg_list);

#endif
