#include<stdio.h>
#include<conio.h>

int main()
{
    int No=0,Dig=0,dCnt=0,Temp=0;

    printf("\n Enter Positive Numbers To Calculate Its Digit Sum:)");
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
        dCnt++;
        Temp=Temp/10;
    }

    printf("\n Count Of Digit In Given Number %d is = %d",No,dCnt);
    getch();
    return 0;

}

