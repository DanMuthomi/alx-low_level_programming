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
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
