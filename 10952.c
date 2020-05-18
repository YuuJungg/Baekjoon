// A + B - 5
// 2020.5.18

#include <stdio.h>

int main_10952()
{
	int A, B;
	while (1)
	{
		scanf_s("%d %d", &A, &B);
		if (A == 0 && B == 0)
			break;
		printf("%d\n", A + B);
	}	
	return 0;
}