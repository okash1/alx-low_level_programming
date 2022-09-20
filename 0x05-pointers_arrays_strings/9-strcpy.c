#include <stdio.h>
#include "main.h"

/**
*_strcpy - copies the string pointed to by src to buffer, dest
*@dest: buffer
*@src: string
*Return: dest
*/

char *_strcpy(char *dest, char *src)
{
	int i;
	int j = 0;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[j] = src[i];
		j++;
	}
	dest[j] = '\0';

	return (dest);
}
