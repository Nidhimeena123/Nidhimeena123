//The number is prime number or not

#include<stdio.h>
int main()
{
	int num,rem,reverse;
	printf("Enter a number :");
	scanf("%d",&num);
	
//	to reverse a number
	while(num != 0)
	{
    rem = num % 10;
    reverse = reverse * 10 + rem;
    num = num/10;
    }
    
    printf("Reverse Number : %d",reverse);
    return 0;
}
