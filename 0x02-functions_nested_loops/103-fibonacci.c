#include <stdio.h>

/**
 * main - Prints the sum of the even-valued fibonacci numbers.
 *
 * Return: Always 0.
 */
int main(void)
{
	long int n1, n2, fn1, fn2;

	n1 = 1;
	n2 = 2;
	fn1 = fn2 = 0;
	while (fn1 <= 4000000)
	{
		fn1 = n1 + n2;
		n1 = n2;
		n2 = fn1;
		if ((n1 % 2) == 0)
		{
			fn2 += n1;
		}
	}
	printf("%ld\n", fn2);
	return (0);
}
