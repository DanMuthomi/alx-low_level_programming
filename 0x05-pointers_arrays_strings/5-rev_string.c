#include "main.h"

/**
* rev_string - reverses a string
*
* @s: string to be reversed
*
* no return
*/

void rev_string(char *s)
{
	int count, i, j;
	char *str, t;

	count = 0;
	while (count >= 0)
	{
		if (s[count] == '\0')
		{
			break;
		}
		count++;
	}
	str = s;

	for (i = 0; i < (count - 1); i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			t = *(str + j);
			*(str + j) = *(str + (j - 1));
			*(str + (j - 1)) = t;
		}
	}
}
