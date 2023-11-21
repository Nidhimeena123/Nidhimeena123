//check if the given year is a leap year not
#include<stdio.h>

int main(){
	
	int year;
	printf("Enter the year \n");
	scanf("%d",&year);
	if(year % 400 == 0){
		printf("The year entered is a leap year");
	}
	else{
		printf("The year entered is not a leap year");
	}
	return 0;
}
