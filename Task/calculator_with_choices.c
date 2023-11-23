//Ask user choice and do calculation

#include<stdio.h>
//function
void addition(){
	int num1, num2;
    printf("Enter two numbers : ");
    scanf("%d %d", &num1, &num2);
    printf("Your Ans : %d\n", num1 + num2);
}
void subtraction(){
	int num1, num2;
    printf("Enter two numbers : ");
    scanf("%d %d", &num1, &num2);
	printf("Your Ans : %d ",num1-num2);
}
void multiplication(){
	int num1, num2;
    printf("Enter two numbers : ");
    scanf("%d %d", &num1, &num2);
	printf("Your Ans : %d",num1*num2);
}
void division(){
	int num1, num2;
    printf("Enter two numbers : ");
    scanf("%d %d", &num1, &num2);
	printf("Your Ans : %d",num1/num2);
}
void modulo(){
	int num1, num2;
    printf("Enter two numbers : ");
    scanf("%d %d", &num1, &num2);
	printf("Your Ans : %d",num1%num2);
}


int main(){	
	  
//	  printing choice board
	printf("========Choice Board=======\n\n");
   	printf(" 1.Addition\n 2.Subtraction\n 3.Multiplication\n 4.Division\n 5.Modulo\n 6.Exit\n\n");
    
        char playAgain;
        do
		{
//		Ask user choice
	     	int choice;
            printf("Enter Your Choice : ");
            scanf("%d",&choice);
		
          
//     Performing the operatin
          switch(choice)
          {
          	case 1:
          			addition();
          			break;
			case 2:
					subtraction();
					break;
			case 3:
					multiplication();
					break;
			case 4:
					division();
					break;
			case 5:
					modulo();
					break;
			case 6:
					printf("Thank you");
					return 0;
			default:
					printf("Invalid choice\n");
		  }
	    printf("\nDo you want to play again? (y/n): ");
        scanf(" %c", &playAgain);

    } while (playAgain == 'y' || playAgain == 'Y');

    printf("Thank You\n");
    return 0;
}
		  


