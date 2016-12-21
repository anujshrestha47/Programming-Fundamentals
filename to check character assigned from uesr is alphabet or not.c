/*
name:Anuj shrestha
roll no:05
subject: programing fundamental
lab sheet no:13
prograam:to check character assigned from user is alphabet or not.
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    char a;
    int ASCII;
printf("enter any character\n");
scanf("%c",&a);
ASCII=a;
if ((ASCII>=65 && ASCII<=90)|| (ASCII>=97 && ASCII<=122))
{
    printf("%c is alphabet",a);
}
else
{
    printf("%c is not alphabet",a);
}
getch();
return 0;
}
