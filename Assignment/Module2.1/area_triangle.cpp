//area of triangle

#include<stdio.h>
int main(){
	
	float base,height,area;
	printf("enter the base=");
	scanf("%f",&base);
	printf("enter the height=");
	scanf("%f",&height);
//	formula for getting the area of traingle
	area=(base*height)/2;
	printf("area of triangle=%f",area);
	return 0;
}
