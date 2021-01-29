#include<stdio.h>
#include<conio.h>

int main()
{
    int No=0,Temp=0,Revnum=0;

    printf("\n Enter Positive Numbers:)");
    scanf("%d",&No);

    Temp=No;

    if(No<0)
    {
        printf("Invalid Number");
        return -1;

    }

    while(Temp>0)
    {
        Revnum=(Revnum*10)+(Temp%10);
        Temp/=10;
    }

    if(No==Revnum)
    {
        printf("\n Given Number %d Is Palindrome",No);
    }

    else
    {
        printf("\n Given Number %d Is Not Palindrome",No);

    }

    getch();
    return 0;

}

