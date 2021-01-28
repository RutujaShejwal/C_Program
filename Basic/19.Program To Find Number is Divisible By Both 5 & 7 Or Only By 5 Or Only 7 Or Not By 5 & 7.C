#include<stdio.h>
#include<conio.h>

int main()
{
    int Num=0;

    printf("\nEnter Number =");
    scanf("%d",&Num);

    if((Num%5==0)&&(Num%7==0))
    {
        printf("\nNumber is Divisible By Both 5 & 7.");
    }
    else if(Num%5==0)
    {
        printf("\nNumber is Divisible By 5.");
    }
    else if(Num%7==0)
    {
        printf("\nNumber is Divisible By 7.");
    }
    else
    {
        printf("\nNumber is Not Divisible By Both 5 & 7.");
    }

    printf("\n\nTHANKS!!");

    getch();
    return 0;
}
