#include  <stdio.h>
#include "holberton.h"
#include <unistd.h>
#include <stdarg.h>

/**
 * _putchar - function for printing
 * @c: argument received
 *
 * Return: argument to standard output
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
