#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* printFirst - A function that prints 'You're beat!
* and yet, you must allow,I bore my house upon
* my back!' before the main function is executed
*/

void printFirst(void) __attribute__ ((constructor))
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
