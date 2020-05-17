// À±³â
// 2020.5.17

#include <stdio.h>

int main_2753()
{
	int x;
	scanf_s("%d", &x);

	if ((x%4==0)&&(x%100!=0)||(x%400==0))
		printf("1\n");
	else
		printf("0\n");

	return 0;
}