#include <stdio.h>

int main()
{
	int one, two, three, four, five;

	scanf("%d %d %d %d %d", &one, &two, &three, &four, &five);

	if (one < 40)
		one = 40;
	if (two < 40)
		two = 40;
	if (three < 40)
		three = 40;
	if (four < 40)
		four = 40;
	if (five < 40)
		five = 40;

	int result = (one + two + three + four + five) / 5;
	printf("%d\n", result);



}