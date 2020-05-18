// 알람시계
// 2020.5.18

#include <stdio.h>

int main_2884()
{
	int h, m;
	scanf_s("%d %d", &h, &m);

	m -= 45;
	if (m < 0)
	{
		m += 60;
		h--;
		if (h < 0)
			h += 24;
	}
	printf("%d %d", h, m);

	return 0;
}