#include <stdio.h>

// A+B-8

int main_11022()
{
	int t, a, b;
	scanf_s("%d", &t);

	for (int i = 1; i <= t; i++)
	{
		scanf_s("%d %d", &a, &b);
		printf("Case #%d: %d + %d = %d\n", i, a, b, a + b);
	}

	return 0;
}