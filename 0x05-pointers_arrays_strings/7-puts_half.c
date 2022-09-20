#include <stdio.h>
#include "main.h"

/**
*puts_half - prints half of a string
*@str: string to print the half of
*Return: Nothing
*/

void puts_half(char *str)
{
	int i, l = _strlen(str);

	for (i = ((l - 1) / 2) + 1; i < l; i++)
		_putchar(*(str + i));
	_putchar(10);
}

/**
*_strlen - returns len of string
*@s: string
*Return: len of the str
*/

int _strlen(char *s)
{
	int l = 0;

	while (*(s + l) != '\0')
		l++;

	return (l);
}
