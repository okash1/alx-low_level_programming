#include "main.h"

/**
*swap_int - swaps two integers
*@a: first integer
*@b: second integer
*Return: Nothing
*/

void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
