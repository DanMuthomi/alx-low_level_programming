#include "main.h"

/**
* _isdigit - checks if c is a digit
*
* @c: is an ASCII character
*
* Return: 1 if c is a digit. 0 else
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
