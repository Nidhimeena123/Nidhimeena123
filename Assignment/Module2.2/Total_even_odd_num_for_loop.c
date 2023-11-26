#include<stdio.h>
int main()
{
	int num,i,even=0,odd=0;
	for(i=1;i<=5;i++)
	{
		printf("enter a number : ");
		scanf("%d",&num);
	if(num%2==0)
	{
		even++;
	}
	else 
	{
		odd++;
	}
}
	printf("\n Total of even numbers : %d ",even);
	printf("\n Total odd numbers : %d ",odd);
	return 0;
}
