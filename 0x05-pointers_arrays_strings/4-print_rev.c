#include <stdio.h>
#include <string.h>
#include "main.h"

/**
*print_rev - prints reverse of a string
*@s: string to be reversed
*Return: Nothing
*/

void print_rev(char *s)
{
	int l = strlen(s);

	while (l--)
		_putchar(*(s + l));

	_putchar(10);
}
