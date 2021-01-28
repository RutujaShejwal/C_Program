#include<stdio.h>
#include<conio.h>

int main()
{
    int Rn=0,Cn=0;

    printf("\n Tables From 5 To 10 Are Follows => \n\n");

    for(Rn=1;Rn<=10;Rn++)
    {
        for(Cn=1;Cn<=10;Cn++)
        {
            printf("%4d",Cn*Rn);
        }

        printf("\n");

    }

    getche();
    printf("\n\n THANKS!!!");

    getch();
    return 0;
}

