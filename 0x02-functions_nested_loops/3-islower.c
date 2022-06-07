#include"main.h"
#include <ctype.h>
/**
 * islower- lsvnkbnsdk
 *
 * Description: nsndfljd
 *
 * Return: a number
 */

int _islower(int c)
{
	char check;

	check = tolower(c);
	if (c == check)
	{
		return (1);
	}
	if (c != check)
	{
		return (0);
	}
	_putchar('\n');
	return (0);
}
