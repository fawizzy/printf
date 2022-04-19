#include "main.h"
#include <stdlib.h>

int print_c(va_list arg)
{
	char ch;

	ch = (char)va_arg(arg, int);
	_putchar(ch);

	return (1);
}
