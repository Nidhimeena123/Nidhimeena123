#include<stdio.h>

int main()
{
	int num1,num2;
	int sum,sub,mul,div,mod;

   	printf(" 1.Addition\n 2.Subtraction\n 3.Multiplication\n 4.Division\n 5.Modulo\n\n");
   	
   	printf("Enter two Numbers :");
   	scanf("%d %d",&num1,&num2);
    
//		Ask user choice
	     	int choice;
            printf("Enter Your Choice : ");
            scanf("%d",&choice);
		
          
//     Performing the operatin
          switch(choice)
          {
          	case 1:
          			sum=num1+num2;
          			printf("Summation is : %d",sum);
          			break;
			case 2:
					sub=num1-num2;
          			printf("Subraction is : %d",sub);
					break;
			case 3:
					mul=num1*num2;
          			printf("Multiplication is : %d",mul);
					break;
			case 4:
					div=num1/num2;
          			printf("Division is : %d",div);
					break;
			case 5:
					mod=num1%num2;
          			printf("Modulo is : %d",mod);
					break;
			default:
					printf("Invalid choice\n");
		  }
    return 0;
}

