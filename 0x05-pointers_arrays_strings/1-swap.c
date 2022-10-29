#include "main.h"

/**
* swap_int - swaps values of two integers
*
* @a: a pointer
* @b: a pointer
*
* no return
*/

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = b;
	*b = c;
}
