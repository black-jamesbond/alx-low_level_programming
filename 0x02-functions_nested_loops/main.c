#include "main.h"
/**
 * main- check the code
 * Description: to print all alphabets in lower case from a to z
 * Return:Always 0.
 */


int main(void)
{
	int r;

	r = _islower('a');
	_putchar(r + '0');
	r = _islower(20);
	_putchar(r + '0');
	r = _islower(0);
	_putchar(r + '0');
	return (0);
}
