#include "main.c"
/**
 * print_sign- print out 
 *
 * @n: value to check rhrn 
 *
 * Description: pritn
 *
 * Return: 0
 *
 */

int print_sign(int n)
{
	int j = -1;

	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n < 0)
	{
		_putchar('-');
		return (j);
	}
	if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	return (0);
}
