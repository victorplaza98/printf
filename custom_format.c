#include "holberton.h"

/**
 * print_rev - prints a string in reverse
 * @s: string
 * Return: On success 1.
 */
int print_rev(char *s)
{
	int i = 0;
	int count = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	i = i - 1;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
		count++;
	}
	return (count);
}

/**
 * print_r - Print a string in reverse.
 * @list: list of aguments.
 * Return: Return a number
 */
int print_r(va_list list)
{
	int num_length;

	num_length = print_rev(va_arg(list, char *));
	return (num_length);
}

#include "holberton.h"

/**
 * rot13 - Encode and print a string using rot13.
 * @s: string to change.
 * Return: Encode string.
 */
int rot13(char *s)
{
	int i, j, count = 0;
	char org[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char key[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; org[j] != '\0'; j++)
		{
			if (s[i] == org[j])
			{
				_putchar(key[j]);
				count++;
				break;
			}
		}
		if (org[j] == '\0')
		{
			_putchar(s[i]);
			count++;
		}
	}
	return (count);
}

/**
 * print_R - Print a string argument in rot13.
 * @list: list of aguments.
 * Return: Return a number
 */
int print_R(va_list list)
{
	int num_length;

	num_length = rot13(va_arg(list, char *));
	return (num_length);
}
