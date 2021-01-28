#include<stdio.h>
#include<conio.h>

int main()
{
    char ch='\0';

    printf("\n Enter a Character To View Corresponding Message=");
    scanf("%c",&ch);                                                // OR ch = getche();

    switch(ch)
    {
        case'a':
        case'A':
                printf("\n Welcome");
                break;
        case'b':
        case'B':
                printf("\n Good Morning");
                break;
        case'c':
        case'C':
        case'd':
        case'D':
                printf("\n Have a Nice Day");
                printf("\n Take Care");
                break;
        case'm':
        case'M':
        case'p':
        case'P':
        case'g':
        case'G':
                printf("\n Good Bye");
                break;
        default:
                printf("\n There Is No Message For Such Character....");
    }

    printf("\n THANKS!!");

    getch();
    return 0;
}
