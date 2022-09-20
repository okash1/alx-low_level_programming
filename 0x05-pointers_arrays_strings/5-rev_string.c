#include <stdio.h>
#include "main.h"

/**
*rev_string - reverse strings completely
*@s: string to reverse
*Return: Nothing
*/

void rev_string(char *s)
{
	int i, t, l = _strlen(s);	

	for (i = 0; i < l /2; i++)
	{
		t = *(s + i);
		*(s + i) = *(s + l - i -1);
		*(s + l -i -1) = t;
	}
}
/**
*_strlength - return the len of a str
*@s: string
*Return: the len of the given str
*/

int _strlen(char *s)
{
	int l = 0;
	
	while (*(s + l) != '\0')
		l++;

	return (l);
}
