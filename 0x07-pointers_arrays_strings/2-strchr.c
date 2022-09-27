#include <stdio.h>
#include "main.h"

/**
*_strchr - locates a character in a string
*@s: string to check in
*@c: char to check f
*Return: pointer to spot
*/

char *_strchr(char *s, char c)
{
	int n;

	for (n = 0; *(s + n); n++)
	{
		if (*(s + n) == c)
		{
			return (s + n);
		}
	}
	if (*(s + n) == c)
		return (s + n);

	return (0);
}
