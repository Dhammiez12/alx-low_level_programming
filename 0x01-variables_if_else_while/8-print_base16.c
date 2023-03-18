#include <stdio.h>

/**
* main - Print the numbers of base 16 in lowercase
*
* Return: Always 0 (Success)
*/
int main(void)
{
		char alphanumeric;

		for (alphanumeric = '0'; alphanumeric <= '9'; alphanumeric++)
		putchar(alphanumeric);

		for (alphanumeric = 'a'; alphanumeric <= 'f'; alphanumeric++)
		putchar(alphanumeric);

		putchar('\n');

	return (0);
}
