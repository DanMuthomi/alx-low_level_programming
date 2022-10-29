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
	lenstr = count;

	if (count % 2 == 1)
	{
		for (lenstr / 2; lenstr < count; lenstr++)
		{
			_putchar(str[lenstr]);
		}
	}
	else
	{
		for ((lenstr - 1) / 2; lenstr < count; lenstr++)
		{
			_putchar(str[lenstr]);
		}
	}
	_putchar('\n');
}
