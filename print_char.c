#include "main.h"
#include <stdlib.h>

int print_char(va_list arg)
{
	char ch;

	ch = (char)va_arg(arg, int);
	_putchar(ch);

	return (1);
}

int print_string(va_list arg)
{
	char *str;
	int i = 0;

	str = va_arg(arg, char *);
	if (str == NULL)
		str = "(null)";
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}

	return (i);
}
