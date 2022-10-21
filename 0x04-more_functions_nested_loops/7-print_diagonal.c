#include "main.h"

/**
* print_diagonal - prints \ to for a diagonal line
*
* @n: int for number of times \ is printed
*
* No return
*/

void print_diagonal(int n)
{
	int i, j;

	for (j = 1; j <= n; j++)
	{
		for (i = 1; i < j; x++)
		{
			_putchar(" ");
		}
	_putchar("\\");
	_putchar('\n');
	}
	if (n < 1)
	{
		_putchar('\n');
	}
}
