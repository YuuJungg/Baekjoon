#include <stdio.h>

int main()
{
	int n;	
	int num[1000];
	int count = 0;
	scanf("%d", &n); 
	
	for(int i=0; i<n; i++)
		scanf("%d", num[i]);
	
	for(int i=0; i<n; i++)
	{
		int div = 1;
		
		if(num[i] == 1)
		{
			count++;
			continue;
		}
		while (div*div <= num[i])
	}
	
}