#include <stdio.h>
#include "main.h"

/**
*_memcpy - copies a memoery block
*@dest: memory to be copied to
*@src: memory to copy
*@n: numer of bytes to be copied
*Return: dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
