/*
name:anuj shrestha
roll no:05
subject:programming fundamentals
program:To check greater no using ternary operator.
date:9th dec
*/

#include<stdio.h>
#include<conio.h>
 int main()

 {
	 int a,b,c;
	 printf("enter 1st number \n");
	 scanf("%d",&a);
	 printf("enter 2nd number \n");
	 scanf("%d",&b);
	 printf("enter 3rd number \n");
	 scanf("%d",&c);
	 (a>=b && a>=c)? printf(" greater %d",a):(b>=c && b>=a)? printf("greater %d",b):printf("greater %d",c);
	 getch ();
     return 0;



 }
