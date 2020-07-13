#include <stdio.h>

int main()
{
	int n=0;
	int sum = 0;
	char num[100] = {0,};
	
	scanf("%d", &n); // 숫자 개수
	scanf("%s",num); 
	
	for(int i=0; i<n; i++)
		sum += num[i] - '0';  // 그냥 더하면 아스키코드 값이 더해지므로 '0'을 빼서 숫자만 더해줌.
	printf("%d\n",sum);
	
	return 0;
	
	
}