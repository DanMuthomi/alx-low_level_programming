#include "main.h"

/**
* more_numbers - prints 0-14 10 times
*
* no return
*/

void more_numbers(void)
{
	int i = 0;
	int j;

	while (i <= 9)
	{
		for (j = 0; j <= 14; j++)
		{
			_putchar(" %c ", j);
		}
		_putchar("\n");
		i++;
	_putchar("\n");
	}
}
