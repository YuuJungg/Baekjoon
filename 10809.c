#include <stdio.h>

int main()
{
	char str[101] = {NULL};
	int alphabet[26];

	scanf("%s", &str);

	// alphabet 배열 안을 모두 -1로 초기화
	for (int i = 0; i < 26; i++)
		alphabet[i] = -1;

	// a부터 z까지 돌면서 
	for (int i = 'a'; i <= 'z'; i++)
	{
		// 단어의 길이가 100을 넘지 않으므로 100번 돌면서
		for (int j = 0; j < 100; j++)
		{
			// 단어 글자와 a~z중 하나와 같으면 
			if (str[j] == i)
			{
				// 같은 알파벳에서 아스키코드 a의 숫자인 97을 뺀 차이값에
				// 해당 인덱스를 저장한다.
				alphabet[i - 97] = j;
				break;
			}
		}
	}

	for (int i = 0; i < 26; i++)
	{
		printf("%d ", alphabet[i]);
	}

	printf("\n");
	return 0;


}