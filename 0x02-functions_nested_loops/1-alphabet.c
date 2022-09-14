#include <unistd.h> 
#include "main.h"
#include "1-main.c"
/**
 * print_alphabet - Check description
 * Description: it prints the alphabet in lowercase follwed by a new line
 * Return: Nothing.
 */
void print_alphabet(void)
{
	char i;

	for (i= 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
}
