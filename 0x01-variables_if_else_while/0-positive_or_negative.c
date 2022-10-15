#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
* main - Entry point
*
* Description: 'Using the if statement to loop through conditions'
*
* Return: always 0 (Success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf(" %d if the number is greater than 0: is positive\n", n);
	}
	if (n == 0)
	{
		printf(" %d if the number is 0: is zero\n", n);
	}
	if (n < 0)
	{
		printf(" %d if the number is less than 0: is negative\n", n);
	}
	return (0);
}
