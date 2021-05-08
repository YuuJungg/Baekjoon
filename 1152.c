#include <stdio.h>
#include <string.h>

int main(){
	int count = 1;
	char input[1000000];

	// %[^\n]s는 문자열에서 \n를 제외한 문자열 모두 입력받음
	scanf("%[^\n]s", input);

	// 공백 있으면 count 증가
	for (int i = 0; i < strlen(input); i++)
	{
		if (input[i] == ' ')
			count++;
	}

	// 앞 뒤, 앞, 뒤에 있는 공백 빼기
	if (input[0] == ' ' && input[strlen(input) - 1] == ' ')
		count -= 2;
	else if (input[0] == ' ')
		count -= 1;
	else if (input[strlen(input) - 1] == ' ')
		count -= 1;

	printf("%d", count);

	return 0;

}