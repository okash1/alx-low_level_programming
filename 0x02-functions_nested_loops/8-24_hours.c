#include <stdio.h>
#include "main.h"

/**
*jack_bauer - prints every minute of the day of Jack Bauer
*Return: 0
*/

void jack_bauer(void)
{
	int hours = 0;
	int mins = 0;
	int hours_rem;
	int mins_rem;

	while (hours <= 23)
	{
		while (mins <= 59)
		{
			mins_rem = mins % 10;
			hours_rem = hours % 10;
			_putchar(hours / 10 + '0');
			_putchar(hours_rem + '0');
			_putchar(':');
			_putchar(mins / 10 + '0');
			_putchar(mins_rem + '0');
		mins++;
		_putchar('\n');
		}
	hours++;
	mins = 0;
	}
}
