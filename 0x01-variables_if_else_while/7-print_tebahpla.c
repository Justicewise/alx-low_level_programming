#include <stdio.h>
/**
* main - Starting point
*
*Description: 'Printing in reserve order'
*
* Return: 0 (Success)
*/

int main(void)
{
	char r = 'a';

	while (r <= 'z')
	{
		putchar(r);
		r--;
	}
	putchar('\n');
}
