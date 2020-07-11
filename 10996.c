#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	for (int i=0; i<=2*n-1; i++) // i 행
	{
		for (int j=0; j<=n-1; j++)  // j 열
		{
			if (i % 2 == 0)
			{
				if (j % 2 == 0)// i짝 j짝
					printf("*");				
				else		// i짝 j홀	
					printf(" ");	
			}
			else 
			{
				if (j % 2 == 0)// i홀 j짝
					printf(" ");
				else           // i홀 j홀
					printf("*");
			}
		}
		printf("\n");
	}
}