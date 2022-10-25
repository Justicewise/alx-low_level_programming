#include "main.h"
#include <string.h>
/**
 * print_rev - function to print string in reverse order
 * @s: use to store string to be reversed.
 */

void print_rev(char *s)
{
	int length;
	int i;
	int j;

	length = strlen(s);

	for (i = 0, j = length - 1; i < j; i+`+, j--)
	{
		char tmp = s[i];

		s[i] = s[j];
		s[j] = tmp;
	}
}
