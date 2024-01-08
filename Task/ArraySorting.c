#include<stdio.h>

int main()
{
	int num[100],i,j,a;
	for(i=0;i<5;i++)
	{
		printf("Enter array elements num[%d] : ",i);
		scanf("%d",&num[i]);
	}
	
	printf("\n\nBefore Sorting :",num[i]);
	for(i=0;i<5;i++)
	{
		printf("%d",&num[i]);
	}
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(num[i] > num[j])
			{
				a = num[i];
				num[i] = num[j];
				num[j] = a;
			}
		}
	}
	
	printf("\n\n After Sorting : ",num[i]);
	for(i=0;i<5;i++)
	{
		printf("%d",&num[i]);
	}
	
	return 0;
}
