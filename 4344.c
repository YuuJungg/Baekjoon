#include <stdio.h>

int main()
{
	int c = 0;  
	int student_num = 0;
	
	scanf("%d", &c);// 테스트 개수
	
	while(c--)
	{
		scanf("%d", &student_num);
		int score[1000]; // 학생들 점수 담을 배열
		int sum=0;
		double avg = 0;
		for(int i=0; i<student_num; i++)
		{
			scanf("%d", &score[i]); // 학생들 점수 차례로 입력
			sum += score[i]; // sum에 학생들 총 점수 더하기
		}
		avg = (double)sum / student_num; // 평균은 총 점수 나누기 학생들 점수
		int count =0;
		for(int i=0; i<student_num; i++)
		{
			if(avg<score[i])
				count++;
		}
		printf("%.3f%%\n", (double)count*100 / student_num);
	}
	return 0;
}