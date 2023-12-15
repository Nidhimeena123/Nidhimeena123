// Person's Information using printf

#include<stdio.h>

int main()
{
//	variable declaration
	char name[20],address[20];
	int bd,age;
//	Asking User information
	fflush(stdin);
    printf("Your Name :");
    scanf("%s",&name);
    fflush(stdin);
    printf("Your Birth date:");
    scanf("%d",&bd);
    printf("Your Age :");
    scanf("%d",&age);
    fflush(stdin);
    printf("Your Address :");
    scanf("%s",&address);
    
//    printing Information
     printf("\n\n================Information=====================\n\n");
     printf("Name : %s\n",name); 
     printf("BirthDate : %d\n",bd); 
     printf("Age : %d\n",age); 
     printf("Address : %s\n",address); 
    return 0;
	
}
