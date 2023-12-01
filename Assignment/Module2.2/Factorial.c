#include<stdio.h>

int main(){

	int f=1,i,num;
	printf("enter a number : ");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
		f=f*i;
		printf("The factorial of %d = %d\n", num, f);
	return 0;
}
