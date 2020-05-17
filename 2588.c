// °ö¼À
// 2020.5.17

#include <stdio.h>

int main_2588()
{
	int x, y;
	int res1, res2, res3, res;
	scanf_s("%d %d", &x, &y);

	res1 = x * ((y % 100) % 10);
	res2 = x * ((y % 100) / 10);
	res3 = x * (y / 100);
	res = x * y;
	printf("%d\n%d\n%d\n%d", res1, res2, res3, res);
	
	return 0;
}