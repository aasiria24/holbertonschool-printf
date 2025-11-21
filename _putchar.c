#include "main.h"

/**
* _putchar - writes the character c to stdout
* @c: The character to print
*
* Return: On success 1.
* On error, -1 is returned.
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}

/**
* print_string - prints a string
* @str: string to print
*
* Return: Number of characters printed
*/
int print_string(char *str)
{
int count = 0;

if (str == NULL)
str = "(null)";

while (*str)
count += _putchar(*str++);

return (count);
}

/**
* print_number - prints an integer
* @n: integer to print
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

count += _putchar(num % 10 + '0');

return (count);
}


/***
 * print_bainary - print a binary
 * @n: binary to print
 *
 * Return: Number of characters printed
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

