#include<stdio.h>
#include<conio.h>

int main()
{
    int No=0,Min=0,Cnt=0;

    printf("\n Enter 10 Numbers To Calculate Minimum => ");

    for(Cnt=1;Cnt<=10;Cnt++)
    {
        printf("\n\n Enter Number %d = ",Cnt);
        scanf("%d",&No);

        //LOGIC TO GET 1ST NUMBER DIRECTLY MIN
        if(Cnt==1)
        {
            Min=No;
            continue;
        }

        //LOGIC FOR FINDING MIN
        if(No<Min)
        {
            Min=No;
        }
    }
    printf("\n Press Any Key To Get Minimum From 10 Numbers =>");
    getche();

    printf("\n Minimum Number = %d",Min);

    printf("\n\n THANKS!!!");

    getch();
    return 0;
}

