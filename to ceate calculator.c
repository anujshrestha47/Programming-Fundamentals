/*
naem:anuj shrestha
roll no :05
program:write a menu based program to create calculator.
lab sheet:12
date:dec 14
*/


#include<stdio.h>
#include<stdlib.h>
int main()
{	int n,a,b;
	
	printf("choose any number \n");
	printf("1 addition \n");
	printf("2 subtraction \n");
	printf("3 multiplication \n");
	printf("4 divident \n");
	printf("5 exit \n");
	scanf("%d",&n);
	printf("enter 1st number \n");
	scanf("%d",&a);
	printf("enter 2nd number \n");
	scanf("%d",&b);
	
	switch(n)
{
	case 1: 
			n = a+b;
			printf("the sum is %d",n);
			break;
	
	case 2:
			n=a-b;
			printf("the subtraction is %d",n);
			break;
			
	case 3:
			n=a*b;
			printf("the multiplication is %d",n);
			break;
			
	case 4:
			n=a/b;
			printf("the divident is %d",n);
			break;
	case 5:
			exit(0);
			
	default:
				printf("Thank You for visiting!!");
			

}

return 0;
}
