#include "main.h"
#include <stdio.h>
/**
 * _puts - A function that prints a string followed by a new line
 * @str: string
 */
void _puts(char *str);
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}
