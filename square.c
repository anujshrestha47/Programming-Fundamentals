/*
student name: anuj shrestha
subject: programming fundamental
lab sheet no: 7
program: wap to enter any number and find its square.
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
int main ()
{
    float a,b;
    printf("enter a number: \n");
    scanf("%f",&a);
    b=pow(a,2);
    printf("the square of given no is: %f",b);

    getch();
    return 0;
}
