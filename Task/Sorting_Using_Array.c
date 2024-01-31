//Sorting of array elements
#include<stdio.h>
int main(){
	
	int a,arr[5]={8,4,7,5,6};
	int i,j;
	printf("Before Sorting :");
	for(i=0;i<5;i++)
	{
		printf("%d,",arr[i]);
    }
    for(i=0;i<5;i++)
    {
    	for(j=i+1;j<5;j++)
    	{
    		if(arr[i] > arr[j])
    		{
    			 a = arr[i];
    			 arr[i] = arr[j];
    			 arr[j] = a;
			}
		}
	}
	printf("\nAfter Sorting : ");
	for(i=0;i<5;i++)
	{
		printf("%d,",arr[i]);
	}
	return 0;
}
