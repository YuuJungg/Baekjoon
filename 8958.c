#include <stdio.h>

int main()
{
	char str[82];  // 문자열 최대 80
	int num;
	scanf("%d",&num); // 총 받을 문자열 개수
	
	while(num--)
	{
		scanf("%s",str);  // OX 입력받기
		int sum = 0;
		for(int i=0, count=0; str[i]; i++)
		{
			if(str[i]=='O')
				count++;
			else
				count=0;
			sum+=count;
		}
		printf("%d\n", sum);
	}
	return 0;
	
}