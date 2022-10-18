#include "main.h"

/**
* jack_bauer - prints the minutes of a day
*
* Return: null
*/
void jack_bauer(void)
{
	int h1, h0, m1, m0;

	for (h1 = 48; h1 <= 50; h1++)
	{
		for (h0 = 48; h0 <= 57; h0++)
		{
			for (m1 = 48; m1 <= 53; m1++)
			{
				for (m0 = 48; m0 <= 57; m0++)
				{
					if (h1 >= 50 && h0 >= 52)
					{
						break;
					_putchar(h1);
					_putchar(h0);
					_putchar(58);
					_putchar(m1);
					_putchar(m0);
					_putchar('\n');
					}
				}
			}
		}
	}
}
