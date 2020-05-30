#include <stdio.h>
// 문제
// N개의 정수 주어짐. 이때 최솟값과 최댓값 구하는 프로그램 작성

// 입력
// 첫째 줄에 정수 개수는 N주어짐.
// 둘쨰 줄에는 N개의 정수를 공백으로 구분해서 주어짐.

// 출력
// 첫째 줄에 주어진 정수 N개의 최솟값과 최댓값을 공백으로 구분해 출력


int main_10818()
{
	int N,num; 
	int min = 1000001;
	int max = -1000001;
	
	scanf_s("%d", &N);  // 5개 정수

	for (int i = 0; i < N; i++)  // 5번 돌려
	{
		scanf_s("%d", &num); // 5번 돌려서 입력한 정수 num에 저장 20

		if (min > num) 
		{
			min = num;
		}
		if (max < num)
		{
			max = num;
		}

	}
	printf("%d %d", min, max);

	return 0;
}