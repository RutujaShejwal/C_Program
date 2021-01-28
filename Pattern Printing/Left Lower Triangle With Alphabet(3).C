#include<stdio.h>
#include<conio.h>
int main()
{
    int i=0,j=0,c=0;
    char ch='A';

    printf("\nEnter Value For Pattern >>= ");
    scanf("%d",&c);

    printf("\n****************************Pattern*****************************************\n\n");

    for(i=1;i<=c;i++)
    {
        for(ch='A',j=1;j<=c;j++,ch++)
        {
            if(i>=j)
            {
                printf("%2c",ch);
            }
            else
            {
                printf(" ");
            }

        }

        printf("\n");
    }

    printf("\n****************************************************************************\n");
    getch();
    return 0;

}
