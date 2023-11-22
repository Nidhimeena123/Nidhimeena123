//Restaurant

#include<stdio.h>

//functions
void Pizza(){
	int quantity,price=90,total;
	char item;
	printf("\nYour Item : Pizza \n");
	printf("Enter Quantity : ");
    scanf("%d",&quantity);
	printf("Total Price : %d\n",total=price*quantity);
}
void Burger(){
	int quantity,price=89,total;
	char item;
	printf("\nYour Item : Burger \n");
	printf("Enter Quantity : ");
    scanf("%d",&quantity);
	printf("Total Price : %d\n",total=price*quantity);
}
void Pani_Puri(){
	int quantity,price=100,total;
	char item;
	printf("\nYour Item : Pani-Puri \n");
	printf("Enter Quantity : ");
    scanf("%d",&quantity);
	printf("Total Price : %d\n",total=price*quantity);
}
void Dosa(){
	int quantity,price=80,total;
	char item;
	printf("\nYour Item : Dosa \n");
	printf("Enter Quantity : ");
    scanf("%d",&quantity);
	printf("Total Price : %d\n",total=price*quantity);
}
void totalBill(){
	int totalbill=0,total;
    printf("Your Total Bill : %d\n",totalbill *= total);
    printf("thankyou");
}

int main()
{
	
//	Printing the Heading
    printf("==========Welcome To Tops Restaurant==========\n\n");
    printf("SRNO.    ITEM       PRICE\n");
    printf(" 1       Pizza       90/-\n");
    printf(" 2       Burger      89/-\n");
    printf(" 3       Pani-Puri   100/-\n");
    printf(" 4       Dosa        80/-\n");
    
    char choose;
    
//    Asking choice from user
    do{
    int choice;
    printf("\nEnter Your Choice From the Above List : ");
    scanf("%d",&choice);
    
//    Performing operation for selected choices
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
      		printf("Something went wrong");
	  }
	  
//	  Asking user if they want anything else
      printf("\nDo you want Anything else ? ['y/n']");
      scanf(" %c", &choose);
      
} while(choose=='y');
     totalBill();
	return 0;
}
