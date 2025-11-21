#include "main.h"

/**
 * print_unsigned - prints an unsigned integer
 * @n: number to print
 *
 * Return: number of characters printed
 */
int print_unsigned(unsigned int n)
{
	int count = 0;

	if (n >= 10)
	{
		/* Recursive call with the number without the last digit */
		count += print_unsigned(n / 10);
	}

	/* Print the last digit as a character */
	_putchar((n % 10) + '0');
	count++;

	return (count);
}

