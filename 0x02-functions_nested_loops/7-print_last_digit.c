#include "main.h"

/**
* print_last_digit -> prints the last digit
* @nld: the passed args
* Return: the last digit
*/
int print_last_digit(int nld)

{

	int pld;



	pld = (nld % 10);



	if (pld < 0)

	{

		pld = (-1 * pld);

	}



	_putchar(pld + '0');

	return (pld);

}
