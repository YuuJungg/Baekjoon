#include <stdio.h>
#include <string.h>

int main()
{
	char input[1000000];
	int count[26] = { 0, };
	int max;
	int select = 0;
	int result = 0;

	scanf("%s", input);
	int len = strlen(input); // 입력받은 문자열 길이 구하기

	// 소문자
	for (int i = 'a'; i <= 'z'; i++)
	{
		for (int j = 0; j < len; j++)
		{
			if (i == input[j])
				count[i - 'a']++;
		}
	}

	// 대문자
	for (int i = 'A'; i <= 'Z'; i++)
	{
		for (int j = 0; j < len; j++)
		{
			if (i == input[j])
				count[i - 'A']++;
		}
	}

	max = count[0]; // a(A) 개수를 max로 초기화 시키고
	for (int i = 1; i < 26; i++) // 알파벳 순서대로 돌면서
	{
		if (max < count[i]) // 개수가 많은 알파벳 있으면 max로 저장
		{
			max = count[i];
			select = i; // 해당 인덱스도 저장
		}
	}

	// 중복된 max값 있는지 찾는 과정
	for (int i = 0; i < 26; i++)
	{
		if (max == count[i]) // 같다면 result 증가
			result++;
	}

	if (result > 1) // 같은 max가 있다면 ? 출력
		printf("?\n");
	else // 아닐 경우 대문자로 출력해야 하므로 인덱스 값에다 A 더해주기
		printf("%c", select + 'A');
	return 0;
}