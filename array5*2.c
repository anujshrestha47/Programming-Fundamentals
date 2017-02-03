/*
name:anuj shrestha
subject:programming fundamental
program:wap to declare and print multi dimensional array.
5*2
lab sheet no:22
date:3rd feb
*/

#include<stdio.h>
int main()
{
int array [5][2],i,j; 

    for (i=0;i<5;i++)
  {
    for (j=0;j<2;j++)
  {
  printf("enter nos \n");
  scanf("%d",&array[i][j]);
  }
  }

   for (i=0;i<5;i++)
  {
    for (j=0;j<2;j++)
  {
printf("%d \t",array[i][j]);
}
printf("\n");
}
return 0;
}

