#include <stdio.h>

int main()
{
	int a,b,c;
	int temp;
	
	scanf("%d %d %d", &a, &b, &c);
	
	if(a<b)
	{
		temp = a;
		a = b;
		b = temp;
	}
	if(b<c)
	{
		temp = b;
		b = c;
		c = temp;
	}
	if(a<b)
	{
		temp = b;
		a = b;
		b = temp;
	}
	
	printf("%d\n",b);
	return 0;
}