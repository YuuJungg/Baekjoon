#include <stdio.h>

// ������

int main_2739() 
{
	int n;
	scanf_s("%d", &n);
	for (int i = 1; i < 10; ++i) 
	{
		printf("%d * %d = %d \n", n, i, n * i);
	}
		return 0;
}