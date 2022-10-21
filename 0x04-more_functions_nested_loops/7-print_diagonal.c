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
		for (i = 0; i <= j; i++)
		{
			_putchar(" ");
		}
	_putchar("\\");
	_putchar('\n');
	j++;
	n--;
	}
}
