#include "holberton.h"
#include <stdarg.h>
#include <stdio.h>
#include <string.h>

/**
 * _printf - produces output according to a format
 * @format: is a character string
 *
 * Return: the number of characters printed
 *         (excluding the null byte used to end output to strings)
 *         write output to stdout, the standard output stream
 */

int _printf(const char *format, ...)
{
	va_list valist;
	int count = 0, i = 0;

	va_start(valist, format);

	if (format == NULL || (*format == '%' && strlen(format) == 1))
		return (-1);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
			i++;
			if (format[i] == '%')
			{
				_putchar('%');
				count++;
			}
			else if (conditional_char(format[i]) == 1)
				count += (new_value(format[i]))(valist);

			else if (format[i] != '\0')
			{
				_putchar('%');
				_putchar(format[i]);
				count = count + 2;
			}
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
	i++;
	}
	va_end(valist);
	return (count);
}
