#include "main.h"

/**
* _atoi - converts string to int
*
* @s: string to be converted
*
* Return: integer
*/

int _atoi(char *s)
{
	unsigned int count, size, be, in, n, i;

	count = 0;
	size = 0;
	be = 0;
	in = 1;

	while (*(s + count) != '\0')
	{
		if (size > 0 && (*(s + count) < '0' || *(s + count) > '9'))
			break;
		if (*(s + count) == '-')
			in *= -1;
		if ((*(s + count) >= '0') && (*(s + count) <= '9'))
		{
			if (size > 0)
				n *= 10;
			size++;
		}
		count++;
	}
	for (i = count - size; i < count; i++)
	{
		be = be + ((*(s + i) - 48) * n;
		n /= 10;
	}
	return (be * in);
}
