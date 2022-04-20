#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 *  * format_conversion - pointer function
 *   * @s: the formats e.g (%d,%s,%b...)
 *    * Return: int(*)(va_list)
 *     */

int (*format_conversion(char s))(va_list)
{
	ft conversion_type[] = {
		/*{'d', print_digit},
		{'i', print_digit},*/
		{'c', print_char},
		{'s', print_string},
		{'%', percentage},
		{'\0', NULL}
		};

	unsigned int i;

	for (i = 0; conversion_type[i].F != '\0'; i++)
	{
		if (conversion_type[i].F == s)
		{
			return (conversion_type[i].T);
		}

	}
	if (conversion_type[i].F == '\0' || conversion_type[i].F == 0)
	{
		_putchar(s);
		return (NULL);
	}
	return (conversion_type[i].T);
}

