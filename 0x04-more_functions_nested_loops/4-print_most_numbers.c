#include <stdio.h>
#include "main.h"

/**
*print_most_numbers - check the code
*Return: Always 0.
*/

void print_most_numbers(void)
{
	int n;

	for (n = 48; n < 58; n++ )
	{
		if ((n !=  50) || (n != 52))
		{
			putchar(n);
		}
	}
	putchar(10);
}
