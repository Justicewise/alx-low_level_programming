#include "main.h"
#include <string.h>

/**
 * rev_string - function that will reverse the entire string
 * @s: stores string to be reverse
 * @tmp holds temp strings which uses i and j to interate
 * return: reverse
 */

void rev_string(char *s)
{
	int i;
	int j;
	char tmp;
	int length;

	length = strlen(s);
	for (i = 0, j =  length - 1; i < j; i++, j--)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
	}
}
