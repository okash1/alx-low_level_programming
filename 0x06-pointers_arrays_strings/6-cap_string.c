#include <stdio.h>
#include "main.h"

/**
*_strlen - returns the length of a string
*@s: the string
*Return: Lenght of the string as in
*/

int _strlen(char *s)
{
	int l = 0;

	while (*(s + l) != '\0')
		l++;

	return (l);
}

/**
*cap_string - apitalizes all words of a string
*@str: string to capitalize
*Return: str
*/

char *cap_string(char *str)
{
	int i = 0;

	while (str[++i])
	{
		while (!(str[i] >= 'a') && (str[i] <= 'z'))
			i++;

		if (str[i - 1] == ' ' ||
				str[i - 1] == '\t' ||
				str[i - 1] == '\n' ||
				str[i - 1] == ',' ||
				str[i - 1] == ';' ||
				str[i - 1] == '.' ||
				str[i - 1] == '!' ||
				str[i - 1] == '?' ||
				str[i - 1] == '"' ||
				str[i - 1] == '(' ||
				str[i - 1] == ')' ||
				str[i - 1] == '{' ||
				 str[i - 1] == '}')
			str[i] -= 32;
	}

	return (str);
}
