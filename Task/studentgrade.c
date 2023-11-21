//student marks 
#include<stdio.h>
int main(){
	
	int sci,phy,math;
	printf("Enter marks of sci,phy and math");
	scanf("%d %d %d",&sci,&phy,&math);
	int total=sci+phy+math;
	printf("Total marks is=%d\n",total);
	float per=total/3;
	printf("Percentage is =%f\n",per);
	if(per>80){
		printf("A++");
	}
	else if(per>70){
		printf("B");
	}
	else if(per>60 ){
		printf("C");
	}
	else if(per>35){
		printf("pass");
	}
	else {
		printf("Fail");
	}
	return 0;
}
