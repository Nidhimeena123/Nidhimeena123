#include<stdio.h>

int main()
{
	char str1[10];
	int i,count;
	printf("Enter a string : ");
	scanf("%s",str1);
	
	for(i=0;str1[i]!='\0';i++)
	{
		count++;
	}
	printf("%d",count);

	return 0;
}
