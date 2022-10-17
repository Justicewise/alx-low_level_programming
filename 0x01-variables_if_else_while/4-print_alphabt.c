/**
* main - Starting Point
*
* Description: 'Printing alphabet leaving out q and e'
*
* Return: 0 *success'
*/

int main(void)
{
	char ch = 'a';

	do {
		if (ch == 'q' || ch == 'e')
		{
			ch++;
			continue;
		}
		putchar(ch);
		ch++;
	} while(ch <- 'z');
	putchar('\n');
	return (0);
}
