#include "main.h"

/**
 *_memset - A function that fills memory with a constant
 *@s: Character
 *@b: Value
 *@n: Number of bytes
 *
 *Return: s = success
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (n > 0)
	{
		s[i] = b;
		i++;
		n--;
	}
	return (s);
}
