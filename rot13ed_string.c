#include "main.h"
#include <stdio.h>

/**
* rot13 - function converts a string to rot13
* @list: string to be converted
* Return: Count of coverted string
*/
int rot13(va_list list)
{
	int i, j;
	char *str;
	char str1[] = "abcdefjhijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char str2[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	str = va_arg(list, char *);
	if (str == NULL)
		return (-1);
	for (i = 0; str[i]; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (str[i] == str1[j])
			{
				_putchar(str2[j]);
				break;
			}
		}
		if (i == 52)
			_putchar(str[i]);
	}
	return (i);
}
