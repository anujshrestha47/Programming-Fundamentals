/*
Name:anuj shrestha
roll no:05
lab sheet:20
program:wap to find minimum number betn two nos.
        no argument , return type
date:25th jan
*/
#include<stdio.h>

int minimum();
int main()

{
 int result;
 result=minimum();
 printf("the minimum no is %d",result);
 return 0;
 
}

int minimum()
{
	int a,b;
	printf("enter a no \n");
	scanf("%d",&a);
	printf("enter another no \n");
	scanf("%d",&b);
	
	 if  (a<b)
	    return a;
	 else
	    return b;
 
	
	
}
