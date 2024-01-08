//Billing system 

#include<stdio.h>

//global variable
int price,amount,quantity,total;

//functions
void Pizza(){
	int price=180;
	printf("\nYou have selected Pizza\n");
	printf("Enter Quantity : ");
    scanf("%d",&quantity);
	printf("Amount : %drs\n",amount=price*quantity); //total amount 
}
void Burger(){
	int price=100;
	printf("\nYou have selected Burger\n");
	printf("Enter Quantity : ");
    scanf("%d",&quantity);
    printf("Amount : %drs\n",amount=price*quantity); //total amount

}
void Pani_Puri(){
	int price=120;
	printf("\nYou have selected Dosa\n");
	printf("Enter Quantity : ");
    scanf("%d",&quantity);
	printf("Amount : %drs\n",amount=price*quantity);  //total amount
}
void Dosa(){
	int price=50;
	printf("\nYou have selected Idli\n");
	printf("Enter Quantity : ");
    scanf("%d",&quantity);
	printf("Amount : %drs\n",amount=price*quantity); //total amount
}


int main()
{
//	declaration of variable if user want anything else
	 char choose;

    do{	
//    	Printing the Menu
    printf("\n==========Menu==========\n\n");
    printf(" 1       Pizza       Price = 180rs/pcs\n");
    printf(" 2       Burger      Price = 100rs/pcs\n");
    printf(" 3       Dosa        Price = 120rs/pcs\n");
    printf(" 4       Idli        Price = 50rs/pcs\n");
    
//    	getting user's choice from the list
    int choice;
    printf("\nPlease Enter Your choice : ");
    scanf("%d",&choice);
    
//    Performing operation based on user's choice
      switch(choice){
      	case 1:
      		Pizza();
      		break;
      	case 2:
      		Burger();
      		break;
      	case 3:
      		Pani_Puri();
      		break;
      	case 4:
      		Dosa();
      		break;
      	default:
      		printf("Choose from the given options\n");
	  }
	  
//	  Asking user if they want anything else
      printf("\nDo you want Anything else ? ['y/n'] : ");
      scanf(" %c", &choose);
      
} while(choose=='y' || choose=='Y');//if user choose yes it will repeat the process
//this will be printed if user chooses no
    printf("\nThank You for Ordering\n");
	return 0;
}
