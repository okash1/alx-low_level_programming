#include "main.h"
#include "_putchar.c"
#include "2-main.c"
/**
 * print_alphabet x10 - Check main
 * Description: function uses _putchar function to print
 * Return: Nothing.
 */
void print_alphabet_x10(void)
{
	char i;
	int j;

	for (j = 0; j < 10; j++)
	{
		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);
		_putchar(i);
	
	}
}
