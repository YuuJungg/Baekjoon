#include <stdio.h>

int main()
{
	char str[20];
	int T, R;
	scanf("%d", &T); // 테스트 개수
	
	for(int i = T; i>0; i--)
	{
		scanf("%d", &R); // 반복횟수
		scanf("%s", str); // 문자열
		for(int j = 0; str[j] != '\0'; j++)
		{
			for(int k=0; k<R; k++)
				printf("%c", str[j]);
		}
		printf("\n");
	}
	return 0;
}