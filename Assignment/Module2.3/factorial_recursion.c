#include<stdio.h>

//using recursion performing factorial
int fact(int num)
{
	if(num>=1)
	{
		return(num*fact(num-1));
	}
	else
	{
		return 1;
	}
}
int main()
{
//	variable declaration
	int num;
	printf("Enter number :");
	scanf("%d",&num);

	printf("The factorial of a number is : %d", fact(num));
	return 0;
}
