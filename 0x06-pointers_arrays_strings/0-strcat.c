#include <stdio.h>
#include "main.h"

/**
*_strcat - concatenate strings
*@dest: string to be appended
*@src: string to be concatenaed upon
*Return: pointer to @dest
*/

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i++])
		j++;

	for (i = 0; src[i]; i++)
		dest[j++] = src[i];

	return (dest);
}
