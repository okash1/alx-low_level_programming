#include <stdio.h>
#include "main.h"

/**
*_strncat - concatenates two strings but add inputted no of bytes
*@dest: string to append upon
*@src: string to add at end of dest
*@n: int parameter to compare index to
*Return: new concatenated string
*/

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i])
		j++;

	for (i = 0; src[i] && i < n; i++)
		dest[j++] = src[i];

	return (dest);
}
