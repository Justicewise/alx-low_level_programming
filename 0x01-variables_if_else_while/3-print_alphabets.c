#include <stdio.h>
/**
* main - Starting Point'
*
* Description: 'Displaying both lower and cap of alphabet using while loop'
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
	ch = 'A';

	while (ch <= 'Z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
