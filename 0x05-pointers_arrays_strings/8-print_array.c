#include "main.h"
#include <stdio.h>

/**
* print_array - printing an array
*
* @a: input array
* @n: number of elements
*
* no return
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", *(a + 1));
		if (i != (n - 1))
		{
			printf(", ";
		}
	}
	printf("\n");
}
