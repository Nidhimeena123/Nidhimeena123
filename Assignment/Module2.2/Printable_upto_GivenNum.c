//Print table upto given number
#include<stdio.h>
int main()
{
	int num;
	int i,j;
	printf("Enter a number : ");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++)
	{
		for(j=1;j<=10;j++)
		{
			printf("%d * %d = %d \n",i,j,i*j);
     	}
     	printf("\n");
	}
	
	return 0;
}
