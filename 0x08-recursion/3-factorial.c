#include "main.h"

/**
* factorial - gets the factorial of an int
*
* @n: integer
*
* Return: -1 for n < 0 i.e error
*	   1 if n == 0
*	  factorial number
*/

int factorial(int n)
{
	int factorial = 1;
	int i;

	if (n < 0)
	{
		return (-1);
	}

	for (i = 1; i <= n; i++)
	{
		factorial = factorial * i;
	}
	return (factorial);
}
