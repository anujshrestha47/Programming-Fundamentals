/*
name:anuj shrestha
roll no :05
sub:programming fundamental
lab sheet no:18
program:wap to enter length and breadth and display area of rectangle.
          (using function)
date:18th jan
*/
#include<stdio.h>

void area();
int main()
{
    area();
    return 0;
}
void area()
{
    int l,b,area;
    printf("enter length of rectangle \n");
    scanf("%d",&l);
    printf("enter breadth of rectangle \n");
    scanf("%d",&b);
    area=l*b;
    printf("the area of rectangle is %d",area);
    getch();
}
