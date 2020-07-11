#include <stdio.h>

int main()
{
    int max=0;
    int arr[9];
    int check=0; 
    for(int i=1;i<=9;i++)
    {
        scanf("%d",&arr[i]);
		if(arr[i]>max)
		{
			max = arr[i];
			check = i;
		}
    }
    
    printf("%d\n",max);
    printf("%d\n",check);
    return 0;
}