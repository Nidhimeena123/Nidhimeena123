#include<stdio.h>

struct Student{
	int id;
	char name;
	float height;
};

int main()
{
	struct Student s1;
 
	printf("Enter id : ");
	scanf("%d",&s1.id);
	
	fflush(stdin);
	printf("Enter name : ");
	scanf("%c",&s1.name);
	
	printf("\nEnter height : ");
	scanf("%f",&s1.height);

	printf("\n\n Information \n\n");
	printf("Id : %d\n",s1.id);
	printf("Name : %c\n",s1.name);
	printf("height : %f\n",s1.height);
}


//task : to print data of 5 students
