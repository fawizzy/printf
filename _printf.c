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
	int (*f)(va_list);
	int i = 0, j = 0, length = 0;

	va_start(arg, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			f = get_format(&format[i[);

			if (f != NULL)
			{
				length += f(arg);
				i += 2;
				continue;
			}
			else
			{
				if (format[i] == '%' && format[i + 1] == '\0])
					return (-1);
				length += _putchar(format[i]);
			}
			
		}
		else
			length += _putchar(format[i]);
	}
	va_end(arg);

	return (length);
}

int (*get_format(const char *format))(va_list arg)
{
	int i = 0;
	format_t list[] = {
		{"d", print_i},
		{"i", print_i},
		{"s", print_s},
		{"c", print_c},
		{"x", print_x},
		{"X", print_X},
		{"u", print_u},
		{"o", print_octal},
		{"r", print_rev},
		{"R", print_root},
		{"%", print_mod},
		{NULL, NULL}};

	for (i = 0; list[i].type != NULL; i++)
	{
		if (list[i].type == *format)
			return (list[i].f);
	}

	return (list[i].f);
}
