// A+B-4
// 2020.5.18

#include <stdio.h>

int main_10951()
{
	int a, b;
	while (scanf("%d %d", &a, &b) != EOF)
		printf("%d\n", a + b);

	return 0;
}
// EOF (End Of File)
// 파일의 끝을 표현하기 위한 함수.
// -1 값을 가진다
// 콘솔의 경우 Ctrl + z가 파일의 EOF를 의미한다