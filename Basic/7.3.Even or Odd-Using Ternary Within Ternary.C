#include<stdio.h>
#include<conio.h>

int main()

{
    int Num=0;

    printf("\nEnter Integer Number=");
    scanf("%d",&Num);

    (Num==0)?printf("\nGiven Number is Neutral\n"):(Num%2==0)?printf("\nNumber is Even\n"):printf("\nNumber is Odd\n");

    printf("\nTHANKS!!!!");

    getch();
    return 0;
}
