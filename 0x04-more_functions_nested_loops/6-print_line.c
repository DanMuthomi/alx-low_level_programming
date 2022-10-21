#include "main.h"

/**
* print_line - print _ for n counts
*
* @n: an integer
*
* No return
*/

void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
