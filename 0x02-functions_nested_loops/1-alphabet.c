#include "main.h"

/**
 *printing the alphabet in lowercase
 *
 * return: always 0 (Success)
 */
void print_alphabet(void)
{
	char i;
	for (i = 'a'; i <= 'z'; i++)
	{
		-putchar(i);
	}
	_putchar('\n');
}
