#include "main.h"

/**
 * print_hex_lower - prints a number in hexadecimal (lowercase)
 * @n: number to convert
 *
 * Return: number of characters printed
 */
int print_hex_lower(unsigned int n)
{
	int count = 0;
	char *hex = "0123456789abcdef";

	if (n >= 16)
	{
		count += print_hex_lower(n / 16);
	}

	_putchar(hex[n % 16]);
	count++;

	return (count);
}

