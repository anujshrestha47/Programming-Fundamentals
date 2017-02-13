
#include<stdio.h>
#include<conio.h>
int main ()
{
    FILE *fp;
    int r=1;
    char data[255]="the data on the file:";
    fp=fopen("E:/sunway/test.txt","r");//for ubuntu use test.txt only as path
    do {
     printf("%s",data);
     printf("\n");
     r=fscanf(fp,"%s",data);
    }
   while (r==1);
   fclose(fp);
    getch ();
    return 0;

}
