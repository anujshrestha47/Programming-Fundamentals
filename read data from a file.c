#include<stdio.h>
#include<conio.h>
int main ()
{
    FILE *fp;
    char data[255];
    fp=fopen("E:/sunway/test.txt","r");//for ubuntu use test.txt only as path
    fscanf(fp,"%s",data); //reads single character
    printf("%s",data);
    printf("\n");
    fclose(fp);
    getch ();
    return 0;

}
