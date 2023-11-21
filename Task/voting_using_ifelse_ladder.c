//take age from user and chech he/she can ablke to vote or not.
#include<stdio.h>
int main(){
	 
	 int age;
	 printf("enter your age");
	 scanf("%d",&age);
	 if(age>18){
	 	printf("You can vote");
	 }
	 else if(age==18){
	 	printf("You can apply for voting");
	 }
	 
	 else{
	 	printf("You cannot vote");
	 }
	
	
	return 0;
}
