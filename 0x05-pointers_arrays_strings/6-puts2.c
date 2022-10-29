#include "main.h"

/**
* puts2 - prints every other character
*
* @str: string to be printed
*
* no return
*/

void puts2(char *str)
{
	 int count;

	count = 0;
	while (count >= 0)
	{
		if (str[count] ==  '\0')
		{
			_putchar('\n');
			break;
		}
		if (count % 2 == 0)
		{
			_putchar(str[count]);
		}
		count++;
	}
}
