#include<stdio.h>

int main()
{
	int num;
	printf("Enter number : ");
	scanf("%d",&num);
	
	if(num/2==0)
	{
		printf("number is prime number");
	}
	else
	{
		printf("Number is not a prime number");
	}
	return 0;
}
