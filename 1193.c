#include <stdio.h>

int main()
{
	int n, sum;
	int index = 0; // 몇번째 행인지
	scanf("%d", &n);

	// 행 구하기
	while (1)
	{
		index++;
		sum = index * (index + 1) / 2;
		if (n <= sum)
			break;
	}

	// 행에서 몇번째 값인지 구하기
	int num = n - (index - 1) * index / 2;

	// 짝수 행인지 홀수 행인지 판별
	if (index % 2 == 0)
	{
		printf("%d/%d", num, index - num + 1);
	}
	else
		printf("%d/%d", index - num + 1, num);
	return 0;
}
