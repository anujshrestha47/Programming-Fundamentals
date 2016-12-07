/*
name:anuj shrestha
subbject:programming fundamentals
roll no:05
program:
date:7 dec
*/
#include<stdio.h>

 int main()
{
int a,b,c;
printf("enter first no.");
scanf("%d",&a);
printf("enter second no.");
scanf("%d",&b);
printf("enter third no.");
scanf("%d",&c);

if (a>b && a>c)
{
    printf("a is greatest %d",a);
}
if (b>c && b>a)
{

    printf("b is greatest %d",b);
}
if (c>a && c>b)
{
    printf("c is greatest %d",c);
}
return 0;


}
