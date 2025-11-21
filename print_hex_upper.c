#include "main.h"

/**
 * print_hex_upper - prints a number in hexadecimal (uppercase)
 * @n: number to convert
 *
 * Return: number of characters printed
 */
int print_hex_upper(unsigned int n)
{
	int count = 0;
	char *hex = "0123456789ABCDEF";

	if (n >= 16)
	{
		count += print_hex_upper(n / 16);
	}

	_putchar(hex[n % 16]);
	count++;

	return (count);
}

