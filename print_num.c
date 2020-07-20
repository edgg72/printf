#include  <stdio.h>
#include "holberton.h"
#include <unistd.h>
#include <stdarg.h>

/**
 * print_num - prints numbers
 * @num: number received
 *
 * Return: digit
 */

int print_num(va_list num)
{

	int n = va_arg(num, int); /*prints an integer 0x06-100-print_number.c */
	int digit = 0;
	unsigned int m, d, a;

	if (n < 0)
	{
		_putchar(45);
		digit++;
		m = n * -1;
	}
	else
	{
		m = n;
	}

	d = m;
	a = 1;

	while (d > 9)
	{
		d /= 10;
		a *= 10;
	}

	for (; a >= 1; a /= 10)
	{
		_putchar(((m / a) % 10) + 48);
		digit++;
	}


	return (digit);
}
