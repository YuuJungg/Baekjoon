#include<stdio.h>

int main()
{
    int arr[10]; // 10개 수 저장
    int arr2[42] = { 0, }; 
    int num = 0; //입력한 수를 42로 나눈 나머지값(인덱스로사용)
    int cnt = 0;
	
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]); // 수 입력 받아서
        num = arr[i] % 42; // 42로 나눈 나머지를 num에 저장하고
        arr2[num]++; // 해당 배열 숫자 수 증가
    }

    for (int i = 0; i < 42; i++) // 42번 돌면서 
    {
        if (arr2[i]>0) 
            cnt++; // 숫자 있는 배열 수 cnt 증가
    }
    printf("%d\n", cnt);  

}