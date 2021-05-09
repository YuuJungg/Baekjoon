#include <stdio.h>
#include <string.h>

int main() {

	int n, count = 0;
	char input[100];


	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%s", input);
		count += word_count(input, strlen(input));
	}
	printf("%d", count);
	return 0;
}
	
	// 단어와 단어 길이를 받아 연속 단어 개수 세주는 함수
	int word_count(char a[], int len)
	{
		int key = 0;

		for (int i = 0; i < len; i++)
		{
			for (int j = 0; j < len; j++)
			{
				// 알파벳이 같으면
				if (a[i] == a[j])
				{
					// 두 알파벳의 인덱스를 빼고
					key = j - i;

					// 인덱스의 값이 1보다 크고
					if (key > 1)
						// 두 알파벳이 다르면
						if (a[j - 1] != a[j])
							return 0; // 0
				}
			}
		}
		return 1; // 위의 과정에 모두 해당이 안될 시 1
	}
	

