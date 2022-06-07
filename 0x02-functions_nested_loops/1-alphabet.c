#include "main.h"

/**
 *main - check the code
 *
 *Return: Void.
 *
 */

void print_alphabet(void)
{
	char a = 'a';
	char term_x = 'z';

	while (a <= term_x)
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
