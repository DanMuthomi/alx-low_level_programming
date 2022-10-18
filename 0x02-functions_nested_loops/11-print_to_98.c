#include "main.h"

/**
* print_to_98 - prints from given no. to 98
*
* @n: input integer
*
* Return: no return
*/
void print_to_98(int n)
{
	if (n < 98)
	{
		_putchar(n);
		_putchar(44);
		_putchar(32);
		n++;
	}
	else if (n == 98)
	{
		_putchar(n);
	}
	else if (n > 98)
	{
		_putchar(n);
		_putchar(44);
		_putchar(32);
		n--;
	}
}
