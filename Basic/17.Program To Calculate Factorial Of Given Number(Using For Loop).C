#include<stdio.h>
#include<conio.h>

int main()
{
    int No=0,Fact=0,Temp=0;

    printf("\n Enter Numbers To Calculate It's Factorial =>");
    scanf("%d",&No);

    for(Fact=1,Temp=No;Temp>0;Fact*=Temp,Temp--);

    printf("\n Factorial Of Given Numbers %d is =%d",No,Fact);

    printf("\n\nThanks!!!!");
    getch();
    return 0;

}

