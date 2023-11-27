//take 10 elements inputs from user and make sum of that elements
#include<stdio.h>

int main(){
	
	int sum,arr[10];
	int i;
	printf("Enter number : \n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
		
	for(i=0;i<10;i++)
	{
		sum+=arr[i];
	}
	printf("Sum of array elements = %d ",sum);
	return 0;
}
