//take 10 elements inputs from user and find even and odd and make sum of even and odd
#include<stdio.h>

int main(){
	
	int arr[10],even=0,odd=0,sum1,sum2;
	int i;
	printf("Enter number : \n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	if(arr[i]%2==0)
	{
		even++;
		sum1+=arr[i];
	}
	else
	{
		odd++;
		sum2+=arr[i];
	}
    }
	printf("Total number of even elements :%d\n", even);
	printf("Total number of odd elements :%d\n", odd);
	printf("Sum of even elements :%d\n", sum1);
	printf("Sum of odd elements :%d\n", sum2);
	return 0;
}
