//even and odd using ternary operator

#include<stdio.h>
int main()
{
	int num;//initializing the variables
	printf("Enter the number : ");//getting a number from user
	scanf("%d",&num);//printing the number
//	using ternary operator for checking if the number is odd or even
	(num%2==0)?printf("The number is even"):printf("The number is odd");
	return 0;
}

