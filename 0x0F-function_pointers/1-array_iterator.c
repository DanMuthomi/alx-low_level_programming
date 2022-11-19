#include "function_pointers.h"

/**
* array_iterator - executes function gives parameter in array
*
* @array: array in question
* @size: size of array
* @action: function pointer
*
* No return
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
