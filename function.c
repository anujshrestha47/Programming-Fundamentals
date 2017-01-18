#include<stdio.h>
#define pi 3.14
#include<math.h>
void area(float a);//fxn defination

int main()
{
    float r;
    printf("enter a radius\n");
    scanf("%f",&r);
    area(r);   //fxn call
    return 0;
}
void area(float b) //frx code
{
    float result;
    result=pi*pow(b,2);
    printf("the area or circle is %f",result);

}
