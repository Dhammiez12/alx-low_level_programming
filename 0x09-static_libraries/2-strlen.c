#include<stdio.h>
#include "main.h"

/**
*_strlen - A function that returns the length of a string
*@s: value to be evaluated.
*Return: length = success.
*/

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		s++;
		len++;
	}
	return (len);
}
