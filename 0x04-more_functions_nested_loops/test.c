#include <stdio.h>

int main()
{
	int i = 0;
	int j;

	while (i <= 9)
	{
		for (j = 0; j <= 14; j++)
		{
			printf(" %d ", j);
		}
		printf(" \n ");
		i++;
	}
	printf(" \n ");
}
