//sum of even and odd
#include<stdio.h>
int main()
{
  int i,n,num,even=0,odd=0;
  printf("enter numbers:",n+1);
  for(i=0;i<=5;i++)
  {
  	scanf("%d",&n);
    if(n%2==0)
    {
    	even+=n;
    }
    else
    {
    	odd+=n;
	}
  }
  
  printf("\nsum of even numbers:%d",even);
  printf("\nsum of odd numbers:%d",odd);
  return 0;
}
