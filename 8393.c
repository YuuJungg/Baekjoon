#include <stdio.h>

// 합
//[문제]
//n이 주어졌을 때, 1부터 n까지 합을 구하는 프로그램을 작성하시오.
//
//[입력]
//첫째 줄에 n(1 ≤ n ≤ 10, 000)이 주어진다.
//
//[출력]
//1부터 n까지 합을 출력한다.

int main_8393()
{
	int n;
	scanf_s("%d", &n);
	
	int add = 0;
	for (int i = 1; i <= n; ++i)
	{
		add += i;
	}
	printf("%d\n", add);

	return 0;
}