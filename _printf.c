#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * _printf - produce output according to a format
 * @format: string to print that also has conversiontype
 * @...: argument to print
 * Return: length of the string or -1 if error
 */

int _printf(const char *format, ...)
{
	va_list arg;
	char *s, c;
	int d, length = 0;

	va_start(arg, format);
	while (*format)
	{
		if (*format == '%')
			{
				if (*(format + 1) == 'c')
				{
					c = (char)va_arg(arg, int);
					putchar(c);
					*format++;
				}else if (*(format + 1) == 's')
				{
					s = va_arg(arg, int);

					while (*s)
					{
						putchar(*s);
						*s++;
					}
					*format++;
				}else if (*(format + 1) == '%')
				{
					putchar('%');
					*format++;
				}
				*format++;
			}
		putchar(*format);
		*format++;
		length++;
	}
	va_end(arg);

	return (length);
}
