#include<stdio.h>
#include<conio.h>

int main()
{
    int No=0,Dig=0,OCnt=0,Temp=0;

    printf("\n Enter Positive Numbers To Count Odd Digit In It:)");
    scanf("%d",&No);

    Temp=No;

    if(No<0)
    {
        printf("Invalid Number");
        return -1;

    }

    while(Temp>0)
    {
        Dig=Temp%10;

        if(Dig%2!=0)         //if(Dig%2==1)
        {
            OCnt++;
        }
        Temp=Temp/10;
    }

    printf("\n Count of Odd Digits In Given Number %d is = %d",No,OCnt);
    getch();
    return 0;

}

