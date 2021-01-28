#include<stdio.h>
#include<conio.h>
int main()
{
    int i=0,j=0,c=0,n=0;

    printf("\nEnter Value For Pattern ==>>");
    scanf("%d",&c);

    printf("\n****************************Pattern*****************************************\n\n");

    for(i=1;i<=c;i++)
    {
        for(j=1;j<=c;j++)
        {
            if(i>=j)
            {
                printf("%-3d",n);
                n++;
            }

        }

        printf("\n");
    }

    printf("\n****************************************************************************\n\n");
    getch();
    return 0;

}


