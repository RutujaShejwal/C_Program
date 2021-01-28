#include<stdio.h>
#include<conio.h>

int main()
{
    int No=0,Max=0,Cnt=0;

    printf("\n Enter 10 Numbers To Calculate Maximum => ");

    for(Cnt=1;Cnt<=10;Cnt++)
    {
        printf("\n\n Enter Number %d = ",Cnt);
        scanf("%d",&No);

        //LOGIC TO GET 1ST NUMBER DIRECTLY MAX
        if(Cnt==1)
        {
            Max=No;
            continue;
        }

        //LOGIC FOR FINDING MAX
        if(No>Max)
        {
            Max=No;
        }
    }
    printf("\n Press Any Key To Get Maximum From 10 Numbers =>");
    getche();

    printf("\n Maximum Number = %d",Max);

    printf("\n\n THANKS!!!");

    getch();
    return 0;
}
