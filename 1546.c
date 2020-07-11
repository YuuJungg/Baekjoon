#include <stdio.h>
int main() 
{
    int num; // 총 점수 개수
    double arr[1000], max = 0, avg = 0;
    scanf("%d", &num);
	
    for (int i = 0; i < num; i++)
	{
        scanf("%lf", &arr[i]); // 점수 차례로 입력받고
        
        if (max < arr[i]) // 큰 점수를 max에 저장
            max = arr[i];        
    }
    
    for (int i = 0; i < num; i++)
	{
        arr[i] = arr[i]/max*100.0;
        avg += arr[i]; // avg에 평균값 더하기
    }
    
    printf("%lf\n", (avg/(double)num));
}