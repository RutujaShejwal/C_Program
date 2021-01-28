#include<stdio.h>
#include<conio.h>

int main()

{
    int Num=0;

    UP:
    printf("\nEnter Integer Number=");
    scanf("%d",&Num);

    if(Num==0)
    {
        printf("\nGiven Number is Neutral\n");
        goto UP;
    }

    (Num%2==0)?printf("\nNumber is Even\n"):printf("\nNumber is Odd\n");

    printf("\nTHANKS!!!!");

    getch();
    return 0;
}
