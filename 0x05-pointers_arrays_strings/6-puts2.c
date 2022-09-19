#include <stdio.h>
#include "main.h"

/**
*puts2 - pritns every other char
*@str: string
*Return: Nothing
*/

void puts2(char *str)
{
	int i = 0;

	while ((*str + 1) != '\0')
	{
		if (i % 2 == 0)
			_putchar(*(str + i));
	i++;
	}
	_putchar(10);
}
