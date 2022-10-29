#include "main.h"

/**
* _strlen - checks length of string
*
* @s: input string
*
* Returns length
*/

int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
	{
		count++;
	}
	return (count);
}
