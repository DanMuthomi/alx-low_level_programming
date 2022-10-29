#include "main.h"

/**
* reverse_array - reversing the contents of an array
*
* @a: array in question
* @n: number of elements in an array
*
* no return
*/

void reverse_array(int *a, int n)
{
	int t, count;

	for (count = n - 1; count > n / 2; count--)
	{
		t = a[n - 1 - count];
		a[n - 1 - count] = a[count];
		a[count] = t;
	}
}
