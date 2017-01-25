/*
Name:anuj shrestha
roll no:05
lab sheet:20
program:wap to calculate area of circle using function.
date:25th jan
*/
#include<stdio.h>
#define pi 3.14
void area(float a);
int main()

{
float a;
 printf("enter radius \n");
 scanf("%f",&a);
 area (a);
 return 0;
 
}
void area(float a)
{
	float area;
	
	area=pi*a*a;
	printf("the ara of circle is %f",area);
}
