/*
name:anuj shrestha
subject:programming fundamental
program:wap to add to matrices [2*2],ask input from users.
lab sheet no:22
date:3rd feb
*/

#include<stdio.h>
int main()
{

int a [2][2],  b[2][2],  c[2][2] , i , j; 
 
    for (i=0;i<2;i++){
    for (j=0;j<2;j++){

   	printf("enter elememts for 1st array \n");
   	scanf("%d",&a[i][j]);
}
}
    for (i=0;i<2;i++){
    for (j=0;j<2;j++){

  	printf("enter elememts for 2nd array \n");
  	scanf("%d",&b[i][j]);
}
}
   for (i=0;i<2;i++){
   for (j=0;j<2;j++){
c[i][j]=a [i][j]+ b[i][j];
}
}
  	printf("the sum is\n");

  for (i=0;i<2;i++){
  for (j=0;j<2;j++){

 	printf("%d \t",c[i][j]);
}
  	printf("\n");
}
return 0;
}
