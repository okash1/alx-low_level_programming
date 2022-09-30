#include <stdio.h>
#include "main.h"

/**
*is_prime_number -checks if input integer is a prime number
*@n: int to check
*Return: 1 or 0
*/

int is_prime_number(int n)
{
	int start = n / 2;

	if (n <= 1)
		return (0);
	return (is_prime(n, start));
}

/**
*is_prime - return 1 is n is prime
*@n: number to be checked
*@start: number to start checking from
*Return: 1 or 0
*/

int is_prime(int n, int start)
{
	if (start <= 1)
		return (1);
	else if (n % start == 0)
		return (0);
	return (is_prime(n, start - 1));
}
