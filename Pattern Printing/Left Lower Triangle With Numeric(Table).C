#include<stdio.h>
#include<conio.h>
int main()
{
    int i=0,j=0,c=0,n=1,Temp=0;

    printf("\n Enter Value For Pattern >>= ");
    scanf("%d",&c);

    printf("\n Enter Number To Get Its Table IN Table => ");
    scanf("%d",&n);

    printf("\n****************************Pattern*****************************************\n\n");

    for(i=1;i<=c;i++)
    {
        for(j=1;j<=c;j++)
        {
            if(i>=j)
            {
                printf("%3d",n);
                n=n+Temp;
            }

        }

        printf("\n");
    }

    printf("\n****************************************************************************\n");
    getch();
    return 0;

}

