#include <stdio.h>

int main() 
{
	int n, total=1;

	int arr[10]; // 각 자리 숫자 개수 넣을 배열

	for(int i = 0; i < 10; i++)  // 배열 자리 초기화
		arr[i] = 0;

	for(int i = 0; i < 3; i++) // 숫자 3개 입력 받아서 곱하기 
	{
		scanf("%d", &n);
		total *= n; // 곱한 값 total에 저장
	}

	for(int i = 0; total > 0; i++) 
	{
		n = total % 10; // 10으로 나눈 나머지가 배열 자리
		arr[n] += 1;
		total /= 10; // total은 10으로 나눈 몫으로 계속 갱신
	}

	for(int i = 0; i < 10; i++)
		printf("%d\n", arr[i]);

}
