#include<stdlib.h>
#include<time.h>
/* more header goes here*/
#include<stdio.h>
/*betty style doc for function main goes there*/
/**
 * main - check for condition
 *
 * Description: return the result of the function
 *
 * Return: 0
 *
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is a positive \n", n);
	} else if (n == 0)
	{
		printf("%d is zero\n", n);
	} else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
