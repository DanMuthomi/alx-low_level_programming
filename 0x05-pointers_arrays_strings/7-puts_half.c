#include "main.h"

/**
* puts_half - prints second half of a string
*
* @str: string to be printed
*
* no return
*/

void puts_half(char *str)
{
	int count, lenstr;

	count = 0;

	while (count >= 0)
	{
		if (str[count] == '\0')
		{
			break;
		}
		count++;
	}

	if (count % 2 == 1)
	{
		lenstr = count / 2;
	}
	else
	{
		lenstr = (count - 1) / 2;
	}

	for (lenstr++; lenstr < count; lenstr++)
	{
		_putchar(str[lenstr]);
	}
	_putchar('\n');
}
