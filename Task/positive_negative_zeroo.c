//find positive and negative number or zero

#include<stdio.h>
int main(){
	int a;
	printf("enter the value of a");
	scanf("%d",&a);
	
	if(a>0){
		printf("The number is a positive number");
	}
	else if(a<0){
		printf("The number is a negative number");
	}
	else{
		printf("The number is zero");
	}
}
