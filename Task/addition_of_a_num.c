//sum of digit

#include<stdio.h>
int main()
{
	int num,sum;
	int i;
	printf("Enter a number : ");
	for(i=0;i<=5;i++)
	{
	    scanf("%d",&num);
	}
	
	for(i=0;i<=5;i++)
	{
		sum+=num;
	}
	
	printf("%d",sum);
}
