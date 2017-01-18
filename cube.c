/*
name:anuj shrestha
roll no :05
sub:programming fundamental
lab sheet no:18
program:wap to find cube of any number using function.
          (function with no argument and no return type.)
date:18th jan
*/
#include<stdio.h>
#include<conio.h>

void cube();
int main()
{
        cube();
        return 0;

}

void cube()
{
    int n,result;
    printf("enter any number:\n");
    scanf("%d",&n);
    result=n*n*n;
    printf("cube is %d",result);
    getch();


}
