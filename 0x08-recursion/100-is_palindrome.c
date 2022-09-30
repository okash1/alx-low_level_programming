#include <stdio.h>
#include "main.h"

/**
*is_palindrome - 1 if is palindrome 0 if not
*@s: string to check
*Return: 1 or 0
*/

int is_palindrome(char *s)
{
	int flag = 1;

	check(s, 0, _strlen_recursion(s) - 1, &flag);
	return (flag);
}

/**
*check - check for palindrome
*@s: string to check
*@start: start index
*@end: end index
*@flag: flag to indicate if palindrome
*Return: nothing
*/

void check(char *s, int start, int end, int *flag)
{
	if (start <= end)
	{
		if (s[start] == s[end])
			*flag *= 1;
		else
			*flag *= 0;
		check(s, start + 1, end - 1, flag);
	}
}

/**
*_strlen_recursion - calculates length of string
*@s: string to calculate lenght of
*Return: lenght of string
*/

int _strlen_recursion(char *s)
{
	int sum = 0;

	if (*s != '\0')
	{
		sum++
		sum += _strlen_recursion(s + 1);
	}

	return (sum);
}
