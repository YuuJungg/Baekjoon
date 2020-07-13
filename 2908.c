#include <stdio.h>

int main()
{
	int A, B; // 입력 받을 세자리 수
	int x, y; // 뒤집힌 수 저장할 변수
	scanf("%d %d", &A, &B);
	
	x = (A % 10) * 100 + (A/10)%10*10 + (A/100)%10;
	y = (B % 10) * 100 + (B/10)%10*10 + (B/100)%10;
	
	printf("%d\n", x>y ? x:y);
	return 0;
	
}