//using array make sum of last and first number and so on...
#include<stdio.h>

int main(){
	
	int sum[10],arr[10];
	int i,j;
	printf("Enter numbers :\n");
//	 Taking array elements from user
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}

	for(i=0;i<5;i++)
	{
	    for(j=9;j<4;j--)
		{
			sum[i]=arr[i]+arr[j];
			printf("%d",sum[i]);
		}
		printf("\n");	
	}
  for(i=0;i<10;i++)
  {
  	printf("%d",sum[i]);
  }
  
	return 0;
}
