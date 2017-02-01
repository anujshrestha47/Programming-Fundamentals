
#include<stdio.h>
#include<conio.h>

int main ()
{
    int a,num[10],i,greater=0;
    for(i=0;i<10;i++)
    {
        printf("Enter a number ");
        scanf("%d",&num[i]);
    }
    for (i=0;i<10;i++)
        {
        if (greater <num[i])
        {
            greater=num[i];
        }

    }
    printf("The greater value is %d",greater);
    return 0;
}

