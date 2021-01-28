#include<stdio.h>
#include<conio.h>

int main()
{
    int Rn=0,Cn=0,SNo=0,ENo=0;

    printf("\n Enter Table Range => \n\n");
    scanf("%d%d",&SNo,&ENo);

    printf("\n Tables From %d To %d As Follows => \n\n",SNo,ENo);

    printf("\n\n>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");


    for(Rn=1;Rn<=10;Rn++)
    {
        for(Cn=1;Cn<=ENo;Cn++)
        {
            printf("%4d",Cn*Rn);
        }

        printf("\n");

    }

    printf("\n\n>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");

    getche();
    printf("\n\n THANKS!!!");

    getch();
    return 0;
}
