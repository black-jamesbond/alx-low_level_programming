#include "main.h"
/**
 * print_last_digit- nksdnljkf
 *
 * @r: dfnglndfglkjsdfg
 *
 * main- hoashfkghsdf
 *
 * Return: ohdfinf
 */
int print_last_digit(int r)
{
	int remain = r % 10;

	if (r < 0)
	{
		r =r * -1;
		_putchar(r % 10 + '0');
		return (r % 10);
	}
	else
	{
		_putchar(remain + '0');
		return (r % 10);
	}
}
