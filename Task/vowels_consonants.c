//vowels and consonants

#include<stdio.h>
int main(){
	
	char vowels;
	vowels='a','e','i','o','u';
	char ch;
	printf("enter any alphabet\n");
	scanf("%c",&ch);
	if(ch==vowels){
		printf("the alphabet is a vowel");
	}
	else{
		printf("the alphabet is a consonant");
	}
	return 0;
}
