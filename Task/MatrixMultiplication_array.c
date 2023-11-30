//matrix multiplication

#include<stdio.h>

int main()
{
	int a1[2][2],a2[2][2],a3[2][2],sum=0;
	int i,j,k;
	
//	First Matrix
    for(i=0;i<2;i++)
    {
    	for(j=0;j<2;j++)
    	{
    		printf("Enter number a1[%d][%d]:",i,j);
    		scanf("%d",&a1[i][j]);
		}
	}
	
//Printing First Matrix
   printf("\n\nMATRIX 1\n");
     for(i=0;i<2;i++)
    {
    	for(j=0;j<2;j++)
    	{
    		printf("%d ",a1[i][j]);
		}
		printf("\n");
	}
	
	printf("\n\n");
	
	//	Second Matrix
    for(i=0;i<2;i++)
    {
    	for(j=0;j<2;j++)
    	{
    		printf("Enter number a2[%d][%d]:",i,j);
    		scanf("%d",&a2[i][j]);
		}
	}
	
//Printing Second Matrix
   printf("\n\nMATRIX 2\n");
     for(i=0;i<2;i++)
    {
    	for(j=0;j<2;j++)
    	{
    		printf("%d ",a2[i][j]);
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
    	   	 sum += a1[i][k] * a2[k][j];
		   }
		   a3[i][j] = sum;
		   sum=0;
		}
	}
	
// Print the Matrix Result
printf("\n\nMATRIX Result\n");
     for(i=0;i<2;i++)
    {
    	for(j=0;j<2;j++)
    	{
    		printf("%d ",a3[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
