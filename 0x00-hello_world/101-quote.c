#include <stdio.h>
#include <unistd.h>
/**
 * main-Entry point
 *
 * Description:printing to the staderr'
 *
 * Return: 1 if Sucess.
 */
int main(void)
{
	write(2, "and that piece of art is useful\"- Dora Korpar, 2015-10-19\n", 58);
	return (1);
}
