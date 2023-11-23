//vowels and consonants using switch case
#include<stdio.h>
int main()
{
	char ch;//initialization
	printf("Enter an Alphabet : ");//getting user input
	scanf("%c",&ch);
	
	switch(ch)
	{
		case 'a':
				printf("The alphabet is an vowel ");
				break;
		case 'e':
				printf("The alphabet is an vowel ");
				break;
		case 'i':
				printf("The alphabet is an vowel ");
				break;
	    case 'o':
				printf("The alphabet is an vowel ");
				break;
		case 'u':
				printf("The alphabet is an vowel ");
				break;
		default:
			printf("The alphabet is a consonant ");
			
	}
	return 0;
}
