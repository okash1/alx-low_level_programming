#include <stdio.h>
#include "main.h"

/**
*_puts - prints a string
*@str: the string to print
*
*Description: prints a string
*on sucess: returns no error
*/

void _puts(char *str)
{
	int i = 0;

	while (*(str + 1) != '\0')
	{
		putchar(*(str + i));
		i++
	}
	putchar(10);
}
