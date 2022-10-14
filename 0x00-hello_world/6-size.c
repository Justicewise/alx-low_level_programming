/**
 * main - Entry point
 *
 * DEscription: 'knowing the size of my system'
 *
 * Return: always 0 (Sucess)
 */

int main(void)
{
printf("Size of char: %ldbyte(s)\n", sizeof(char));
printf("Size of int: %ldbyte(s)\n", sizeof(int));
printf("Size of long int: %ldbyte(s)", sizeof(long int));
printf("Size of long long int: %ldbytpe(s)", sizeof(long long int));
printf("Size of a float: %ld byte(s)", sizeof(float));
return (0);
}
