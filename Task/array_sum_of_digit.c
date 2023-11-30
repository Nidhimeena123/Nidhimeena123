//using array make sum of last and first number and so on...
#include<stdio.h>

int main(){
	
	int sum[6][6],arr[6];
	int i,j;
	printf("Enter numbers :\n");
//	 Taking array elements from user
	for(i=0;i<6;i++)
	{
		scanf("%d",&arr[i]);
	}

	for(i=0;i<6;i++)
	{
	    for(j=5;j<;j++)
		{
			sum[i][j]=arr[i]+arr[j];
			printf("%d",sum[i][j]);
		}
		printf("\n");	
	}
//	for(i=0;i<6;i++)
//	{
//		printf("%d",sum);
//	}
	return 0;
}
