#include "holberton.h"

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
		{"i", print_i},
		{"d", print_d},
		{"u", print_u},
		{"b", print_b},
		{"o", print_o},
		{"x", print_x},
		{"X", print_X},
		{"p", print_p},
		{"S", print_S},
		{"r", print_r},
		{"R", print_R},
		{NULL, NULL}
	};

	for (i = 0; arr_print[i].t != NULL; i++)
	{
		if (*(arr_print[i].t) == *format)
			break;
	}
	return (arr_print[i].fun_print);
}
