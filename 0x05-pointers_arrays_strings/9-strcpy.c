#include<stdio.h>
#include "main.h"

/**
 *_strcpy - Copy string to a new pointed variable.
 *@dest: value to be evaluated.
 *@src: value to be evaluated.
 *Return: dest = success.
 */

char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int x = 0;

	while (*(src + l) != '\0')
	{
		l++;
	}
	for ( ; x < l ; x++)
	{
		dest[x] = src[x];
	}
	dest[l] = '\0';
	return (dest);
}
