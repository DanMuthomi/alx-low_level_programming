#include "main.h"

/**
* power_check - returns natural square root of number
*
* @n: input int
* @c: iterator
*
* Return: -1
*	  root if true
*/

int power_check(int n, int c)
{
	if (c % (n / c) == 0)
	{
		if (c * (n / c) == n)
			return (c);
		else
			return (-1);
	}
	return (0 + power_check(n, c + 1));
}

/**
* _sqrt_recursion - returns natural square root of a number
*
* @n: integer
*
* Return: -1 if no natural root is found
*	  natural root
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (power_check(n, 2));
}
