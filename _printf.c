#include "main.h"

/**
* _printf - produces output according to a format
* @format: character string containing directives
*
* Return: number of characters printed (excluding null byte)
*/

int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, count = 0;

	if (format == NULL)
		return (-1);

	va_start(args, format);

	while (format[i])
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			count++;
		}
		else
		{
			i++; /* تجاوز % */

			switch (format[i])
			{
				case 'c':
					_putchar(va_arg(args, int));
					count++;
					break;

				case 's':
					count += print_string(va_arg(args, char *));
					break;

				case 'd':
				case 'i':
					count += print_number(va_arg(args, int));
					break;

				case 'b':
					count += print_binary(va_arg(args, unsigned int));
					break;

				case '%':
					_putchar('%');
					count++;
					break;

				default:
					_putchar('%');
					_putchar(format[i]);
					count += 2;
					break;
			}
		}
		i++;
	}

	va_end(args);
	return (count);
}

