#include "main.h"
/**
 * print_binary - prints an unsigned int in binary
 * @n: number to print
 *
 * Return: number of characters printed
 */
int print_binary(unsigned int n)
{
	char buffer[32];
	int i = 0, j, count = 0;

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}

	while (n > 0)
	{
		buffer[i++] = (n % 2) + '0';
		n /= 2;
	}

	for (j = i - 1; j >= 0; j--)
	{
		_putchar(buffer[j]);
		count++;
	}

	return (count);
}

