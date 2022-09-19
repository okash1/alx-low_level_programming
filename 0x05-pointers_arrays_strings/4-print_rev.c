#include <stdio.h>
#include "main.h"

/**
*print_rev - prints reverse of a string
*@s: string to be reversed
*Return: Nothing
*/

void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)

	for (--i; i >= 0; --i)
		_putchar(s[i]);

	_putchar('\n')
}
