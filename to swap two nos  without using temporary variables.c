/*
naem:anuj shrestha
roll no :05
program:to swap two nos using temporary variable.
lab sheet:12
date:dec 14
*/


#include<stdio.h>
 int main()
 {
	 int a,b;
	 printf("enter first no \n");
	 scanf("%d",&a);
	 printf("enter second no \n");
	 scanf("%d",&b);
	 printf("before swap %d and %d \n" ,a,b);
	 
	 a=a-b;
	 b=a+b;
	 a=b-a;
	 printf("after %d and %d swap \n" ,a,b);
	 return 0;
 }
	 
