//Program To Calculate Sum Of Given Numbers Till User Enter Zero Or -ve Number
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    int No=0,Sum=0,Cnt=1;

    printf("\n Enter Numbers To Calculate There Sum\n(Will Stop Summation After 0/-ve Input => )");

    while(1)
    {
        printf("\n\tEnter Number %d=",Cnt);
        scanf("%d",&No);

        if(No<=0)
        {
            break;
        }

        Sum=Sum+No;
        Cnt++;
    }

    printf("\n Press Any Key To Get Summation Of Given Number =>");
    getche();

    printf("\n Summation Of Given Numbers = %d",Sum);

    printf("\n\nThanks!!!!");
    getch();
    return 0;

}

