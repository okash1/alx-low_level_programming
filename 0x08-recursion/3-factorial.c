#include <stdio.h>
#include "main.h"

/**
*factorial - prints factorial of a given number
*@n: given number
*Return: Factorial
*/

int factorial(int n)
{
	int result;

	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	result = factorial(n - 1);
	return (n * result);
}
