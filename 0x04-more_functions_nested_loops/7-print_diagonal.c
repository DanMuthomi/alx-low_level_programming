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
	int i;
	int j = 0;

	while (n > 0)
	{
		i = j;
		while (i > 0)
		{
			_putchar(" ");
			i--;
		}
	_putchar("\\");
	_putchar('\n');
	j++;
	n--;
	}
	if (j < 1)
	{
		_putchar('\n');
	}
}
