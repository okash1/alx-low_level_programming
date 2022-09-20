#include <stdio.h>
#include "main.h"

/**
*rev_string - reverse strings completely
*@s: string to reverse
*Return: Nothing
*/

void rev_string(char *s)
{
	int i, j;
	char c;

	for (i = 0; s[i] != '\0'; i++)

	for (j = 0; j < i / 2; j++)
	{
		c = s[i];
		s[i] = s[i - 1 - j];
		s[i - 1 - j] = c;
	}
}
