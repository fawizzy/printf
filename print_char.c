#include "main.h"
#include <stdlib.h>

/**
 * print_c - print char
 * @arg: characters to print
 * Return: number of characters
 */

int print_c(va_list arg)
{
	char c;

	c = (char)va_arg(arg, int);
	_putchar(c);

	return (1);
}

/**
 * print_s
 * @arg: the string to print
 * Return: number of characters in the string
 */

int print_s(va_list arg)
{
	char *s;
	int i = 0;

	s = va_arg(arg, char *);


	if (s == NULL)
	{
		s = "(null)";
	}

	while(s[i])
	{
		_putchar(s[i]);
		i++;
	}

	return(i);
}

/**
 * print_p - print percentage
 * @arg: character to print
 * Return: number of character
 */

int print_percent()
{
	_putchar('%');
	return(1);
}
