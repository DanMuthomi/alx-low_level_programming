#include "main.h"

/**
* _sqrt_recursion - returns natural square root of a number
*
* @n: integer
*
* Return: -1 if no natural root is found
*	  natural root
*/

int power(int i, int j)
{
	if (j % (j / i) == 0)
	{
		if (j * (i / j) == i)
			return (j);
		else
			return (-1);
	}
	return ( 0 + power(i, j+1));
}

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (power(i, 2));
}
