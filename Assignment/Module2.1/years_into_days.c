//program to convert years into days and days into years

#include<stdio.h>
int main(){
	
//	variable declaration
	int years,days;
//	taking input from user
    printf("Enter Year ");
    scanf("%d",&years);
    printf("Enter days ");
    scanf("%d",&days);
    
//    formula for converting years into days
    years=days/365;
//    formula for converting days into years
    days=years*365;
    
    printf("%d years \n",years); //this will print the number of years
    printf("%d days",days);// this will print the number of days
	return 0;
}
