#include "main.h"
/**
* main - starting point
* print_alphabet -> prints the lowercase alphabets
*/

void print_alphabet(void)
{
	char alph = 'a';

	while (alph <= 'z')
	{
		_putchar(alph);
		alph++;
	}
	_putchar('\n');
}

