#include <stdio.h>
#include <string.h>

int main(void) {
    char input[100];
    gets(input);
    int cnt = strlen(input);

    // 변경 문자에 =, -, j 가 공통적으로 있기 때문에 경우의 수를 그에 맞춰 나눠준다.
    for (int i = 0; i < strlen(input); i++) {
        if (input[i] == '=') {
            if (input[i - 1] == 'c') 
                cnt--;
            if (input[i - 1] == 's') 
                cnt--;
            if (input[i - 1] == 'z') 
            {
                cnt--;
                if (input[i - 2] == 'd') 
                    cnt--;
            }
        }
        if (input[i] == '-') {
            if (input[i - 1] == 'c') 
                cnt--;
            if (input[i - 1] == 'd') 
                cnt--;
        }
        if (input[i] == 'j') 
        {
            if (input[i - 1] == 'l') 
                cnt--;
            if (input[i - 1] == 'n') 
                cnt--;
        }
    }
    printf("%d\n", cnt);
}
	

