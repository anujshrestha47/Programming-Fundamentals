/*
 name:anuj shrestha
 roll no:05
 subject:programming fundamentals
 program:wap to check the greatest among three nos.using if,elseif,else.
 date:dec 7 
 */
#include<stdio.h>
int main ()
{
 int a,b,c;
 printf("enter 1st no.");
 scanf("%d",&a);
 printf("enter 2nd no.");
 scanf("%d",&b);
 printf("enter 3rd no.");
 scanf("%d",&c);
 if (a>=b && a>=c)
{
	 printf("a is greatest %d",a);
}
 else if(b>=c && b>=a)
 {
	 printf("b is greatest %d",b);
 }
 else 
 {
	 printf("c is greatest %d",c);
 }
 return 0;
}
