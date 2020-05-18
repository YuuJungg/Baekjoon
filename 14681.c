// 사분면 고르기
// 2020.5.18

#include <stdio.h>

int main_14681()
{
	int x, y;
	scanf_s("%d %d", &x, &y);

	if (x > 0 && y > 0)
		printf("1\n");
	if (x < 0 && y>0)
		printf("2\n");
	if (x < 0 && y < 0)
		printf("3\n");
	if (x > 0 && y < 0)
		printf("4\n");

	return 0;
}