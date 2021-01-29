#include<stdio.h>
#include<conio.h>

int main()
{
    int No=0,Dig=0,zCnt=0,Temp=0;

    printf("\n Enter Positive Numbers To Count Zeros In It:)");
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
            zCnt++;
        }
        Temp=Temp/10;
    }

    printf("\n Count of Zeros In Given Number %d is = %d",No,zCnt);
    getch();
    return 0;

}

