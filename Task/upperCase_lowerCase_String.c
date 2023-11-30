#include<stdio.h>

int main()
{
	char str4[100];
	int i,lowerCase=0,upperCase=0;
	
	printf("Enter String : ");
	gets(str4);
	
	for(i=0;str4[i]!='\0';i++)
	{
		if(str4[i]>='a' && str4[i]<='z')
		lowerCase++;
	}
	
	for(i=0;str4[i]!='\0';i++)
	{
		if(str4[i]>='A' && str4[i]<='Z')
		upperCase++;
	}
	
	printf("LowerCase : %d",lowerCase);
	printf("\nUpperCase : %d",upperCase);
	
	return 0;
}
