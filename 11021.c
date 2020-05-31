#include <stdio.h>

// A+B-7

int main_11021()
{
	int t, a, b;
	scanf_s("%d", &t);

	for (int i = 1; i <= t; i++)
	{
		scanf_s("%d %d", &a, &b);
		printf("Case #%d: %d\n", i, a + b);
	}

	return 0;
}