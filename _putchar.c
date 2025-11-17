#include "main.h"

/**
 * _putchar - Writes a character to stdout
 * @c: Character to print
 *
 * Return: 1 on success, -1 on error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_string - Prints a string
 * @str: Pointer to the string to print
 *
 * Return: Number of characters printed
 */
int print_string(char *str)
{
	int count = 0;

	if (!str)
		str = "(null)";

	while (*str)
	{
		count += _putchar(*str);
		str++;
	}

	return (count);
}

/**
 * print_number - Prints an integer
 * @n: Integer to print
 *
 * Return: Number of characters printed
 */
int print_number(int n)
{
	int count = 0;
	unsigned int num;

	if (n < 0)
	{
		count += _putchar('-');
		num = -n;
	}
	else
	{
		num = n;
	}

	if (num / 10)
		count += print_number(num / 10);

	count += _putchar((num % 10) + '0');

	return (count);
}
