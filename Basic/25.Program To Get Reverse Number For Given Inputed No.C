#include<stdio.h>
#include<conio.h>

int main()
{
    int No=0,Dig=0,Revnum=0,dSum=0,Temp=0;

    printf("\n Enter Positive Numbers To Calculate Its Digit Sum:)");
    scanf("%d",&No);

    Temp=No;

    if(No<0)
    {
        printf("Invalid Number");
        return -1;

    }

    while(Temp>0)                //    while(Temp>0)
    {                            //    {
        Dig=Temp%10;             //         Revnum=(Revnum*10)+(Temo%10);
        Revnum=(Revnum*10)+Dig;  //         Temp/=10;
        Temp=Temp/10;            //    }
    }

    printf("\n Reverse Of Given Number %d is = %d",No,Revnum);
    getch();
    return 0;

}

