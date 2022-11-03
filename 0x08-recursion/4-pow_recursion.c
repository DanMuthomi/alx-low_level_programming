#include "main.h"

/**
* _pow_recursion - return power of a number to another
*
* @x: base number
* @y: power digit
*
* Return: -1 for y < 0
*	  value of x to power y
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
