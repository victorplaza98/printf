#include "holberton.h"

/**
 * print_integer - Print number of funtion.
 * @list: list aguments.
 * Return: Return a number
 */
int print_integer(va_list list)
{
	int num_length;

	num_length = print_number(va_arg(list, int));
	return (num_length);
}
