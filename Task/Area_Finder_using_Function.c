//area finder of circle triangle and rectangle using function

#include<stdio.h>

//creating function for circle, triangle and rectangle
void circle(){
	int r,area;
	float pi=3.14;
	printf("\nEnter pi : ");
	scanf("%f",&pi);
    printf("Enter Radius : ");
	scanf("%d",&r);
	printf("Area of Circle : %d \n\n ",area=pi*r*r);
}
void triangle(){
	int l,w,area;
	printf("\nEnter length : ");
	scanf("%d",&l);
	printf("Enter width : ");
	scanf("%d",&w);
	area=l*w/2; //formula for finding area of triangle
	printf("Area of Triangle : %d \n\n ",area);	
}
void rectangle(){
	int l,w,area;
	printf("\nEnter length : ");
	scanf("%d",&l);
	printf("Enter width : ");
	scanf("%d",&w);
	area=l*w;//formula for finding area of Rectangle
    printf("Area of Rectangle : %d \n\n",area);	
}
	
	
int main(){
	
//	Will print the Heading 
	printf("---------Area finder--------- \n\n");
	
//	choices
    printf("1.Circle \n");
    printf("2.Triangle \n");
    printf("3.Rectangle \n\n");
    
//    asking for user choice
    int choice;
	printf("Enter choice : ");
	scanf("%d",&choice);
	
	switch(choice){
		
//		case 1 for finding area of circle
		case 1:
	        circle();
	        break;
		
//		case 2 for finding area of Triangle
		case 2:
			triangle();
			break;

//		case 1 for finding area of Rectangle
		case 3:
		    rectangle();
		    break;
			
		default:
			{
				printf("something went wrong \n");
			}
	}
	
	printf(">>>>>>>>>>>>>>>>>>>Thank You \n");
	return 0;
}
