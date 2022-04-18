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
	int i=0, j = 0, length = 0;

	va_start(arg, format);
	while (format[i])
	{
		if (format[i] == '%')
			{
				if (format[i + 1] == 'c')
				{
					c = (char)va_arg(arg, int);
					putchar(c);
					i++;
				}else if (format[i + 1] == 's')
				{
					s = va_arg(arg, char *);
					j = 0;

					while (s[j])
					{
						putchar(s[j]);
						j++;
					}
					i++;
				}else if (format[i + 1] == '%')
				{
					putchar('%');
					i++;
				}
				i++;
			}
		putchar(format[i]);
		i++;
		length++;
	}
	va_end(arg);

	return (length);
}
