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
	int n;

	while (n > 0)
	{
		_putchar(95);
		n--;
	}
	_putchar('\n');
}
