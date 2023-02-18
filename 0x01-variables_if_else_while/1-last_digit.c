#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - a program for printing the lastnumber
 *
 * Return: 0
 */
int main(void)
{
	int n;
	int i;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	i = n % 10;
	printf("last digit of %d is %d", n, i);
	if (i > 5)
	{
		printf("and is greater than 5");
	}
	if (i==0)
	{
		printf("and is 0");
	}
	if (i < 6 && i !=0)
	{
		printf("and is less than 6 and is not 0");
	}
	printf("\n");
	return (0);
}
