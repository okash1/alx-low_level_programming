#include <stdio.h>
#include "main.h"

/**
*puts_half - prints half of a string
*@str: string to print the half of
*Return: Nothing
*/

void puts_half(char *str)
{
	int i, j;

	for (i = o; str[i] != '\0'; i++)

	if (i % 2 == 0)
	{
		for (j = i / 2; str[j] != '\0'; j++)
			_putchar(str[j]);
	}
	else
	{
		for (j = ((i - 1) / 2) + 1; strn[j] != '\0'; j++)
			_putchar(str[j]);
	}
	_putchar('\n');
}
