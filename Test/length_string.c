#include<stdio.h>

int main()
{
	char str[10];
	int length=0;
	int i;
	printf("Enter string : ");
	scanf("%s",str);
	 
	for(i=0;str[i]!='\0';i++)
	{
		length++;
	}
	printf("length of the string : %d",length);
	return 0;
}
