#include <stdio.h>

// X���� ���� ��
// n���� �Է��� �޾� x���� ���� �� ���

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