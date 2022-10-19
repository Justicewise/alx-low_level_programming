#include "main.h"

/**
* print_alphabet_x10 -> prints the lowercase alphabets
*/

void print_alphabet_x10(void)
{
	char i = 'a';
	int x;

	for (x = 0; x <= 10; x++)
	{
		for (i = 'a'; i <= 10; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
