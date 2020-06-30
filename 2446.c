#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n); //3
	
	for(int i=0;i<n;i++) //3
	{
		for(int j=0; j<i; j++)
		{
			printf(" ");
		}		
		for(int k=0; k<n*2-1-i*2; k++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	for(int i=0;i<n-1;i++) 
	{
		for(int j=0; j<n-i-2; j++)
		{
			printf(" ");
		}		
		for(int k=0; k<i*2+3; k++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	
	




}