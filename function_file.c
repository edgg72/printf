#include  <stdio.h>
#include "holberton.h"
#include <unistd.h>
#include <stdarg.h>

/**
 * conditional_char - checks that the argument passed matches
 * @n: argument received
 *
 * Return: 1 if matches, 0 otherwise
 */

int conditional_char(char n)
{
	int i = 0;

	if (n == 'c' || n == 'i' || n == 'd' || n == 's' || n == 'u')
	{
		i = 1;
	}
	return (i);
}

/**
 * new_value - this function holds the struct
 *             with the character expected and the matching function
 *
 * @n: argument received
 *
 * Return: function with matching character
 */

int (*new_value(char n))(va_list)
{
	int i = 0;

	lo_p ftr[] = {             /* struct function*/
		{"c", print_char},
		{"s", print_str},
		{"d", print_num},
		{"i", print_num},
		{"u", print_unsigned},
		/*    {"%", print_percent}, */
		{NULL, NULL}
	};

	while (ftr[i].chr != NULL)
	{
		if (n == *(ftr[i].chr))
			return (ftr[i].f);
	i++;
	}

	return (NULL);
}


/**
 * print_char - function for printing chars
 * @chr: character received
 *
 * Return: 1 because it's just one character
 */

int print_char(va_list chr) /* function for printing chars  */
{
	char b = (char)(va_arg(chr, int));

	_putchar(b);
	return (1);
}

/**
 * print_str - prints strings
 * @s: string received
 *
 * Return: length of string
 */

int print_str(va_list s)  /* function for printing strings  */
{
	int i;
	char *str = va_arg(s, char *);

	if (str != NULL)
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}

	}
	else
	{
		_putchar('(');
		_putchar('n');
		_putchar('u');
		_putchar('l');
		_putchar('l');
		_putchar(')');
		return (6);
	}

	return (i);
}
