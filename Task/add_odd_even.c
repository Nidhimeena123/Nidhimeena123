//total even and odd  numbers and their addition
#include<stdio.h>
int main()
{
  int n,num,even=0,odd=0;
  int i;
  printf("enter numbers:",n+1);
  for(i=0;i<=5;i++)
  {
  	scanf("%d",&n);
    if(n%2==0)
    {
    	even+=1;
    	num+=n;
    }
    else
    {
    	odd+=1;
    	num+=n;
	}
  }
  
  printf("\nTotal even numbers:%d",even);
  printf("\nTotal odd numbers:%d\n",odd);
  printf("%d\n",num);
  return 0;
}
