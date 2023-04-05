#include "main.h"

/**
 * is_palindrome - A function that checks if a string is a palindrome
 * @s: string
 * Return: 1 if string is palindrome otherwise 0
 **/

int is_palindrome(char *s)
{
	int len;

	len = _strlen_recursion(s);
	if (len == 0 || *s != s[len - 1])
	{
		return (0);
	}
	else
	return (is_palind_recursive(s, 0, len - 1));
}
