//print 10 to 1 using recursion
#include<stdio.h>

int recursion(int i)
{
	for(i=10;i>=1;i--)
	{
       printf("%d\n",i);
    }
}

int main(){
	
	int i;
	recursion(i);
	return 0;
}
