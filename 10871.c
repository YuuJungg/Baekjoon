#include <stdio.h>

// X보다 작은 수
// n번의 입력을 받아 x보다 작은 수 출력

int main_10871()
{
	int n, x;
	scanf_s("%d %d", &n, &x);

	int value;
	for (int i = 0; i < n; ++i)
	{
		scanf_s("%d", &value);
		if (value < x)
		{
			printf("%d ", value);
		}
	}
	return 0;
}