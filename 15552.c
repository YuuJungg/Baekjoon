#include <stdio.h>

// ºü¸¥ A+B

int main_15552()
{
	int n, a, b;

	scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d %d", &a, &b);
		printf("%d\n", a + b);
	}
	return 0;
}