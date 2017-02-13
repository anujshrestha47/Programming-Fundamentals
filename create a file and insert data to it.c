#include<stdio.h>
#include<conio.h>
int main ()
{
FILE *fp;
fp=fopen("E:/sunway/test.txt","w");
fprintf(fp, "This data is saved to file. \n");
fputs("This is another line in the file.",fp);
fclose(fp);
getch ();
return 0;
}
