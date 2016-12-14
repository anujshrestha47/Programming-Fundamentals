/*
naem:anuj shrestha
roll no :05
program:to check whether a no is divisible by 5 & 11 or not.
lab sheet:12
date:dec 14
*/


#include<stdio.h>
int main()
{
	int a;
	printf("enter any number \n");
	scanf("%d",&a);
	if (a%5==0 && a%11==0)
	{
		printf("%d is divisible by 5 and 11 \n",a);
	}
	else
	{
		printf("%d is not divisible by 5 and 11 \n",a);
	}
	return 0;
	}
