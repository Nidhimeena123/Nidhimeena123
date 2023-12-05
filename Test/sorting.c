#include<stdio.h>

int main()
{
	int a[5],b;
	int i,j;
	printf("Before Sorting :");
	printf("\nEnter array elements :");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
      for(i=0;i<5;i++)
    {
    	for(j=i+1;j<5;j++)
    	{
    		if(a[i] > a[j])
    		{
    			 b = a[i];
    			 a[i] = a[j];
    			 a[j] = b;
			}
		}
	}
	printf("\nAfter Sorting :");
	for(i=0;i<5;i++)
	{
		printf("%d\n",a[i]);
	}
	return 0;
}
