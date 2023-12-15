#include<stdio.h>

int main()
{
	char str[10];
	int length=0;
	int i;
//	Entering string the user want
	printf("Enter string : ");
	scanf("%s",str);
	 
	for(i=0;str[i]!='\0';i++)
	{
//		finding the length
		length++;
	}
//	printing the length of the string
	printf("length of the string : %d",length);
	return 0;
}
