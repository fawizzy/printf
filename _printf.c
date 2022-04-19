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
	int i = 0, result = 0;
	
	va_list(arg);

	va_start(arg, format);

	while (format[i])
	{
		if (format[i] == '\0')
		{
			return (result);
		}
		else if (format[i] == '%' && format[i + 1])
		{
			result += (*format_conversion(format[i + 1]))(arg);
			i++;
		}
		else
		{
			result += _putchar(format[i]);
		}
		i++;
	}

	return (result);
}
