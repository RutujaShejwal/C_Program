#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    int Roll_No = 0;        //%d
    char Name[80] = "";     //%s
    float Per = 0.0;        //%f
    char Grade = 'A';       //%c

    printf("\n Enter Student Details:");


    printf("\n\n\tEnter Student Roll_No =");
    scanf("%d",&Roll_No);

    printf("\n\tEnter Student Name =");
    scanf("%s",&Name);

    printf("\n\t Enter Student Percentage =");
    scanf("%f",&Per);

    printf("\n\tEnter Student Grade =");
    Grade = getche();                    //Grade = getchar();

    scanf("%c",&Grade);


    system("cls");

    printf("\n\tStudent Information\n");
    printf("\n******************************************************************");

    printf("\n\tRoll_No    =%d.\n\tName    =%s.\n\tPercentage =%f.\n\tGrade   =%c.",Roll_No,Name,Per,Grade);

    printf("\n******************************************************************");

    getch();
    return 0;

}
