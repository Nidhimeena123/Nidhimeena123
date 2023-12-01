#include<stdio.h>
int main()
{
	int num,sum=0,rem;
	printf("Enter any number :");
	scanf("%d",&num);
	
	while(num>0)
	{
		rem = num % 10;
		sum = sum - rem;
		num = num/10;
	}
    printf("Sum : %d",sum);
    
    return 0;
}
