#include<stdio.h>
#include<conio.h>

int main()

{
    int i=0,j=0,c=0;

    printf("\n Print Column Value For Pattern => ");
    scanf("%d",&c);

    printf("\n======================================================\n");


    for(i=0;i<=c;i++)
    {
        for(j=0;j<=c;j++)
        {
            if(i>=j)
            {
                printf(" Q ");
            }
            else
            {
                printf(" ");
            }

        }

        printf("\n");
    }
    printf("\n======================================================\n");

    getch();
    return 0;

}

