// ������
// 2020.5.17

#include <stdio.h>

int main_()
{
	int a, b, c;
	scanf_s("%d %d %d", &a, &b, &c);
	printf("%d\n", (a + b) % c);
	printf("%d\n", (a % c + b % c) % c);
	printf("%d\n", (a * b) % c);
	printf("%d\n", (a % c * b % c) % c);
}