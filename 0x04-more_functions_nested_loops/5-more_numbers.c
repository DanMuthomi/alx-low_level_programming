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

	while (i < 10)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
			{
				_putchar((j / 10) + 48;
			}
			_putchar((j % 10) + 48);
		}
		_putchar("\n");
		i++;
	}
}
