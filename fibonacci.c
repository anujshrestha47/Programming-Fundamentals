/*
name:anuj shrestha
roll no:05
subject:programming fundamental
lab sheet:18
program:wap to print fibonacci series.
date:20th jan*/


#include<stdio.h>
#include<conio.h>
int main()
{
int a=1, b=1,c,i;
printf("%d \t %d \t",a,b);
for (i=1;i<8;i++)
{
c=a+b;
printf("%d\t",c);
a=b;
b=c;
}
getch();
return 0;
}
