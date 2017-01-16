/*
student name:anuj shrestha
roll no:06
program:wap to display the loop pattern.
        1
	22
	333
	4444
	55555

labsheet:18
date:16th jan
*/
#include<stdio.h>            
int main()                 
{                          
int i,j,n;
printf("enter no of rows \n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
	for(j=1;j<=i;j++)
	{
	printf("%d",i);
	}
printf("\n");
}
}
