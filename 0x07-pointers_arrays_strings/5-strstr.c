#include <stdio.h>
#include "main.h"

/**
*_strstr - locates a sub string
*@haystack: string in which to check
*@needle: substring to find in haystack
*Return: pointer to beginning of needle
*/

char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0;
	unsigned int j = 0;

	while (haystack[i])
	{
		while (needle[j] && (haystack[i] == needle[0]))
		{
			if (haystack[i + j] == needle[j])
				j++;
			else
				break;
		}
		if (neede[j])
		{
			i++;
			j = 0;
		}
		else
			return (haystack + i);
	}

	return (0);
}
