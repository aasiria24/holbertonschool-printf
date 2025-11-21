#include "main.h"

/**
 * print_octal - prints a number in octal
 * @n: number to convert
 *
 * Return: number of characters printed
 */
int print_octal(unsigned int n)
{
	int count = 0;

	if (n >= 8)
	{
		/* Recursive call with base 8 */
		count += print_octal(n / 8);
	}

	_putchar((n % 8) + '0');
	count++;

	return (count);
}

