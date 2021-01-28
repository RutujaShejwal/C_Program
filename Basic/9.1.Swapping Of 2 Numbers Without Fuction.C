#include<stdio.h>
#include<conio.h>

int main()
{
    int Num1=0,Num2=0;

    printf("\nEnter 2 Numbers =");
    scanf("%d%d",&Num1,&Num2);

    printf("\n\nBefore Swapping First Number=%d",Num1);
    printf("\n\nBefore Swapping Second Number=%d",Num2);

    Num1=Num1+Num2;
    Num2=Num1-Num2;
    Num1=Num1-Num2;

    printf("\n\nAfter Swapping First Number=%d",Num1);
    printf("\n\nAfter Swapping Second Number=%d",Num2);

    printf("\n\nTHANKS!!!");

    getch();
    return 0;
}
