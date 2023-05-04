#include "main.h"

/**
 * _stoi - A function that converts chars to ints
 * @c: char
 * Return: integer
 */
unsigned int _stoi(char c)
{
	return ((unsigned int) c - '0');
}

/**
 * _strlen - A function that calculates the length of a string
 * @s: string
 * Return: length
 */

unsigned int _strlen(const char *s)
{
	unsigned int i;

	for (i = 0; s[i]; i++)
		;
	return (i);
}
/**
 * binary_to_uint - A function that converts a
 * binary number to an unsigned int
 * @b: string
 * Return: integer
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int result, tmp, expo;

	if (!b)
		return (0);
	result = tmp = 0;
	expo = 1;
	for (i = _strlen(b) - 1; b[i]; i--, expo *= 2)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		tmp = _stoi(b[i]);
		result += tmp * expo;
	}
	return (result);
}
