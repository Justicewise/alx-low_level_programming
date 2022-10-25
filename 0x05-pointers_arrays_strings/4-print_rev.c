#include "main.h"
#include <string.h>
/**
 * print_rev - function to print string in reverse order
 * fcounter is to first count to the end, n is counting backward
 * @s: use to store string to be reversed.
 */

void print_rev(char *s)

{

	int fcounter = 0;

	int i, n;



	for (i = 0; s[i] != '\0'; i++)

	{

		fcounter++;

	}



	for (n = (fcounter - 1); n >= 0; n--)

	{

		_putchar(s[n]);

	}

	_putchar('\n');

}
