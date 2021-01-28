#include<stdio.h>
#include<conio.h>

int main()

{
    int Num=0;

    printf("\nEnter Integer Number=");
    scanf("%d",&Num);

    if(Num%2==0)
    {
        printf("\nNumber is Even.");
    }
    else
    {
        printf("\nNumber is Odd.");
    }

    getch();
    return 0;
}
