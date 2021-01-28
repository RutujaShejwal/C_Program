#include<stdio.h>
#include<conio.h>

int main()
{
    int No=0,Min=0,Max=0,Cnt=0;

    printf("\n Enter 10 Numbers To Calculate Maximum And Minimum = ");

    for(Cnt=1;Cnt<=10;Cnt++)
    {
        printf("\n\n Enter Number %d = ",Cnt);
        scanf("%d",&No);

        //Logic To Get 1st Number Directly Minimum
        if(Cnt==1)
        {
            Min=No;
            Max=No;
            continue;
        }

        //Logic For Finding Min
        if(No<Min)
        {
            Min=No;
        }

        //Logic For Finding Max
        if(No>Max)
        {
            Max=No;
        }
    }
    printf("\n Press Any Key To Get Maximum And Minimum From 10 Numbers =>");
    getche();

    printf("\n Maximum Number = %d",Max);
    printf("\n Minimum Number = %d",Min);

    printf("\n\n THANKS!!!");

    getch();
    return 0;
}

