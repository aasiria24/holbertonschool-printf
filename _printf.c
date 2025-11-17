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
	int count = 0;

	if (!format)
		return (-1);

	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			/* Handle case when format ends with % */
			if (*format == '\0')
				return (-1);

			if (*format == 'c')
			{
				char c = (char)va_arg(args, int);
				count += _putchar(c);
			}
			else if (*format == 's')
			{
				char *str = va_arg(args, char *);
				if (!str)
				{
					/* Print (null) exactly as printf does */
					count += _putchar('(');
					count += _putchar('n');
					count += _putchar('u');
					count += _putchar('l');
					count += _putchar('l');
					count += _putchar(')');
				}
				else
				{
					while (*str)
					{
						count += _putchar(*str);
						str++;
					}
				}
			}
			else if (*format == '%')
			{
				count += _putchar('%');
			}
			else
			{
				/* Handle unknown specifier by printing % and the character */
				count += _putchar('%');
				count += _putchar(*format);
			}
		}
		else
		{
			count += _putchar(*format);
		}
		format++;
	}

	va_end(args);
	return (count);
}
