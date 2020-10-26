#include "holberton.h"
#include <stdarg.h>

/**
 * _printf - Print a arguement with the format indicated.
 * @format: Main string with the format.
 * Return: Numbers of print carhaters.
 */
int _printf(const char *format, ...)
{
	unsigned int n_print, i;
	int (*f_print)(va_list);

	va_list arg_list;

	if (format == NULL)
		return (-1);

	va_start(arg_list, format);

	for (i = 0; format[i] != '\0' ; i++)
	{
		for (; format[i] != '%', i++)/*Print and count until find a '%'*/
		{
			_putchar(format[i]);
			n_print++;
			if (format[i] == '\0')
				return (n_print);
		}
		if (format[j] == '%')/*If there are two '%'*/
		{
			_putchar(format[j]);
			i = j + 1;
			continue;
		}

		/*If the character is a alone '%' -> Find a function format*/
		if (format[i + 1] == '\0')
			return (-1);

		f_print = get_format(&format[i + 1]);

		if (f_print != NULL) /*If the function was found*/
		{
			n_print += f(arg_list);
			i += 2;
		}
	}
	va_end(arg_list);
	return (n_print);
}
