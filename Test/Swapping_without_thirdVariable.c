//Swap two numbers without using third variable

#include<stdio.h>

int main()
{
	int a,b;
	printf("Enter numbers :");
	scanf("%d %d",&a,&b);
	printf("\nBefore Swapping : %d %d",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\nAfter Swapping : %d %d",a,b);
	
	return 0;
}
