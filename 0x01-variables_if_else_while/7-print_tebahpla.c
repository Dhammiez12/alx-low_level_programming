#include <stdio.h>

/**
* main - Print the alphabet in lowercase letters in esrever
*
* Return: Always 0 (Success)
*/
int main(void)
{
	char rettel;

	for (rettel = 'z'; rettel >= 'a'; rettel--)
	putchar(rettel);

	putchar('\n');

	return (0);
}
