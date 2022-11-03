#include "main.h"

/**
* _strlen_recursion - returns length of a string
*
* @s: string
*
* Return: length
*/

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		_strlen_recursion(s + 1);
	}
	return (s);
}
