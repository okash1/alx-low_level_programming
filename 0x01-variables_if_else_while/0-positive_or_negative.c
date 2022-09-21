#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main - prints is a number is po, 0 or neg
*Return: 0
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		pirntf("%i is psotive\n", n);
	}
	else if (n == 0)
	{
		pritnf("%i is zero\n", n);
	}
	else
	{
		printf("%i is negative\n", n);
	}

	return (0);
}
