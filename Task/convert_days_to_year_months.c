//convert days to year and months

#include<stdio.h>
int main(){
	
	int days,years,months;
	printf("Enter number of days");
	scanf("%d",&days);
	years=days/365;
	months=days/30;
	printf("%d years\n",years);
	printf("%d months",months);
	return 0;
}
