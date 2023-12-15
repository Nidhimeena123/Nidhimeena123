//Simple interest

#include<stdio.h>
int main(){
	
//	varible declaration
	float s,p,r,t;
	printf("enter p, r and t ");
	scanf("%f %f %f",&p,&r,&t);
	
//	formula for finding simple interest
	s=p*r*t/100;
	
//	printing the answer
	printf("Simple Interest is = %f",s);
	return 0;
}
