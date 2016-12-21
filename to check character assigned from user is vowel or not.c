/*
name:Anuj shrestha
roll no:05
subject: programing fundamental
lab sheet no:13
prograam:wap to check character assigned from user is vowel or not.
*/
#include<stdio.h>
#include<conio.h>
int main ()
{
    char c;
    printf("enter any character .\n");
    scanf("%c",&c);

    if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='u')
    {
        printf(" %c ,is vowel ",c);
    }
    else
    {
     printf("%c is not a vowel ",c);

    }
    getch();
    return 0;

}

