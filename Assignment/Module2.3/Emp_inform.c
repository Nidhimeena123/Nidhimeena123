#include<stdio.h>

struct Employee
{
	int empno;
	char empname[20];
	char address[50];
	int age;
};

int main()
{
    struct Employee emp;
    int i;
    {
    	fflush(stdin);
    	printf("Enter Your Empno : ");
    	scanf("%d",&emp.empno);
    	fflush(stdin);
    	printf("Enter Your Name : ");
    	scanf("%s",&emp.empname);
    	fflush(stdin);
    	printf("Enter Your Address : ");
    	scanf("%s",&emp.address);
    	fflush(stdin);
    	printf("Enter Your Age : ");
    	scanf("%d",&emp.age);
    	
    	printf("\n");
	}
	
	printf("\n\n=============Employee Information==============\n\n");
     	printf("Empno : %d\n",emp.empno);
    	printf("Name : %s\n",emp.empname);
    	printf("Address : %s\n",emp.address);
    	printf("Age : %d\n",emp.age);
    	
    	printf("\n");  
	return 0;
}
