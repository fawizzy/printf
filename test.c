#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 *  * main - Entry point
 *   *
 *    * Return: Always 0
 *     */
int main(void)
{
	int len;
	int len2;
	len =_printf("Character:[%s]\n", "hello");
	len2 =printf("Character:[%s]\n", "hello");
	printf("Character:[%c]\n", 'H');
	printf("%d\n", len);
	printf("%d\n", len2);
	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");
	printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);
	return (0);
}
