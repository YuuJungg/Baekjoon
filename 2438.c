#include <stdio.h>

// º° Âï±â - 1

int main_2438()
{
	int n;
	scanf_s("%d", &n);

	for (int i = 1; i <= n; ++i)
	{
		for(int j = 1; j <= i; ++j)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}