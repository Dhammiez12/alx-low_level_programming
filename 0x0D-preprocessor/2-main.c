#include <stdio.h>

/**
 * main - A progeam that prints name of
 * compilation file with new line
 * Return: 0 = success
 **/

int main(void)
{
	printf("%s\n", __BASE_FILE__);
	return (0);
}
