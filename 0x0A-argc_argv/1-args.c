#include <stdio.h>
#include <stdlib.h>

/**
* main - a program what prints the # of args passed to it
* @argc: the # of args
* @argv: the names of args
* Return: 0
*
*/

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
