#include "main.h"
#include <stdlib.h>

/**
* malloc_checked - gives pointer to allocated memory
*
* @b: no of bytes
*
* Return: pointer
* if fail, return status value of 98
*/

void *malloc_checked(insigned int b)
{
	char *c;

	c = malloc(b);
	if (c == NULL)
	{
		exit(98);
	}

	return (c);
}
