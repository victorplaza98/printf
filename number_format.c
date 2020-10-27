#include "holberton.h"

/**
 * print_int - Print an integer.
 * @list: list of aguments.
 * Return: Return a number
 */
int print_int(va_list list)
{
	int num_length;

	num_length = print_number(va_arg(list, int));
	return (num_length);
}

/**
 * print_dec - Print a decimal.
 * @list: list of aguments.
 * Return: Return a number
 */
int print_dec(va_list list)
{
	int num_length;

	num_length = print_number(va_arg(list, int));
	return (num_length);
}
