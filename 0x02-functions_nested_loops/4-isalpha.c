#include "main.h"

/**
* _isalpha - checks is c is a letter(upper or lower case)
*
* @c: is an ASCII character
*
*Return: 1 if letter. 0 otherwise.
*/
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n);
}
