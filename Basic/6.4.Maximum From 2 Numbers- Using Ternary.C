#include<stdio.h>
#include<conio.h>

int main()

{
    int Num1=0,Num2=0;

    printf("\nEnter 2 Integer Numbers =");
    scanf("%d%d",&Num1,&Num2);

    (Num1==Num2)?printf("\nBoth Numbers Are Equal.\nPlease Enter Different Numbers.\n"):((Num1>Num2)?printf("\n%d is maximum",Num1):printf("\n%d is maximum",Num2));

    printf("\nTHANKS!!!");

    getch();
    return 0;
}

