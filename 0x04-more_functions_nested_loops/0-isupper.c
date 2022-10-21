#include "main.h"

/**
* _isupper - checks if c is upper case
*
* @c: is an ASCII character
*
* Return: 1 if c is upper case. 0 if not
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
