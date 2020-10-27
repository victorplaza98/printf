#include "holberton.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * get_format - Get the function to print.
 * @format: String with the indicated formated.
 * Return: Pointer to print function
 * or NULL if the inicated foramat is not valid.
 */
static int (*get_format(const char *format))(va_list)
{
	unsigned int i;
	print_format arr_print[] = {
		{"c", print_c},
		{"s", print_s},
		{"37", print_por},
		{NULL, NULL}
	};

	for (i = 0; arr_print[i].str_format != NULL; i++)
	{
		if (*(arr_print[i].str_format) == *format)
			break;
	}
	return (arr_print[i].fun_print);
}


/**
 * idt_format - Identify each character of the format string.
 * @format: String with the format
 * @n_print: Number of printed characters.
 * @i: Runner of the format string.
 * Return: Number of printed characters.
 */
int idt_format(const char *format, unsigned int n_print, unsigned int *i)
{
	unsigned int k, r;
	r = *i;
	printf("Runner = %d", r);

	/*Print and count until find a '%'*/
	for (; format[r] != '%' && format[r] != '\0'; r++)
	{
		_putchar(format[r]);
		n_print++;
	}
	if (format[r] == '\0')
		return (n_print);

	/*If the character is a alone '%' -> Find a function format*/
	if (format[r + 1] == '\0')
		return (-1);
	printf("El caracter actual es: %c\n", format[r + 1] == '\0');
	/*if (format[(*i) + 1] >= 7 || format[(*i) + 1] <= 13)
	{
		_putchar('%');
		_putchar(format[(*i) + 1]);
		n_print++;
		(*i)++;
		return (n_print);
		}*/

	return (n_print);
}

/**
 * _printf - Print a arguement with the format indicated.
 * @format: Main string with the format.
 * Return: Numbers of print carhaters.
 */
int _printf(const char *format, ...)
{
	unsigned int i = 0, n_print = 0;
	unsigned int *run = &i;
	int (*f_print)(va_list);
	va_list arg_list;

	if (format == NULL)
		return (-1);

	va_start(arg_list, format);

	for (; format[i] != '\0' ; i++)
	{
		n_print = idt_format(format, n_print, run);
		if (n_print < 0)
			return (-1);

		f_print = get_format(&format[i + 1]);

		if (f_print != NULL) /*If the function was found*/
		{
			n_print += f_print(arg_list);
			i += 1;
		}
	}
	va_end(arg_list);
	return (n_print);
}
