#include "holberton.h"
#include <stdlib.h>
#include <stdarg.h>
/**
 * _printf - Print with the format indicated in the main string,
 * a series of arguments given by the user.
 * @format: Main string with the format.
 * Return: Numbers of print carhaters.
 */
int _printf(const char *format, ...)
{
	int imprimir, i, n_print, end, j, k, n_space;
	unsigned int size, count, cons_num;
	/*char* c_fsum = NULL, c_justify = NULL, c_fhash = NULL, c_zero = NULL;}*/
	int *c_fsum, *c_justify, *c_fhash, *c_zero;
	char *c_format = NULL, *c_long = NULL, *str_num = NULL;

        /* list: lista de todas las funciones posibles*/
        print_str list[] = {
                {"c", print_c},
                {"s", print_s},
                {"%", print_por},
                {NULL, NULL}
        };

        /*arg_list: contiene todos los argumentos pasados al programa*/
        va_list arg_list;


        if (format == NULL)
                return (-1);

        va_start(arg_list, format);

        for (i = 0; format[i] != NULL ; i++)
        {
                if (format[i] != '%')
                {
                        _putchar(format[i]);
                        n_print++;
                }
                else
                {       /*verificar el tamaño aqui  ------------*/
                        c_fsum = c_justify = c_zero = c_hash = 0;

                        str_num = malloc((size - j + 1) *sizeof(char));

                        b_end = 1;
                        b_check = 0;
                        count =  cons_num = 0;

                        for (j = i + 1; b_end != 0 && str_num != NULL; j++)
                        {
                                identify_num(format[j], &str_num, count,
                                             cons_num);
                                b_check = identify_char(format[j], &c_fsum, &c_justify,
                                              &c_fhash);
                                identity_long(format[j], &c_long );

                                char *c_format = calloc(2, sizeof(char));
                                b_check = identify_format(format[j], &c_format);

                                if (count == 1 && str_num[count - 1] == 0)
                                        c_zero = j;

                                /*Verificar si hay repetidos por ejemplo ++5%d*/
                        }
                        n_space = check_num(&str_num, &c_zero);
                        format_check();
                        free(str_num);
                        free(c_format);
                    }
        }
        /* SE LLAMA A CHECH FUNTION */
        imprimir = check_funtion(format, list, arg_list);
        va_end(arg_list);
        /* debe de retornar**/
        return (imprimir);
}
