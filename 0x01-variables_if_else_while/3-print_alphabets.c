#include <stdio.h>

/* printing the alphabets in lower then UPPER case */
int main(void)
{
	char letters;

	for (letters = 'a'; letters <= 'z'; letters++)
		putchar(letters);
	for (letters = 'A'; letters <= 'Z'; letters++)
		putchar(letters);
		putchar('\n');

	return (0);
}
