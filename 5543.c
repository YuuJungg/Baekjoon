#include <stdio.h>

int main()
{
	int h1,h2,h3;
	int coke, sider;
	int min1;
	int min2;
	
	scanf("%d %d %d %d %d", &h1, &h2, &h3, &coke, &sider);
	if(h1>h2)
		min1=h2;
	else
		min1=h1;
	if(h3 < min1)
		min1 = h3;
	if(coke>sider)
		min2=sider;
	else
		min2=coke;
	
	int result = (min1+min2)-50;
	printf("%d\n", result);
}