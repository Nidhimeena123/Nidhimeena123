//showing monday to sunday using switch case
#include<stdio.h>
int main(){
	
	int choice;//initialization
	printf("Enter number between 1-7 : ");//getting choice from user
	scanf("%d",&choice);
	
	switch(choice) //one of the below case will be printed according to user choice
	{
		case 1:
			printf("Monday");
			break;
		case 2:
			printf("Tuesday");
			break;
		case 3:
			printf("Wednesday");
			break;
		case 4:
			printf("Thursday");
			break;
		case 5:
			printf("Friday");
			break;
		case 6:
			printf("Saturday");
			break;
		case 7:
			printf("Sunday");
			break;
		default:
			printf("Invalid input");
	}
	return 0;
}
