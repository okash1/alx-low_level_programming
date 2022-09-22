#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
*print_alphabet - prints alphabet in lower case followed by a newline
*Return: Nothing.
*/

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);
	_putchar('\n');
}
