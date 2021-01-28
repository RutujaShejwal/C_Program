#include<stdio.h>
#include<conio.h>

int main()
{
    int Sal=0,Is_stud=0;

    printf("\nEnter Your Salary is");
    scanf("%d",&Sal);

    printf("\nEnter 1 if you are Student");
    scanf("%d",&Is_stud);

    if(Sal<=0)
    {
        if(Is_stud==1)
        {
            printf("\n Candidate is Student");
        }
        else
        {
            printf("\n Candidate is Fresher");
        }
    }
    else
    {
        if(Sal>60000)
        {
            printf("\n Candidate is Expert Employee");
        }
        else
        {
            printf("\n Candidate is Beginner Employee");
        }
    }

    printf("\n\n THANKS FOR INTERACTING....");

    getch();
    return 0;
}
