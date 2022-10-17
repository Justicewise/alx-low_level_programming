#include <stdio.h>
/**
* main - Starting point
*
* Description: 'printing alphabet a - z using while loop'
*
* Return: 0 (Success)
*/

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
