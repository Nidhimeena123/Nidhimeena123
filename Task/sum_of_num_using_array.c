//addition of elements

#include<stdio.h>
int main()
{
	
	int arr[5],sum;
	int i;
	for(i=0;i<5;i++)
	{
		printf("Enter number : ");
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<5;i++)
	{
		printf("%d\n",arr[i]);
    }
    
    for(i=0;i<5;i++)
	{
		sum+=arr[i];
    }
     printf("sum of array : %d ",sum);
    
	return 0;
}
