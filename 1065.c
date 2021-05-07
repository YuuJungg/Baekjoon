#include <stdio.h>

void han_soo(int N)
{
	if (N < 100)
		printf("%d\n", N);
	else
	{
		int cnt;
		int A, B, C; //각 100, 10, 1의 자리 표현
		cnt = 99;

		for (int i = 100; i <= N; i++)
		{
			A = i / 100;
			B = i % 100 / 10;
			C = i % 10;

			if ((C - B) == (B - A))
				cnt++;
		}
		printf("%d\n", cnt);
	}
}

int main()
{
	int N;
	scanf("%d", &N);
	han_soo(N);
}