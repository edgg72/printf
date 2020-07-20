#ifndef HOLBERTON_H_
#define HOLBERTON_H_

#include <stdarg.h>
/**
 * struct lo - structure that prints depending on the type
 * @chr: type
 * @f: function to print
 */


typedef struct lo
{
	char *chr;
	int (*f)(va_list);
} lo_p;


int conditional_char(char n);
int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list chr);
int print_str(va_list s);
int (*new_value(char n))(va_list);
int print_percent(va_list __attribute__((unused)) percent);
int print_num(va_list num);
int print_unsigned(va_list uns);

#endif /* HOLBERTON_H_ */
