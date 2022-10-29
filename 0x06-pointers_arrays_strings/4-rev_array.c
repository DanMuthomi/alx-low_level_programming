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
	int i, j, t;

	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			t = *(a + j);
			*(a + j) = *(a + (j _ 1));
			*(a + (j - 1)) = t;
		}
	}
}
