#include<stdio.h>
	int main()
{
	char str[100];
	int i,length=0,space=0,digit=0;
	printf("Enter a string : ");
	gets(str);

// for counting characters in the string	
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>='a' && str[i]<='z')
		length++;
	}
	
// for counting space in the string
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==' ')
		space++;
	}
	
// for counting digits in the string
		for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>='0' && str[i]<='9')
		digit++;
	}
	
	printf("Characters : %d",length);
	printf("\nSpaces : %d",space);
	printf("\nDigits : %d",digit);

	return 0;
}

