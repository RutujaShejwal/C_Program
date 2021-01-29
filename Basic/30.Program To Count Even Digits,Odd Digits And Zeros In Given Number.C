#include<stdio.h>
#include<conio.h>

int main()
{
    int No=0,Dig=0,ECnt=0,OCnt=0,ZCnt=0,Temp=0;

    printf("\n Enter Positive Numbers To Count Even,Odd,Zeros Digit In It:)");
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

        if(Dig==0)
        {
            ZCnt++;
        }

        else if(Dig%2==0)
        {
            ECnt++;
        }

        else
        {
            OCnt++;
        }
        Temp=Temp/10;
    }

    printf("\n\n Count of Even Digits In Given Number %d is = %d",No,ECnt);
    printf("\n\n Count of Odd Digits In Given Number %d is = %d",No,OCnt);
    printf("\n\n Count of Zeros In Given Number %d is = %d",No,ZCnt);

    getch();
    return 0;

}

