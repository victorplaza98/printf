#include "holberton.b"

/**
 * print_rev - prints a string in reverse
 * @s: string
 * Return: On success 1.
 */
int print_rev(char *s)
{
	int i;
	int count;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
		count++;
	}
	i = i - 1;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
		i = count + 1;
	}
	return (i);
}
