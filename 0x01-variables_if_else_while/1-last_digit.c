#include<stdlib.h>
#include<time.h>
/**
 * main- to check a condition
 *
 * Description: it is copmareing the codes
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
