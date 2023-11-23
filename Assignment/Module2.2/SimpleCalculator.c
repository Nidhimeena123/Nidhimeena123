//Simple calculator

#include<stdio.h>

int main(){
	
//	Initializing two variables
	int num1,num2;
//	getting input from user
    printf("Enter two number \n");
    scanf("%d %d",&num1,&num2);
    printf("The sum of num1 and num2 = %d \n",num1+num2);
    printf("The sub of num1 and num2 = %d \n",num1-num2);
    printf("The div of num1 and num2 = %d \n",num1/num2);
    printf("The mul of num1 and num2 = %d \n",num1*num2);
    printf("The mod of num1 and num2 = %d \n",num1%num2);
	
	return 0;
}
