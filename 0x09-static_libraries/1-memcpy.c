#include "main.h"

/**
 *_memcpy - A function that copies a memory area
 *@dest: Memory dest
 *@src: Memory copied
 *@n: Number of bytes
 *
 *Return: dest = success
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	int j = 0;

	while (n > 0)
	{
		dest[i] = src[j];
		i++;
		j++;
		n--;
	}
	return (dest);
}
