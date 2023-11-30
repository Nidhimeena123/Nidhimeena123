//wap to find character and white space from the string

#include<stdio.h>

int main()
{
	char str[100];
	int i,length=0,space=0;
	printf("Enter a string : ");
	gets(str);
	
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]!=' ')
		length++;
	}
	
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==' ')
		space++;
	}
	printf("Characters : %d",length);
	printf("\nSpaces : %d",space);

	return 0;
}
