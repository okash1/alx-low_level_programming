#include <stdio.h>
#include "main.h"

/**
*_abs - computes the absolute value of an int
*@n: the int
*Return: 0
*/

int _abs(int n)
{
	if (n > 0 || n == 0)
	{
		return (n);
	}
	else
		return (n * -1);
}
