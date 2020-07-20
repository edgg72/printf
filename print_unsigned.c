#include  <stdio.h>
#include "holberton.h"
#include <unistd.h>
#include <stdarg.h>

/**
 * print_unsigned - prints unsigned int
 * @uns: unsigned int received
 *
 * Return: uns int
 */


int print_unsigned(va_list uns)
{

	int n = va_arg(uns, int);
	int digit = 0;
	unsigned int m, d, a;

	m = n;
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
