//swapping of two integers using third variable
#include<stdio.h>
int main(){
	
	int a,b,c;
	printf("enter the value of a and b \n");
	scanf("%d %d",&a,&b);
	printf("before swapping  a=%d and b=%d",a,b);
	c=a;
	a=b;
	b=c;
	printf("\nafter swapping  a=%d and b=%d",a,b);
	return 0;
}
