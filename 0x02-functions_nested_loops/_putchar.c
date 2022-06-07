#include <unistd.h>

/**
 *_putchar- write the character c to stdout
 *@c: the character to print
 *
 *Return: On sucess 1
 *on error -1 in return, and errno in set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
