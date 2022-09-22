#include <stdio.h>
#include "main.h"

/**
*_strncpy - function that copies a string
*@dest: buffer where string is
*@src: source of string
*@n: max no of byte to occupy
*Return: retunrs dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
