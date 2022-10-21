#include <stdio.h>

/**
* main - prints largest prime factor.
*
* Return: Always 0.
*/

int main(void)
{
	long int n, num;

	n = 612852475143;
	for (num = 2; num <= n; num++)
	{
		if (n % num == 0)
		{
			n /= num;
			num--;
		}
	}
	printf("%ld\n", num);
	return (0);
}
