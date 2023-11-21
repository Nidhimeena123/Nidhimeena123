//Simple interest

#include<stdio.h>
int main(){
	
	float s,p,r,t;
	printf("enter p, r and t ");
	scanf("%f %f %f",&p,&r,&t);
	s=p*r*t/100;
	printf("Simple Interest is = %f",s);
	return 0;
}
