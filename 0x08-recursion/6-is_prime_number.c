#include "main.h"

/**
* prime_check - detects prime number
*
* @n: input int
* @c: iterator
*
* Return: 1 if prime
*	  0 if not
*/

int prime_check(unsigned int n, unsigned int c)
{
	if (n % c == 0)
	{
		if (n == c)
			return (1);
		else
			return (0);
	}
	return (0 + prime_check(n, c + 1));
}

/**
* is_prime_number - etects prime numbers
*
* @n: input no.
*
* Return: 1 if prime
*	  0 if not
*/

int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (prime_check(n, 2));
}
