/*
name:anuj shrestha
subject:programmingfundamental
program:structure
labsheetno:24
date:6th feb
*/

#include<stdio.h>
struct multiplication
{
float a,b,c;
};
void multiply(float x,float y,float z);
int main()
{
	struct multiplication mul;
	printf("enter 1st number \n");
	scanf("%f",&mul.a);
	printf("enter 2nd number \n");
	scanf("%f",&mul.b);
	printf("enter 3rd number \n");
	scanf("%f",&mul.c);
	multiply(mul.a,mul.b,mul.c);
	return 0;
}
	void multiply(float x,float y,float z)
{
 	float result;
	result=x*y*z;
	printf("the multiplication of 3 nos is %f",result);
}
