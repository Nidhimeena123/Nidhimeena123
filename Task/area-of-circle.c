//find area of circle

#include<stdio.h>
int main(){
	
	//pi*r*r
	float r,area;
	float pi=3.14;
	printf("enter the value of r\n");
	scanf("%f",&r);
    area=pi*r*r;
	printf("area of circle is = %f",area);
	return 0;
}
