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
int a,b,temp;
printf("enter first number \n");
scanf("%d",&a);
printf("enter second number \n");
scanf("%d",&b);

printf(" Before swap are  %d and %d \n" , a,b);

temp=a;
a=b;
b=temp;


printf(" After swap are  %d and %d \n", a,b);

return 0;

}
