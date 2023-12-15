#include<stdio.h>

//Global variable declaration
int a[5],b;
int i,j;

//function for sorting array in ascending order
void Ascending()
{
      for(i=0;i<5;i++)
    {
    	for(j=i+1;j<5;j++)
    	{
    		if(a[i] > a[j])
    		{
    			 b = a[i];
    			 a[i] = a[j];
    			 a[j] = b;
			}
		}
	}
}

//function for sorting array in descending order
void Descending()
{
      for(i=0;i<5;i++)
    {
    	for(j=i+1;j<5;j++)
    	{
    		if(a[i] < a[j])
    		{
    			 b = a[i];
    			 a[i] = a[j];
    			 a[j] = b;
			}
		}
	}
}

//function for printing the sorted array
void printarray(){
	printf("\nAfter Sorting :");
	for(i=0;i<5;i++)
	{
		printf("%d\n",a[i]);
	}
}

int main()
{
	int choice;
//	Asking for user input to enter array elements
	printf("\nEnter array elements :");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
//	Asking user if they want to print the array in ascending or descending order
	printf("Do you want to sort in ascending = 1 or descending = 2 order [1/2] : ");
	scanf("%d",&choice);
//	if user choses 1 then the array will be sorted in ascending order
	if(choice == 1)
	{
		Ascending();
	    printarray();
	}
//	if user choses 2 then the array will be sorted in descending order
	else if(choice == 2)
	{
		Descending();
		printarray();
	}
	else
	{
		printf("Enter valid choice");
	}
	return 0;
}


