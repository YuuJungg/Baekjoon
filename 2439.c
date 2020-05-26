// 문제
// 첫째 줄에는 별 1개, 둘째 줄에는 별 2개, N번쨰 줄에는 별N개를 찍는 문제
// 오른쪽으로 정렬한 직각 삼각형 출력

// 입력
// 첫째 줄에 N이 주어진다

// 출력 
// 첫째 줄부터 N번쨰 줄까지 차례대로 별을 출력한다. 

//    *
//   **
//  ***
// ****
//*****

#include <stdio.h>

int main_2439()
{
	int N;
	scanf_s("%d",&N); // 5.

	for (int i = 0; i < N; i++) // 5줄
	{
		for (int j = 1; j < N-i; j++)
		{
			printf(" ");
		}
		for (int j = 0; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}