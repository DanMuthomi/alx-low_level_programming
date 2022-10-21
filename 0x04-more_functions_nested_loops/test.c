#include <stdio.h>

int main()
{
	int i = 48;

	while (i <= 57)
	{
		if (i == 50 || i == 52)
		{
			i++;
		}
		printf(" %d ", i);
		i++;
	}
}
