#include "holberton.h"

/**
 * print_c - Prints charater.
 * @list: List
 * Return: 1 num
 */
int print_c(va_list list)
{
	_putchar(va_arg(list, int));
	return (1);
}

/**
 * print_s - Print string.
 * @list: List
 * Return: 1 num
 */
int print_s(va_list list)
{
	int i;
	char *str;

	str = va_arg(list, char *);
	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	return (i);
}

/**
 * print_por - Prints a percent symbol
 * @list: list
 * Return: return %
 */
int print_por(__attribute__((unused))va_list list)
{
	_putchar('%');
	return (1);
}
