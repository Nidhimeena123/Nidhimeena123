//find the occurence of the letter in the string

#include<stdio.h>

int main()
{
	char str[20];
	char ch;
	int count=0;
	int i;
	printf("Enter a string : ");
	gets(str);
	
	printf("Enter character : ");
	scanf("%c",&ch);
	
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i] == ch)
		count++;
	}
	printf("%d",count);
	return 0;
}
