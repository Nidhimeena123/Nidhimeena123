#include<stdio.h>

int main()
{
	
	 char str3[100];
	 int i,vowels=0,consonants=0;
	 
	 printf("Enter String :");
	 gets(str3);
	 
	 for(i=0;str3[i]!='\0';i++)
	 {
		 if(str3[i]=='a' || str3[i]=='e' || str3[i]=='i' 
		 || str3[i]=='o' || str3[i]=='u'){
	 	 vowels++;}
	    else{
	     consonants++;}
	 }
	 
	printf("Vowels : %d",vowels);
	printf("\nConsonants : %d",consonants);
	
	return 0;
}
