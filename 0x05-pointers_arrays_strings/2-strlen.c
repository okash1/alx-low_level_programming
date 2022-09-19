#include "main.h"

/**
*_strlen - returns the len of a string
*@s: string
*Return: returns the len as int
*/

int _strlen(char *s)
{
	int c;

	for (c = 0; *s != '\0'; ++s)
		c++;

	return (c);


}
