//Even and odd using ternary operator

#include<stdio.h>
int main()
{
	int num;
	printf("Enter the number : ");
	scanf("%d",&num);
//	checking if the number is even or odd
	(num % 2 == 0)?printf("The number %d is even",num):printf("The number %d is odd",num);
	
	return 0;
}
