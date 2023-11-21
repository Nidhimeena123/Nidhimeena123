//check if the value is digit or alphabet or symbol

#include<stdio.h>
int main(){
	
	char a1;
	printf("enter the value of a1\n");
	scanf("%c",&a1);
	if((a1>='a' && a1<='z')||(a1>='A' && a1<='Z')){
		printf("value  is an aplhabet");
	}
	else if(a1>='0' && a1<='9'){
		printf("value  is a digit");
	}
	else {
		printf("value is a symbol");
	}
	return 0;
}
