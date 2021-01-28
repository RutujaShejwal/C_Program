#include<stdio.h>
#include<conio.h>

int main()
{
    char ch='\0';

    printf("\n Enter a Character To View Corresponding Message=");
    scanf("%c",&ch);

    if(ch=='A'||ch=='a')
    {
        printf("\n Welcome");
    }
    else if(ch=='B'||ch=='b')
    {
        printf("\n Good Bye");
    }
    else if(ch=='C'||ch=='c')
    {
        printf("\n Good Morning");
    }
    else if(ch=='D'||ch=='d')
    {
        printf("\n Have a Nice Day");
    }
    else
    {
        printf("\n There Is No Message For Such Character....");
    }

    printf("\n THANKS!!");

    getch();
    return 0;
}
