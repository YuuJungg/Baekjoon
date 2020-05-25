#include <stdio.h>

int main()
{
	int temp = 0;
	int result = 0;
	
	for(int i=0; i<5; i++)
	{
		scanf("%d", &temp);
		if(temp < 40)
			temp = 40;	
		result += temp;
	}
	
	printf("%d\n", result/5);
	
		
	

}