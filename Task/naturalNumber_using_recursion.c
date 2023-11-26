//Take number from user and find addition of all natural number upto that number

#include<stdio.h>
int natural(int num)
{
	if(num>=1)
	{
		 return(num+natural(num-1));
	}
	else
	{
		return num;
	}
}

int main(){
	
	int num;
	printf("Enter a number : ");
	scanf("%d",&num);
	
	printf("The Sum of Natural Numbers : %d", natural(num));
	return 0;
}
