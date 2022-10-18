#include "main.h"

/**
 *print_alphabet - printing the alphabet in lowercase
 *
 * Return: Always 0 (Success)
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
