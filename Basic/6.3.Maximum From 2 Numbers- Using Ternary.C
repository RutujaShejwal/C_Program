#include<Stdio.h>
#include<conio.h>

int main()
{

    int Num1=0,Num2=0;

    UP:
    printf("\n Enter 2 Integer Numbers=");
    scanf("%d%d",&Num1,&Num2);

    if(Num1==Num2)
    {
        printf("\nBoth Numbers Are Equal.\nPlease Enter Different Numbers.\n");
        goto UP;
    }

    (Num1>Num2)?printf("\n%d is maximum",Num1):printf("\n%d is maximum",Num2);

    printf("\nThanks!!!");

    getch();
    return 0;
}
