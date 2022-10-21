#include <stdio.h>

int main()
{
	int i;
	int j = 0;
	int n = 5;

	while (n > 0)
	{
		for (i = 0; i <= j; i++)
		{
			printf(" ");
		}
	printf("\\");
	j++;
	n--;
	}
}
