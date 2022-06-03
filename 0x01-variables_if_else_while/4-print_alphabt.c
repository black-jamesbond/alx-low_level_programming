#include<stdio.h>
/**
 * main- code for all
 *
 * Description: print a to z
 *
 * Return: 0
 *
 */

int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		if (alphabet != 'e' || alphabet != 'q')
		{
			putchar(alphabet);
		}
	}
	return (0);
}
