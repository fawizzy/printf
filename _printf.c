#include "main.h"
#include <stdlib.h>

/**
 * _printf - print characters
 * @format: characters to print
 * @...: other characters to print
 * Return: length of characters
 */

int _printf(const char *format, ...)
{
	int i = 0, length = 0;
	
	va_list(arg);

	va_start(arg, format);

	while (format[i])
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			i++;
			length++;
		}
		else
		{
			if (format[i + 1] == 'c')
			{
				print_c(arg);
				i += 2;
			}
		}
	}

	return (length);
}
