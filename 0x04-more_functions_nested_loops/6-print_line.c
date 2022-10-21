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

	if (n > 0)
	{
		_putchar("_");
		n--;
	}
	else if (n == 0)
	{
		_putchar('\n');
	}
}
