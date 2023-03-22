#include "main.h"
/**
 * print_alphabet - printa all alphabt in lowe case
*/
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= z; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}
