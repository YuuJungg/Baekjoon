#include <stdio.h>

// 오름차순 정렬
// 버블 정렬
// 배열 내의 두 개의 인접한 index를 비교하여 더 큰 숫자를 뒤로 보내 정렬하는 방법.
// 배열의 뒷쪽부터 정렬하는 방법 
int data[1000];

int main()
{
	int num,temp;
	scanf("%d", &num);
	
	for(int i=0; i<num; i++)
		scanf("%d", &data[i]);
	
	for(int i=0; i<num; i++)
	{
		for(int j=0; j<num-1; j++)
		{
			if(data[j] > data[j+1])
			{
				temp = data[j];
				data[j] = data[j+1];
				data[j+1] = temp;
			}
		}
	}
	
	for(int i=0; i<num; i++)
		printf("%d\n", data[i]);
	
	return 0;
}