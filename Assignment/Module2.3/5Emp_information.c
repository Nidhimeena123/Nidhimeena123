#include<stdio.h>

//creating structure of employee
struct Employee
{
	int empno;
	char empname[20];
	char address[50];
	int age;
};

int main()
{
//	creating structure varaible
    struct Employee emp[5];
    int i;
//    Asking 5 employees to enter their details
    for(i=0;i<5;i++)
    {
    	fflush(stdin);
    	printf("Enter Your Empno : ");
    	scanf("%d",&emp[i].empno);
    	fflush(stdin);
    	printf("Enter Your Name : ");
    	scanf("%s",&emp[i].empname);
    	fflush(stdin);
    	printf("Enter Your Address : ");
    	scanf("%s",&emp[i].address);
    	fflush(stdin);
    	printf("Enter Your Age : ");
    	scanf("%d",&emp[i].age);
    	
    	printf("\n");
	}
	
//	printing employees details
	printf("\n\n=============Employee Information==============\n\n");
	for(i=0;i<5;i++)
	{
     	printf("Empno : %d\n",emp[i].empno);
    	printf("Name : %s\n",emp[i].empname);
    	printf("Address : %s\n",emp[i].address);
    	printf("Age : %d\n",emp[i].age);
    	
    	printf("\n");
   }   
	return 0;
}
