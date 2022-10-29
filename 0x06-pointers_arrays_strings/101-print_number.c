#include "main.h"

/**
* print_number - prints an int
*
* @n: input integer
*
* no return
*/

void print_number(int n)
{
	unsigned int num;

	if (n < 0)
	{
		_putchar('-');
		num *= -num;
	}
	num = n;

	if ((num / 10) > 0)
	{
		print_number(num / 10);
	}
	_putchar((num % 10) + '0');
}
