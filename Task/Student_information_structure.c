
#include<stdio.h>

struct Student
{
	int rollno;
	char name[20];
	int age;
};

int main()
{
    struct Student s2[5];
    int i;
    for(i=0;i<5;i++)
    {
    	fflush(stdin);
    	printf("Enter Your Rollno : ");
    	scanf("%d",&s2[i].rollno);
    	fflush(stdin);
    	printf("Enter Your Name : ");
    	scanf("%s",&s2[i].name);
    	fflush(stdin);
    	printf("Enter Your Age : ");
    	scanf("%d",&s2[i].age);
    	
    	printf("\n");
	}
	
	printf("\n\n=============information of students==============\n\n");
	for(i=0;i<5;i++)
	{
     	printf("Rollno : %d\n",s2[i].rollno);
    	printf("Name : %s\n",s2[i].name);
    	printf("Age : %d\n",s2[i].age);
    	
    	printf("\n");
   }   
	return 0;
}
