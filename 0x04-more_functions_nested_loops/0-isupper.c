#include <stdio.h>
#include "main.h"

/**
*_isupper - checks if a character is upper of lower
*@c: the character
*Return: 0
*/

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}

	return (0);
}
