#include<stdio.h>
int main()
{
	int arr1[2][2],arr2[2][2],arr3[2][2],sum=0;
	int i,j,k;
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
		printf("Enter array elements :",i,j);
	    scanf("%d",&arr1[i][j]);
    	}
	}
	
//	printing first array
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
		printf("%d ",arr1[i][j]);
	}
	printf("\n");
	}
	printf("\n");
	
		for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
		printf("Enter array elements :",i,j);
	    scanf("%d",&arr2[i][j]);
    	}
	}
	
//	printing second array
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
		printf("%d ",arr2[i][j]);
	}
	printf("\n");
	}
		
//   Calculating the Matrix
    for(i=0;i<2;i++)
    {
    	for(j=0;j<2;j++)
    	{
    	   for(k=0;k<2;k++)
    	   {
    	   	 sum += arr1[i][k] * arr2[k][j];
		   }
		   arr3[i][j] = sum;
		   sum=0;
		}
	}
	
// Print the Matrix Result
printf("\n\nMATRIX Result\n");
     for(i=0;i<2;i++)
    {
    	for(j=0;j<2;j++)
    	{
    		printf("%d ",arr3[i][j]);
		}
		printf("\n");
	}
	return 0;
}
