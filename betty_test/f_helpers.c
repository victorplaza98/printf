#include "holberton.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
       return (write(1, &c, 1));
}

/**
 * _puts_mod - description
 * @str: Pointer to string
 */

void _puts_mod(char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
		_putchar(str[i]);
}

/**
 * _strlen - Count the length of a string.
 * @s: String.
 * Return: Length.
 */
unsigned int _strlen(char *s)
{
	unsigned int c;

	for (c = 0; s[c]; c++)
		;

	return (c);
}

/**
 * _atoi - Find and print the first number
 * @s: String to convert to int
 * Return: int
 */
int _atoi(char *s)
{
	int i, n, c;

	i = n = c = 0;
	while (*(s + i) != '\0')
	{
		if (*(s + i) == '-')
			c++;
		if (*(s + i) >= '0' && *(s + i) <= '9')
		{
			while (*(s + i) >= '0' && *(s + i) <= '9')
			{
				if (n == 0)
				{
					n = (n * 10) + (*(s + i) - '0');
					n *= -1;
				}
				else
					n = (n * 10) - (*(s + i) - '0');
				i++;
			}
			if (c % 2 == 0)
				n *= -1;
			return (n);
		}
		i++;
	}
	return (0);
}

/**
 * print_number - print integer
 * @n: number to print
 *
 */
void print_number(int n)
{
	unsigned int num = 0;

	if (n % 10 < 0)
	{
		_putchar('-');
		num = -n;
	}
	else
	{
		num = n;
	}
	if (num < 10)
		_putchar('0' + (num % 10));
	else
	{
		print_number(num / 10);
		_putchar('0' + num % 10);
	}
}
