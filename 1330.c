// �� �� ���ϱ�
// 2020.5.17

#include <stdio.h>

int main_1330()
{
	int x, y;
	scanf_s("%d %d", &x, &y);

	if (x > y)
		printf(">\n");
	if (x < y)
		printf("<\n");
	if (x == y)
		printf("==\n");

	return 0;
}