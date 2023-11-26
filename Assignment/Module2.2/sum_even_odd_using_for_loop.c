//sum of total even and odd numbers
#include<stdio.h>
int main()
{
	int num,i,even=0,odd=0;
	for(i=1;i<=10;i++)
	{
		printf("enter a number : ");
		scanf("%d",&num);
	if(num%2==0)
	{
		even+=num;  //this will make the summation of even numbers
	}
	else 
	{
		odd+=num;  //this will make the summation of odd numbers
	}
}
	printf("\n sum of even numbers : %d ",even);
	printf("\n sum odd numbers : %d ",odd);
	return 0;
}
