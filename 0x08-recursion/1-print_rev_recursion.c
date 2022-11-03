#include "main.h"

/**
* _print_rev_recursion - prints a string in reverse
*
* @s: string to be printed
*
*no return
*/

void _print_rev_recursion(char *s)
{
	while (s >= 0)
	{
		if (*s == '\0')
		{
			break;
		}
		s++;
	}
	if (s != 0)
	{
		_putchar(*s);
		_puts_recursion(s - 1);
	}
	else
		_putchar('\n');
}
