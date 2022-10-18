#include "main.h"

/**
 *printing the alphabet in lowercase
 *
 * return: always 0 (Success)
 */
void print_alphabet(void)
{
	int i;
	for (i = 97; i <= 122; i++)
	{
		-putchar(i);
	}
	_putchar('\n');
}
